using UnityEngine;
using System.Collections;

namespace gamecontext.uicontrol
{
	public class RoomItemButton : MonoBehaviour
	{
		private string _representingRoomName = "";

		public void SetRoomName (string roomName)
		{
			GetComponentInChildren<UnityEngine.UI.Text> ().text = roomName;
			_representingRoomName = roomName;
		}

		public void Notify ()
		{
			gamecontext.connection.JoinRoom.instance.Join (_representingRoomName);

			gameObject.SetActive (false);
		}
	}
}