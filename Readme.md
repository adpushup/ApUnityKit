# Ap Unity Kit - Quick Guide

## Get Started:

This guide is intended for publishers who want to monetize their Android apps/games built using Unity with AdPushup AdX ads. Integrating the Ap Unity Kit into an app is the first step toward implementing AdPushUp AdX Ads in your app.

## Implementation Steps:

### A: **Download the Ap Unity Kit plugin**:

Use the links below to download the Unity package for the plugin or to take a look at its code on GitHub.

- [View Source](https://github.com/adpushup/ApUnityKit)

### B: **Import the Ap Unity Kit plugin:**

<aside>
💡 It is advisable to add the **Google Mobile Ads Unity plugin** before adding Ap Unity Kit. Ap Unity Kit uses the **[Unity Play Services Resolver library](https://github.com/googlesamples/unity-jar-resolver)** which is distributed with the Google Mobile Ads Unity plugin.

</aside>

1. Open your project in the Unity editor. Select **Assets > Import Package > Custom Package** and find the `ApUnityKit.unitypackage` file you downloaded.
    
    ![Screenshot 2022-09-08 at 1.24.48 PM.png](images/Screenshot_2022-09-08_at_1.24.48_PM.png)
    
2. Make sure all of the files are selected and click **Import.**
    
    ![Screenshot 2022-09-08 at 1.16.15 PM.png](images/Screenshot_2022-09-08_at_1.16.15_PM.png)
    
3. In the Unity editor, select **Assets > External Dependency Manager > Android Resolver > Resolve**. The Unity External Dependency Manager library will copy the declared dependencies into the `Assets/Plugins/Android` directory of your Unity app.
    
    ![Screenshot 2022-09-08 at 1.26.03 PM.png](images/Screenshot_2022-09-08_at_1.26.03_PM.png)
    

### C: Usage:

You just need to call `ApUnityKit.PingAdClosed()`, `ApUnityKit.PingAdOpened()`, `ApUnityKit.PingAdLoaded()`, and `ApUnityKit.PingAdImpression()` with the ad event callbacks. 

```csharp
// Your Google Ads Events Callback Functions
private void HandleOnAdClosed(object sender, EventArgs e)
{
    ApUnityKit.PingAdClosed(adUnitId, rewardedAd.GetResponseInfo().GetResponseId());
}

private void HandleOnAdOpened(object sender, EventArgs e)
{
    ApUnityKit.PingAdOpened(adUnitId, rewardedAd.GetResponseInfo().GetResponseId());
}

private void HandleOnAdLoaded(object sender, EventArgs e)
{
    ApUnityKit.PingAdLoaded(adUnitId, rewardedAd.GetResponseInfo().GetResponseId());
}

private void HandleAdImpression(object sender, EventArgs e)
{
    ApUnityKit.PingAdImpression(adUnitId, nativeAd.GetResponseInfo().GetResponseId());
}
// ...
```
