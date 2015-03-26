﻿using UnityEngine;
using System.Collections;

namespace gamecontext.manager
{
	public class PawnManager : MonoBehaviour
	{
		public static GameObject Spawn (GameObject pawn, Vector3 position)
		{
			GameObject NewPawn = PhotonNetwork.Instantiate ("HeroPawn", position, Quaternion.identity, 0);
			NewPawn.transform.position = position;

			return NewPawn;
		}
	}
}