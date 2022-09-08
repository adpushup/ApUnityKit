using UnityEngine;
using GoogleMobileAds.Api;
using System;
using UnityEngine.SceneManagement;

public class BannerScene : MonoBehaviour {
    private BannerView bannerView;
    private string adUnitId = "/6499/example/banner";

    void Start() {
        // Request Banner Ad
        this.RequestBanner();
    }

    public void Back()
    {
        if (bannerView != null)
        {
            bannerView.Destroy();
            bannerView.Hide();
        }
       
        SceneManager.LoadScene(0);
    }

    public void RequestBanner()
    {

        if(bannerView != null)
        {
            bannerView.Destroy();
        }

        TS("Loading...");

        // Create a 320x50 banner at the top of the screen.
        bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        
        // Load the banner with the request.
        bannerView.LoadAd(request);

        bannerView.Show();

        // Called when an ad request has successfully loaded.
        bannerView.OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        bannerView.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        // Called when an ad is clicked.
        bannerView.OnAdOpening += HandleOnAdOpened;
        // Called when the user returned from the app after an ad click.
        bannerView.OnAdClosed += HandleOnAdClosed;
    }

    private void HandleOnAdClosed(object sender, EventArgs e)
    {
        TS("Ad Closed");
        ApUnityKit.PingAdClosed(adUnitId, bannerView.GetResponseInfo().GetResponseId());
    }

    private void HandleOnAdOpened(object sender, EventArgs e)
    {
        TS("Ad Opened");
        ApUnityKit.PingAdOpened(adUnitId, bannerView.GetResponseInfo().GetResponseId());
    }

    private void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs e)
    {
        TS("Ad Failed to load.");
    }

    private void HandleOnAdLoaded(object sender, EventArgs e)
    {
        TS("Ad Loaded");
        ApUnityKit.PingAdLoaded(adUnitId, bannerView.GetResponseInfo().GetResponseId());
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
