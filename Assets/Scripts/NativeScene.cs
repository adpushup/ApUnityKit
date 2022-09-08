using GoogleMobileAds.Api;
using System;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class NativeScene : MonoBehaviour
{

    private bool nativeAdLoaded;
    private NativeAd nativeAd;
    private  string adUnitId = "/6499/example/native";

    [SerializeField] Text adClickToAction;
    [SerializeField] RawImage image;

    // Start is called before the first frame update
    void Start()
    {
        RequestNativeAd();
    }

    void Update()
    {
        if (this.nativeAdLoaded)
        {
            this.nativeAdLoaded = false;
            // Get Texture2D for icon asset of native ad.
            Texture2D iconTexture = this.nativeAd.GetIconTexture();
            string callToAction = this.nativeAd.GetCallToActionText();

            image.texture = iconTexture;
            adClickToAction.text = callToAction;

            image.gameObject.AddComponent<UnityEngine.BoxCollider>();
            adClickToAction.gameObject.AddComponent<UnityEngine.BoxCollider>();


            if (!nativeAd.RegisterCallToActionGameObject(adClickToAction.gameObject))
            {
                TS("Failed to Regiester Call To Action");
            }
            if (!nativeAd.RegisterIconImageGameObject(image.gameObject))
            {
                TS("Failed to Regiester Icon");
            }
        }
    }

    public void Back()
    {
        SceneManager.LoadScene(0);
    }

    public void RequestNativeAd()
    {
       
        TS("Loading");
        AdLoader adLoader = new AdLoader.Builder(adUnitId)
            .ForNativeAd()
            .Build();
        adLoader.OnNativeAdLoaded += this.HandleUnifiedNativeAdLoaded;
        adLoader.OnAdFailedToLoad += this.HandleAdFailedToLoad;
        adLoader.OnNativeAdClicked += this.HandleNativeAdClicked;
        adLoader.OnNativeAdClosed += this.HandleNativeAdClosed;
        adLoader.OnNativeAdImpression += this.HandleAdImpression;
        adLoader.OnNativeAdOpening += this.HandleAdOpening;
        AdRequest request = new AdRequest.Builder().Build();
        adLoader.LoadAd(request);
    }

    
    private void HandleAdOpening(object sender, EventArgs e)
    {
        TS("Ad Open");
        ApUnityKit.PingAdOpened(adUnitId, nativeAd.GetResponseInfo().GetResponseId());
    }

    private void HandleAdImpression(object sender, EventArgs e)
    {
        TS("Ad Impression");
        ApUnityKit.PingAdImpression(adUnitId, nativeAd.GetResponseInfo().GetResponseId());
    }

    private void HandleNativeAdClosed(object sender, EventArgs e)
    {
        TS("Ad Closed");
        ApUnityKit.PingAdClosed(adUnitId, nativeAd.GetResponseInfo().GetResponseId());
    }

    private void HandleNativeAdClicked(object sender, EventArgs e)
    {
        TS("Ad Clicked");
    }

    private void HandleAdFailedToLoad(object sender, AdFailedToLoadEventArgs e)
    {
        TS("Ad Failed to load : " + e.ToString());
    }

    private void HandleUnifiedNativeAdLoaded(object sender, NativeAdEventArgs e)
    {
        TS("Ad Loaded");
        this.nativeAd = e.nativeAd;
        ApUnityKit.PingAdLoaded(adUnitId, nativeAd.GetResponseInfo().GetResponseId());
        this.nativeAdLoaded = true;
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
