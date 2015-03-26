using UnityEngine;
using System.Collections;

namespace gamecontext.mecanimcontrol
{
	public class PawnMecanimControl : MonoBehaviour
	{

		private Transform _cachedBody;
		private Vector3 previousPos = Vector3.zero;

		// Use this for initialization
		void Start ()
		{
			_cachedBody = transform.FindChild ("Body");
			previousPos = _cachedBody.position;
		}
	
		// Update is called once per frame
		void Update ()
		{
			GetComponent<Animator> ().SetFloat ("Speed", Vector3.Distance (_cachedBody.transform.position, previousPos));

			previousPos = _cachedBody.transform.position;
		}
	}
}