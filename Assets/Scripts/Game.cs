using UnityEngine;
using System.Collections;

namespace gamecontext
{
	public class Game : MonoBehaviour
	{
		public static Game instance;

		// Use this for initialization
		void Start ()
		{
			instance = this;
		}
	}
}