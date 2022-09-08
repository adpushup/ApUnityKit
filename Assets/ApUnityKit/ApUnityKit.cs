using UnityEngine;
using System;
using System.Collections.Generic;

/// <summary>
/// Class <c>ApUnityKit</c> helps you to directly send ping requests of diffrent ad callbacks.
/// </summary>
public static class ApUnityKit
{
    private static readonly AndroidJavaClass unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
    private static readonly AndroidJavaObject apAppKit = new AndroidJavaObject("com.adpushup.apmobilesdk.apappkit.ApAppKit");

    /// <summary>
    /// Method <c>PingAdImpression</c> is used to send ping request whenever an ad impression is recorded.
    /// </summary>
    ///  <param name="adUnitId">Google Ad Manager Ad Unit Id.</param>
    /// <param name="adResponseId"Ad Respocse ID.</param>
    public static void PingAdImpression(string adUnitId, string adResponseId)
    {
        Ping(adUnitId, adResponseId, "onAdImpression");
    }

    /// <summary>
    /// Method <c>PingAdOpened</c> is used to send ping request whenever an ad is opened.
    /// </summary>
    ///  <param name="adUnitId">Google Ad Manager Ad Unit Id.</param>
    /// <param name="adResponseId"Ad Respocse ID.</param>
    public static void PingAdOpened(string adUnitId, string adResponseId)
    {
        Ping(adUnitId, adResponseId, "onAdOpened");
    }

    /// <summary>
    /// Method <c>PingAdClosed</c> is used to send ping request whenever an ad is closed.
    /// </summary>
    ///  <param name="adUnitId">Google Ad Manager Ad Unit Id.</param>
    /// <param name="adResponseId"Ad Respocse ID.</param>
    public static void PingAdClosed(string adUnitId, string adResponseId)
    {
        Ping(adUnitId, adResponseId, "onAdClosed");
    }

    /// <summary>
    /// Method <c>PingAdLoaded</c> is used to send ping request whenever an ad is loaded.
    /// </summary>
    ///  <param name="adUnitId">Google Ad Manager Ad Unit Id.</param>
    /// <param name="adResponseId"Ad Respocse ID.</param>
    public static void PingAdLoaded(string adUnitId, string adResponseId)
    {
        Ping(adUnitId, adResponseId, "onAdLoaded");
    }

    /// <summary>
    /// Method <c>Ping</c> is used to send data from the Ap Unity Kit to Ap App Kit (Native Android Library).
    /// </summary>
    /// <param name="adUnitId">Google Ad Manager Ad Unit Id.</param>
    /// <param name="adResponseId"Ad Respocse ID.</param>
    /// <param name="callbackType">Callback that initiated this request.</param>
    private static void Ping(string adUnitId, string adResponseId, string callbackType)
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            if (apAppKit != null)
            {
                Dictionary<string, string> extras = new Dictionary<string, string>();
                extras.Add("plugin", "ApUnityKit");
                extras.Add("callback", callbackType);
                apAppKit.CallStatic("ping", unityClass.GetStatic<AndroidJavaObject>("currentActivity"), adUnitId, adResponseId, ConvertDictionaryToJavaMap(extras));
            }
            else
            {
                Debug.Log("Ap Unity Kit: Unable to initialize.");
            }
        }
        else
        {
            Debug.Log("Ap Unity Kit: Ap Unity Kit only support Android Apps.");
        }
        
    }

    /// <summary>
    /// Method <c>ConvertDictionaryToJavaMap</c> converts C# Dictionary into Java Map Onject.
    /// </summary>
    /// <param name="dictionary">Dictionary to be converted.</param>
    /// <returns>Java Map Object</returns>
    private static AndroidJavaObject ConvertDictionaryToJavaMap(Dictionary<string, string> dictionary)
    {

        AndroidJavaObject map = new AndroidJavaObject("java.util.HashMap");
        IntPtr putMethod = AndroidJNIHelper.GetMethodID(map.GetRawClass(), "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        foreach (var entry in dictionary)
        {
            AndroidJNI.CallObjectMethod(
                map.GetRawObject(),
                putMethod,
                AndroidJNIHelper.CreateJNIArgArray(new object[] { entry.Key, entry.Value })
            );
        }
        return map;
    }
}

