using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace gamecontext
{
	public class InputManager : MonoBehaviour
	{
		public static InputManager instance;
		public Camera _cachedMainCamera;
		private uicontrol.SelectRect _cachedSelectRect;
		public List<Hero> ControlableHeroes = new List<Hero> ();
		public List<Hero> SelectedHeroes = new List<Hero> ();

		// Use this for initialization
		void Start ()
		{
			instance = this;

			_cachedMainCamera = GameObject.FindWithTag ("MainCamera").GetComponent<Camera> ();
			_cachedSelectRect = GameObject.FindObjectOfType<uicontrol.SelectRect> ();
		}

		public void Run ()
		{
			StartCoroutine ("ReadInput");
		}

		public void Stop ()
		{
			StopCoroutine ("ReadInput");
		}
	
		private IEnumerator ReadInput ()
		{
			while (true) {
				// Left click
				if (Input.GetMouseButtonDown (0)) {
					StartDrawSelection ();
				}
				if (Input.GetMouseButtonUp (0)) {
					EndDrawSelection ();
				}

				// Right click
				if (Input.GetMouseButtonDown (1)) {
					Ray ray = _cachedMainCamera.ScreenPointToRay (Input.mousePosition);
					RaycastHit hit;
					if (Physics.Raycast (ray, out hit)) {
						if (hit.collider.CompareTag ("Floor")) {
							OrderMove (hit.point);
						}
					}
				}

				// Scroll screen
				Vector3 scrollAmount = Vector3.zero;
				if (Input.mousePosition.x < Screen.width * .05F) {
					scrollAmount += Vector3.left * 0.1F;
				}
				if (Input.mousePosition.x > Screen.width * .95F) {
					scrollAmount += Vector3.right * 0.1F;
				}
				if (Input.mousePosition.y < Screen.height * .05F) {
					scrollAmount += Vector3.down * 0.1F;
				}
				if (Input.mousePosition.y > Screen.height * .95F) {
					scrollAmount += Vector3.up * 0.1F;
				}

				yield return 0;
			}
		}

		private void StartDrawSelection ()
		{
			SelectedHeroes.Clear ();

			_cachedSelectRect.SelectionArea = new Rect ();
			_cachedSelectRect.SelectionArea.x = Input.mousePosition.x;
			_cachedSelectRect.SelectionArea.y = Input.mousePosition.y;

			Hero[] heroes = GameObject.FindObjectsOfType<Hero> ();
			int count = heroes.Length;
			for (int index = 0; index < count; index++) {
				heroes [index].SelectCursor.SetHide ();
			}

			_cachedSelectRect.IsSelecting = true;
		}

		private void EndDrawSelection ()
		{
			_cachedSelectRect.SelectionArea.width = Input.mousePosition.x - _cachedSelectRect.SelectionArea.x;
			_cachedSelectRect.SelectionArea.height = Input.mousePosition.y - _cachedSelectRect.SelectionArea.y;

			if (_cachedSelectRect.SelectionArea.width < 0) {
				_cachedSelectRect.SelectionArea.x = _cachedSelectRect.SelectionArea.x + _cachedSelectRect.SelectionArea.width;
				_cachedSelectRect.SelectionArea.width *= -1;
			}

			if (_cachedSelectRect.SelectionArea.height < 0) {
				_cachedSelectRect.SelectionArea.y = _cachedSelectRect.SelectionArea.y + _cachedSelectRect.SelectionArea.height;
				_cachedSelectRect.SelectionArea.height *= -1;
			}

			int count = ControlableHeroes.Count;
			for (int index = 0; index < count; index++) {
				Vector3 pos = _cachedMainCamera.WorldToScreenPoint (ControlableHeroes [index].transform.position);
				if (_cachedSelectRect.SelectionArea.Contains (pos)) {
					SelectedHeroes.Add (ControlableHeroes [index]);
					ControlableHeroes [index].SelectCursor.SetShow ();
				}
			}

			_cachedSelectRect.IsSelecting = false;
		}

		private void OrderMove (Vector3 TargetPosition)
		{
			Vector3 _herdCenter = Vector3.zero;
			int count = SelectedHeroes.Count;

			for (int index = 0; index < count; index++) {
				_herdCenter += SelectedHeroes [index].transform.position + new Vector3 (0, 3F, 0);
			}
			_herdCenter /= count;

		
			for (int index = 0; index < count; index++) {
				Hero hero = SelectedHeroes [index];
				Vector3 delta = _herdCenter - hero.transform.position;
				if (Vector3.Distance (hero.transform.position, TargetPosition) > delta.magnitude) {
					hero.CachedNMAgent.SetDestination (TargetPosition - delta);
				} else {
					hero.CachedNMAgent.SetDestination (_herdCenter);
				}
			}
		}
	}
}