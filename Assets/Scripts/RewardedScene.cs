using GoogleMobileAds.Api;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RewardedScene : MonoBehaviour
{
    private RewardedAd rewardedAd;
    private string adUnitId = "/6499/example/rewarded";
    // Start is called before the first frame update
    void Start()
    {
        this.RequestRewarded();
    }

    public void Back()
    {
        SceneManager.LoadScene(0);
    }

    public void ShowAd()
    {
        if (this.rewardedAd.IsLoaded())
        {
            this.rewardedAd.Show();
        }
        else
        {
            TS("Ad Not Loaded Yet");
        }
    }

    public void RequestRewarded()
    {
        
        this.rewardedAd = new RewardedAd(adUnitId);

        TS("Loading Ad...");

        // Called when an ad request has successfully loaded.
        this.rewardedAd.OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        this.rewardedAd.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        // Called when an ad is shown.
        this.rewardedAd.OnAdOpening += HandleOnAdOpened;
        // Called when an ad request failed to show.
        this.rewardedAd.OnAdFailedToShow += HandleAdFailedToShow;
        // Called when the user should be rewarded for interacting with the ad.
        this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        // Called when the ad is closed.
        this.rewardedAd.OnAdClosed += HandleOnAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        request.Extras.Add("android_video", "video_test");
        this.rewardedAd.LoadAd(request);

    }

    private void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs e)
    {
        TS("Ad Failed to load.");
    }

    public void HandleAdFailedToShow(object sender, AdErrorEventArgs args)
    {
        TS("Failed to show Ad");
    }

    public void HandleUserEarnedReward(object sender, Reward args)
    {
        TS("USER EARNED: " + args.Amount + " Amount of Type: " + args.Type);
    }

    private void HandleOnAdClosed(object sender, EventArgs e)
    {
        TS("Ad Closed");
        ApUnityKit.PingAdClosed(adUnitId, rewardedAd.GetResponseInfo().GetResponseId());
    }

    private void HandleOnAdOpened(object sender, EventArgs e)
    {
        TS("Ad Opened");
        ApUnityKit.PingAdOpened(adUnitId, rewardedAd.GetResponseInfo().GetResponseId());
    }

    private void HandleOnAdLoaded(object sender, EventArgs e)
    {
        ApUnityKit.PingAdLoaded(adUnitId, rewardedAd.GetResponseInfo().GetResponseId());
        TS("Ad Loaded");
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
