using UnityEngine;
using System.Collections;

namespace gamecontext.uicontrol
{
	public class CreateRoomInputField : MonoBehaviour
	{
		public void Confirm ()
		{
			string roomName = transform.FindChild ("InputField/Text").GetComponent<UnityEngine.UI.Text> ().text;

			if (roomName == "") {
				Debug.Log ("Room name can't be empty.");
				return;
			}

			gamecontext.connection.JoinRoom.instance.Join (roomName);

			gameObject.SetActive (false);
		}
	}

}