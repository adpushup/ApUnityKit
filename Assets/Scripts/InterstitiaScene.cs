using GoogleMobileAds.Api;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class InterstitiaScene : MonoBehaviour
{
    private InterstitialAd interstitial;
    private string adUnitId = "/6499/example/interstitial";
    // Start is called before the first frame update
    void Start()
    {
        this.RequestInterstitial();
    }

    public void Back()
    {
        if (this.interstitial != null)
        {
            this.interstitial.Destroy();
        }
        SceneManager.LoadScene(0);
    }

    public void ShowAd()
    {
        if (this.interstitial.IsLoaded())
        {
            this.interstitial.Show();
        } else
        {
            TS("Ad Not Loaded Yet");
        }
    }

    public void RequestInterstitial()
    {
        TS("Loading Ad..");
        // Initialize an InterstitialAd.
        this.interstitial = new InterstitialAd(adUnitId);

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();

        // Load the interstitial with the request.
        this.interstitial.LoadAd(request);


        // Called when an ad request has successfully loaded.
        this.interstitial.OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        // Called when an ad is shown.
        this.interstitial.OnAdOpening += HandleOnAdOpened;
        // Called when the ad is closed.
        this.interstitial.OnAdClosed += HandleOnAdClosed;
        
    }

    private void HandleOnAdClosed(object sender, EventArgs e)
    {
        TS("Ad Closed");
        ApUnityKit.PingAdClosed(adUnitId, interstitial.GetResponseInfo().GetResponseId());
    }

    private void HandleOnAdOpened(object sender, EventArgs e)
    {
        TS("Ad Opened");
        ApUnityKit.PingAdOpened(adUnitId, interstitial.GetResponseInfo().GetResponseId());
    }

    private void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs e)
    {
        TS("Ad Failed to load.");
    }

    private void HandleOnAdLoaded(object sender, EventArgs e)
    {
        TS("Ad Loaded");
        ApUnityKit.PingAdLoaded(adUnitId, interstitial.GetResponseInfo().GetResponseId());
    }

    private void TS(string message)
    {
        AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject unityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");

        if (unityActivity != null)
        {
            AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
            unityActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
            {
                AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
                toastObject.Call("show");
            }));
        }
    }
}
