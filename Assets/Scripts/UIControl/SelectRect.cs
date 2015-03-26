using UnityEngine;
using System.Collections;

namespace gamecontext.uicontrol
{
	public class SelectRect : MonoBehaviour
	{

		public Rect SelectionArea;
		public bool IsSelecting = false;
	
		// Update is called once per frame
		void Update ()
		{
			if (!IsSelecting) {
				transform.localScale = Vector3.zero;
				return;
			}

			SelectionArea.width = Input.mousePosition.x - SelectionArea.x;
			SelectionArea.height = Input.mousePosition.y - SelectionArea.y;

			Vector3 size = Vector3.zero;
			size.x = SelectionArea.width;
			size.y = SelectionArea.height;
			size.z = 1F;

			transform.position = new Vector2 (SelectionArea.x + size.x / 2, SelectionArea.y + size.y / 2);

			size /= 1000;
		
			transform.localScale = size;
		}
	}
}