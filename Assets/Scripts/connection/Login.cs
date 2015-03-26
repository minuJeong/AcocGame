using UnityEngine;
using System.Collections;

// Parse
using Parse;

// used for reading Facebook queries
using LitJson;

// used for Parse Login
using System.Threading.Tasks;


namespace gamecontext.connection
{
	public class Login : MonoBehaviour
	{
		public static Login instance;
		private string account;
		private string password;
		private bool isFacebookLogin = false;

		// Cached gameobjects
		private GameObject InputField_ID_Text;
		private GameObject InputField_Pass_Text;
		private GameObject GuestLoginButton;

		void Start ()
		{
			instance = this;

			InputField_ID_Text = transform.FindChild ("InputField_ID/Text").gameObject;
			InputField_Pass_Text = transform.FindChild ("InputField_Pass/Text").gameObject;
			GuestLoginButton = transform.FindChild ("Button_GuestLogin").gameObject;
		}

		private void DisableGuestLogin ()
		{
			InputField_ID_Text.GetComponentInParent<UnityEngine.UI.InputField> ().interactable = false;
			InputField_Pass_Text.GetComponentInParent<UnityEngine.UI.InputField> ().interactable = false;
			GuestLoginButton.GetComponent<UnityEngine.UI.Button> ().interactable = false;
		}

		private void EnableGuestLogin ()
		{
			InputField_ID_Text.GetComponentInParent<UnityEngine.UI.InputField> ().interactable = true;
			InputField_Pass_Text.GetComponentInParent<UnityEngine.UI.InputField> ().interactable = true;
			GuestLoginButton.GetComponent<UnityEngine.UI.Button> ().interactable = true;
		}

		public void GuestLogin ()
		{
			account = InputField_ID_Text.GetComponent<UnityEngine.UI.Text> ().text;
			password = InputField_Pass_Text.GetComponent<UnityEngine.UI.Text> ().text;

			if (account == "") {
				Debug.Log ("Account can't be empty");
				return;
			}

			if (password == "") {
				Debug.Log ("Password can't be empty");
				return;
			}

			DisableGuestLogin ();

			StartCoroutine (LoginParse ());
		}

		public void FacebookLogin ()
		{
			DisableGuestLogin ();

			FB.Init (delegate () {
				Debug.Log ("[Facebook] Initialized");
				FB.Login ("email,publish_actions,user_friends,user_about_me,user_likes", delegate (FBResult r_login) {

					if (FB.IsLoggedIn) {
						// Facebook login successful
						Debug.Log ("[Facebook] Logged in");
						FB.API ("/me?fields=id,name", Facebook.HttpMethod.GET, delegate (FBResult r_api) {
							JsonData response = LitJson.JsonMapper.ToObject (r_api.Text);

							account = response ["name"].ToString ();
							password = "D2-fD-2A-Vd-Jf" + response ["name"] + "_-E#$d-VDl'21D";

							Debug.Log ("[Facebook] User name: " + account);

							// Set flag
							isFacebookLogin = true;

							StartCoroutine (LoginParse ());
						});
					} else {
						Debug.Log ("[Facebook] Cancelled Login.");
						EnableGuestLogin ();
					}
				});
			});
		}

		private IEnumerator LoginParse ()
		{
			// Try login
			Task LoginTask = ParseUser.LogInAsync (account, password);
			while (!LoginTask.IsCompleted) {
				yield return 0;
				// Wait for login complete
			}

			// When login fails, try signup
			if (LoginTask.IsFaulted || LoginTask.IsCanceled) {
				Debug.Log ("[Parse] Login error: signing up..");
				var loginUser = new ParseUser () {
					Username = account,
					Password = password
				};

				Task SignupTask = loginUser.SignUpAsync ();
				while (! SignupTask.IsCompleted) {
					yield return 0;

					// Most cases, signup fails because server has same user name
					if (SignupTask.IsCanceled || SignupTask.IsFaulted) {
						Debug.Log ("[Parse] Signup error");
						EnableGuestLogin ();
						yield break;
					}
				}

				// Save facebook login state
				loginUser ["Facebook"] = isFacebookLogin;
				Task SaveTask = loginUser.SaveAsync ();
				while (! SaveTask.IsCompleted) {
					yield return 0;
				}
			}

			LoginComplete ();
		}

		private void LoginComplete ()
		{
			JoinRoom.instance.Init ();

			gameObject.SetActive (false);
		}
	}
}