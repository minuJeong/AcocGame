using UnityEngine;
using System.Collections;

namespace gamecontext.connection
{
	public class JoinRoom : Photon.MonoBehaviour
	{
		// Instance
		public static JoinRoom instance;

		// Cached
		private GameObject uiCanvas;
		private GameObject roomItemButton;
		private GameObject createRoomInputField;
		private GameObject loadingDisplay;
		private GameObject currentRoomDisplay;
		private RoomInfo[] roomList;

		void Start ()
		{
			instance = this;

			// Cache ui canvas
			uiCanvas = GameObject.FindGameObjectWithTag ("UICanvas");
			
			// Cache prefabs
			roomItemButton = Resources.Load<GameObject> ("Prefabs/UI/RoomItemButton");
			createRoomInputField = Resources.Load<GameObject> ("Prefabs/UI/CreateRoomInputField");
			loadingDisplay = Resources.Load <GameObject> ("Prefabs/UI/LoadingDisplay");
			currentRoomDisplay = Resources.Load <GameObject> ("Prefabs/UI/CurrentRoomDisplay");
		}

		// Initialize (will called after login)
		public void Init ()
		{
			// Set security policy
			Security.PrefetchSocketPolicy ("*", 843, 500);

			// Connection start..
			PhotonNetwork.ConnectUsingSettings ("v1.01");

			// Show loading
			loadingDisplay = (GameObject)Instantiate (loadingDisplay);
			loadingDisplay.transform.SetParent (uiCanvas.transform);
			loadingDisplay.transform.position = new Vector3 (Screen.width * .5F, Screen.height * .5F);
		}

		void OnJoinedLobby ()
		{
			loadingDisplay.SetActive (false);
		}

		void OnReceivedRoomListUpdate ()
		{
			// Get room list and display it
			roomList = PhotonNetwork.GetRoomList ();
			int roomCount = roomList.Length;

			// Found room?
			if (roomCount == 0) {
				// No: Add Inputfield to create a room
				GameObject NewCreateRoomInpufield = (GameObject)Instantiate (createRoomInputField);
				NewCreateRoomInpufield.transform.SetParent (uiCanvas.transform);
				var x = Screen.width * .5F;
				var y = Screen.height * .5F;
				NewCreateRoomInpufield.transform.position = new Vector3 (x, y, 0);
			} else {
				// Yes: Let player select a room
				for (int i = 0; i < roomCount; i++) {
					// Add Button
					GameObject NewRoomButton = (GameObject)Instantiate (roomItemButton);
					NewRoomButton.transform.SetParent (uiCanvas.transform);
					var x = Screen.width * .25F + (i % 3) * 170.0F;
					var y = Screen.height * .85F - Mathf.Floor (i / 3) * 60.0F;
					NewRoomButton.transform.position = new Vector3 (x, y, 0);
					
					// Set Room name
					NewRoomButton.GetComponent<gamecontext.uicontrol.RoomItemButton> ().SetRoomName (roomList [i].name);
				}
			}
		}

		public void Join (string roomName)
		{
			PhotonNetwork.JoinOrCreateRoom (roomName, new RoomOptions () {isVisible = true, maxPlayers = 10}, TypedLobby.Default);

			loadingDisplay.SetActive (true);
		}

		void OnJoinedRoom ()
		{
			loadingDisplay.SetActive (false);

			currentRoomDisplay = (GameObject)Instantiate (currentRoomDisplay);
			currentRoomDisplay.GetComponent<UnityEngine.UI.Text> ().text = "Room: " + PhotonNetwork.room.name;
			currentRoomDisplay.transform.SetParent (uiCanvas.transform);
			currentRoomDisplay.transform.position = new Vector3 (120.0F, Screen.height - 70.0F);

			GameObject NewPawn = gamecontext.manager.PawnManager.Spawn (Resources.Load<GameObject> ("Prefabs/pawn/HeroPawn"), new Vector3 (0, 0, 0));
			NewPawn.transform.SetParent (Game.instance.transform);

			InputManager.instance.ControlableHeroes.Add (NewPawn.GetComponent<Hero> ());
			InputManager.instance.Run ();
		}

		void OnConnectionFail ()
		{
			Debug.Log ("Failed connecting");
		}
	}
}