using UnityEngine;
using System.Collections;

namespace gamecontext.uicontrol
{
	public class SelectCursor : MonoBehaviour
	{
		private Vector3 _showScale = new Vector3 (1, 1, 1);
		private Vector3 _hideScale = new Vector3 (0, 0, 0);

		// Use this for initialization
		void Start ()
		{
			transform.localScale = _hideScale;
		}
	
		// Update is called once per frame
		void Update ()
		{
			transform.rotation = Quaternion.identity;
		}

		public void SetHide ()
		{
		
			iTween.ScaleTo (gameObject, iTween.Hash ("scale", _hideScale,
		                                         	 "time", 0.5F,
		                                         	 "easetype", iTween.EaseType.easeOutElastic));

		}

		public void SetShow ()
		{
			iTween.ScaleTo (gameObject, iTween.Hash ("scale", _showScale,
		                                         	 "time", 0.5F,
		                                         	 "easetype", iTween.EaseType.easeOutElastic));

		}
	}
}