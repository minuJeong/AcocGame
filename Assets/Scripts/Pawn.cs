using UnityEngine;
using System.Collections;

namespace gamecontext
{
	[RequireComponent (typeof(NavMeshAgent))]
	public class Pawn : MonoBehaviour
	{

		[HideInInspector]
		public NavMeshAgent
			CachedNMAgent;
		[HideInInspector]
		public uicontrol.SelectCursor
			SelectCursor;

		protected virtual void Awake ()
		{
			CachedNMAgent = GetComponent<NavMeshAgent> ();
			SelectCursor = transform.FindChild ("SelectCursor").GetComponent<uicontrol.SelectCursor> ();

			SelectCursor.SetHide ();
		}
	}
}