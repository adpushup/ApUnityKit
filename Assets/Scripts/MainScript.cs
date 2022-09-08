using GoogleMobileAds.Api;
using UnityEngine;
using UnityEngine.SceneManagement;
public class MainScript : MonoBehaviour
{
    void Start()
    {
        // Initialize Google Ads SDK.
        MobileAds.Initialize(initStatus => { });
    }

    public void OpenBanner()
    {
        SceneManager.LoadScene(1);
    }

    public void OpenIntertitial()
    {
        SceneManager.LoadScene(2);
    }

    public void OpenRewarded()
    {
        SceneManager.LoadScene(3);
    }

    public void OpenNative()
    {
        SceneManager.LoadScene(4);
    }

    public void Exit()
    {
        Application.Quit();
    }
}
