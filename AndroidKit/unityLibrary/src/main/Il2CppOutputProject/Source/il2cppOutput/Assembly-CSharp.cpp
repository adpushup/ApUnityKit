#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeAd,System.String>>
struct Dictionary_2_tB9477DB29B1BAC58B432B938B104B47C8D4C103F;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeAdEventArgs>
struct EventHandler_1_t4885CCAD039E84F8433D33286838B75CE8C3FC19;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Api.NativeAdEventArgs>
struct EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2;
// GoogleMobileAds.Api.AdLoader
struct AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F;
// BannerScene
struct BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A;
// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// GoogleMobileAds.Common.IAdLoaderClient
struct IAdLoaderClient_tF8A7D1DD7900EBB40ED3BB947225A08502443B15;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784;
// GoogleMobileAds.Common.INativeAdClient
struct INativeAdClient_t7F9453021411EFCCC382978EBD9D107501DBA784;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD;
// InterstitiaScene
struct InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62;
// MainScript
struct MainScript_tE5DA41EF9F6C72F24338683BF923785400FDC5FF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// GoogleMobileAds.Api.NativeAd
struct NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA;
// GoogleMobileAds.Api.NativeAdEventArgs
struct NativeAdEventArgs_t770FC594D541ED8FB5F81D322E2F451DEA908F45;
// GoogleMobileAds.Api.NativeAdInteractionHandler
struct NativeAdInteractionHandler_t8D68E7269295C7D408597E5CD8A769652C496CE4;
// NativeScene
struct NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09;
// RewardedScene
struct RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GoogleMobileAds.Api.AdLoader/Builder
struct Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t53925D96536F97B418172C0EF27AD9E6858FF348;
// BannerScene/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF;
// InterstitiaScene/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1;
// MainScript/<>c
struct U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NativeScene/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB;
// RewardedScene/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03525C01623F115F6A38E71A48AC73E7A2071FAE;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5352BC0A6C2100990D6AA70AEC2B66224B222B;
IL2CPP_EXTERN_C String_t* _stringLiteral27F8C5025727BC57743FCA6B548BED3ECCF93A8E;
IL2CPP_EXTERN_C String_t* _stringLiteral2BCFA4178F9E9B9A87433D699AB00BD2FBD64CDD;
IL2CPP_EXTERN_C String_t* _stringLiteral3639409ADC9040A811E8DBCA785479C926BF7CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5184401158D536D1C15FA2ED3DCF1F0A84DFE00C;
IL2CPP_EXTERN_C String_t* _stringLiteral59D3365161BA587AF8CDB2B3B6F342D1D49AB1FB;
IL2CPP_EXTERN_C String_t* _stringLiteral6E5E0D6325E4E9D566A55938781FDC1288CC0474;
IL2CPP_EXTERN_C String_t* _stringLiteral755A4A126D150B4F49B2525BCF15C46E5E5241B4;
IL2CPP_EXTERN_C String_t* _stringLiteral788D0708A4C369A4B97239434B4A6D84B6BAE930;
IL2CPP_EXTERN_C String_t* _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D;
IL2CPP_EXTERN_C String_t* _stringLiteral81D208023C1BFAA58A430168E97397844F6ED400;
IL2CPP_EXTERN_C String_t* _stringLiteral84B708BF0AA53461494F09821B2C6F2E420B9E26;
IL2CPP_EXTERN_C String_t* _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0;
IL2CPP_EXTERN_C String_t* _stringLiteral8CBD4BB426A3A8F51E52CAA025FFCB50588DC8E3;
IL2CPP_EXTERN_C String_t* _stringLiteral9C8F66013918995291D08AB92A0138130010A8D8;
IL2CPP_EXTERN_C String_t* _stringLiteral9E9E18A483073767F3F22A3CFF0F809AE6871155;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7C13AC9EB319BE3449468006F0DDE45B1A2D71;
IL2CPP_EXTERN_C String_t* _stringLiteralAF45887C25DE04BD2B93D110D811FBCFED423633;
IL2CPP_EXTERN_C String_t* _stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA;
IL2CPP_EXTERN_C String_t* _stringLiteralC505BDF30A894344FBAFC6982BBB60F87EC637F5;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5;
IL2CPP_EXTERN_C String_t* _stringLiteralCF27C08C0B1A93322F707A10482F4AFCBC4094B6;
IL2CPP_EXTERN_C String_t* _stringLiteralDC6934F0FB2E78B15B24D781947DE2EEE43CFA2B;
IL2CPP_EXTERN_C String_t* _stringLiteralF55218A2A16DC6F8AAA950B765613F5EE1204240;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFF1F5463CA8A469273093CD038B5E338B463B1B6;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerScene_HandleOnAdClosed_m09E581C4D2EB9E27BC944C413E749F19919A6C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerScene_HandleOnAdFailedToLoad_mADD8BB3F492FBB7B231D4806651FBE93EA8BD85A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerScene_HandleOnAdLoaded_m48A31798DE8E4DF5A187342305DACCA880715B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerScene_HandleOnAdOpened_m34723E9AA64B47956F0C20DB04806D0030341EEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitiaScene_HandleOnAdClosed_mEBF7BAAE7FB1138B21D0F53CFD6775D5CE690C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitiaScene_HandleOnAdFailedToLoad_m9510ACE151DD4787F7FAC5E65D21C914803CC352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitiaScene_HandleOnAdLoaded_m30BFA312A39F73437E3B71AB822851F563F0BD50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitiaScene_HandleOnAdOpened_mBC823F39D6695296D6B9A0629B9B235596B1105D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeScene_HandleAdFailedToLoad_m9FB0781A34E6026859F9D3EEF8848F232F408A4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeScene_HandleAdImpression_mFD21D6D1EE1AD860FC5768CAD2C292552524B4C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeScene_HandleAdOpening_mF93F04F1F476942E8E3A62F769210AB5C6C53D5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeScene_HandleNativeAdClicked_mB01A91992B1F1EDA9639E476CACB805823A52308_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeScene_HandleNativeAdClosed_m53A13945D7A854D7CC45F6EB0B49636B71695CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeScene_HandleUnifiedNativeAdLoaded_m11887149575231C83E08F34C824FE7E60B1CBAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedScene_HandleAdFailedToShow_m5DED144BCDF5563993960C0E6F57295902DEB425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedScene_HandleOnAdClosed_m0CC5375365AEAC96A25E27A13C48B3AD5093CB4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedScene_HandleOnAdFailedToLoad_mEB3E9E4B2D65B5E4E20D4261AFA8864D52AEBF77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedScene_HandleOnAdLoaded_m1D115F2D804B660096BE723A8CCB043780A93DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedScene_HandleOnAdOpened_m5E49C47311557F57A19F6DE57F74DEAE50CBD45A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedScene_HandleUserEarnedReward_m710C70187E4056BC4553D6625AF4FE85688A7689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_m062DA187591E8F87BF2D92D027440FAA89CF0167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CTSU3Eb__0_m9A08784D48F965F6873FC406CDE3E32785B09AA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CTSU3Eb__0_mDFE820567DD3DE0FCB7134899FE82DADD10B2173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CTSU3Eb__0_m9D9DE6EA7D2FFAA8A159F70C74D0BBEEF4EE4BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CTSU3Eb__0_m95C19AAB6A1C836E63B31458BB7438ADBED799E8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// GoogleMobileAds.Api.AdLoader
struct AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAdLoaderClient GoogleMobileAds.Api.AdLoader::_JbXkiPKh02NlsPpsMcImUltx9ve
	RuntimeObject* ____JbXkiPKh02NlsPpsMcImUltx9ve_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.AdLoader::_sQn8FmilF8s9qdveIMFQcpj1ONg
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ____sQn8FmilF8s9qdveIMFQcpj1ONg_1;
	// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeAdEventArgs> GoogleMobileAds.Api.AdLoader::_lufoxnjxsaL9zdoug0TJNmQg7nE
	EventHandler_1_t4885CCAD039E84F8433D33286838B75CE8C3FC19* ____lufoxnjxsaL9zdoug0TJNmQg7nE_2;
	// System.EventHandler`1<GoogleMobileAds.Api.NativeAdEventArgs> GoogleMobileAds.Api.AdLoader::_ul7vbISNp7XdaDw5MsRlY9IesdC
	EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE* ____ul7vbISNp7XdaDw5MsRlY9IesdC_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AdLoader::_vEQhrWawaRbIanxbiokc3EaQ476
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____vEQhrWawaRbIanxbiokc3EaQ476_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AdLoader::_15zYNepSlGzcErWmfUxyUJIPGhM
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____15zYNepSlGzcErWmfUxyUJIPGhM_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AdLoader::_hMXCuD1AifrcSD3l3SUlnbC0dT3
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____hMXCuD1AifrcSD3l3SUlnbC0dT3_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AdLoader::_9SvHpD5xBcgMrViD1aORnEeh7oE
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____9SvHpD5xBcgMrViD1aORnEeh7oE_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeAd,System.String>> GoogleMobileAds.Api.AdLoader::_wfp4t4WanI3jgjQaDSrdDyVzoKp
	Dictionary_2_tB9477DB29B1BAC58B432B938B104B47C8D4C103F* ____wfp4t4WanI3jgjQaDSrdDyVzoKp_8;
	// System.String GoogleMobileAds.Api.AdLoader::_kX7BwyAvsRnBxxs8aDAp4lf3UqbA
	String_t* ____kX7BwyAvsRnBxxs8aDAp4lf3UqbA_9;
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader::_CztKjyjc6K3eUd7DQp9NcuAedrR
	HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* ____CztKjyjc6K3eUd7DQp9NcuAedrR_10;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader::_FP0UnZdm3rhp4vWaVEDl2hjWubB
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____FP0UnZdm3rhp4vWaVEDl2hjWubB_11;
	// System.Int32 GoogleMobileAds.Api.AdLoader::_RkP3QHRhMUxZpNdHdaJeokUxTWq
	int32_t ____RkP3QHRhMUxZpNdHdaJeokUxTWq_12;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_4;
};

struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;
};

struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields
{
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB  : public RuntimeObject
{
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_5;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_9;
};

// GoogleMobileAds.Api.NativeAd
struct NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA  : public RuntimeObject
{
	// GoogleMobileAds.Api.NativeAdInteractionHandler GoogleMobileAds.Api.NativeAd::_3xup4O2h2P7algzAcociUEnVdgI
	NativeAdInteractionHandler_t8D68E7269295C7D408597E5CD8A769652C496CE4* ____3xup4O2h2P7algzAcociUEnVdgI_0;
	// GoogleMobileAds.Common.INativeAdClient GoogleMobileAds.Api.NativeAd::_61BVcF6CbZanavslYzvWu2ddeJlA
	RuntimeObject* ____61BVcF6CbZanavslYzvWu2ddeJlA_1;
	// UnityEngine.Texture2D GoogleMobileAds.Api.NativeAd::_Vrc4C4L9kpjGxJ34RVqyiThqfPc
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____Vrc4C4L9kpjGxJ34RVqyiThqfPc_2;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> GoogleMobileAds.Api.NativeAd::_b7ccL9pDwhEDSYH9wlnBmJ3v0CO
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ____b7ccL9pDwhEDSYH9wlnBmJ3v0CO_3;
	// UnityEngine.Texture2D GoogleMobileAds.Api.NativeAd::_f378FOmBEvtA7PLAQZMxyiZDcHEA
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____f378FOmBEvtA7PLAQZMxyiZDcHEA_4;
	// System.Boolean GoogleMobileAds.Api.NativeAd::_0s9GZMxAU3QRovdDNtQAK02RepJ
	bool ____0s9GZMxAU3QRovdDNtQAK02RepJ_5;
	// System.Int32 GoogleMobileAds.Api.NativeAd::_9ZUyc33bIEZvZPU9zuLIVEgaBLC
	int32_t ____9ZUyc33bIEZvZPU9zuLIVEgaBLC_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.NativeAd::_cqKq8DCHd8HjCOsZJzxjvupGUhB
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ____cqKq8DCHd8HjCOsZJzxjvupGUhB_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.NativeAd::_CuObolHVp68CW3oKDLjsIaDL8xwA
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____CuObolHVp68CW3oKDLjsIaDL8xwA_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.NativeAd::_euhidvJJ79saEcPs0pj6X4bcCsxA
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ____euhidvJJ79saEcPs0pj6X4bcCsxA_9;
};

// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09  : public RuntimeObject
{
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.RewardedAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___OnUserEarnedReward_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_10;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// GoogleMobileAds.Api.AdLoader/Builder
struct Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB  : public RuntimeObject
{
	// System.String GoogleMobileAds.Api.AdLoader/Builder::_kX7BwyAvsRnBxxs8aDAp4lf3UqbA
	String_t* ____kX7BwyAvsRnBxxs8aDAp4lf3UqbA_0;
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader/Builder::_CztKjyjc6K3eUd7DQp9NcuAedrR
	HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* ____CztKjyjc6K3eUd7DQp9NcuAedrR_1;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader/Builder::_FP0UnZdm3rhp4vWaVEDl2hjWubB
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____FP0UnZdm3rhp4vWaVEDl2hjWubB_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeAd,System.String>> GoogleMobileAds.Api.AdLoader/Builder::_wfp4t4WanI3jgjQaDSrdDyVzoKp
	Dictionary_2_tB9477DB29B1BAC58B432B938B104B47C8D4C103F* ____wfp4t4WanI3jgjQaDSrdDyVzoKp_3;
	// System.Int32 GoogleMobileAds.Api.AdLoader/Builder::_RkP3QHRhMUxZpNdHdaJeokUxTWq
	int32_t ____RkP3QHRhMUxZpNdHdaJeokUxTWq_4;
};

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t53925D96536F97B418172C0EF27AD9E6858FF348  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_2;
};

// BannerScene/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject BannerScene/<>c__DisplayClass8_0::unityActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___unityActivity_0;
	// System.String BannerScene/<>c__DisplayClass8_0::message
	String_t* ___message_1;
	// UnityEngine.AndroidJavaClass BannerScene/<>c__DisplayClass8_0::toastClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___toastClass_2;
};

// InterstitiaScene/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject InterstitiaScene/<>c__DisplayClass9_0::unityActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___unityActivity_0;
	// System.String InterstitiaScene/<>c__DisplayClass9_0::message
	String_t* ___message_1;
	// UnityEngine.AndroidJavaClass InterstitiaScene/<>c__DisplayClass9_0::toastClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___toastClass_2;
};

// MainScript/<>c
struct U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70  : public RuntimeObject
{
};

struct U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_StaticFields
{
	// MainScript/<>c MainScript/<>c::<>9
	U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70* ___U3CU3E9_0;
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> MainScript/<>c::<>9__0_0
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___U3CU3E9__0_0_1;
};

// NativeScene/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject NativeScene/<>c__DisplayClass14_0::unityActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___unityActivity_0;
	// System.String NativeScene/<>c__DisplayClass14_0::message
	String_t* ___message_1;
	// UnityEngine.AndroidJavaClass NativeScene/<>c__DisplayClass14_0::toastClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___toastClass_2;
};

// RewardedScene/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject RewardedScene/<>c__DisplayClass11_0::unityActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___unityActivity_0;
	// System.String RewardedScene/<>c__DisplayClass11_0::message
	String_t* ___message_1;
	// UnityEngine.AndroidJavaClass RewardedScene/<>c__DisplayClass11_0::toastClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___toastClass_2;
};

// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
};

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___U3CLoadAdErrorU3Ek__BackingField_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GoogleMobileAds.Api.NativeAdEventArgs
struct NativeAdEventArgs_t770FC594D541ED8FB5F81D322E2F451DEA908F45  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.NativeAd GoogleMobileAds.Api.NativeAdEventArgs::_rwepqrtYTavl3wDyX5cV38QgpcA
	NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* ____rwepqrtYTavl3wDyX5cV38QgpcA_1;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.NativeAdEventArgs>
struct EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC  : public MulticastDelegate_t
{
};

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BannerScene
struct BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GoogleMobileAds.Api.BannerView BannerScene::bannerView
	BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* ___bannerView_4;
};

// InterstitiaScene
struct InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GoogleMobileAds.Api.InterstitialAd InterstitiaScene::interstitial
	InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* ___interstitial_4;
};

// MainScript
struct MainScript_tE5DA41EF9F6C72F24338683BF923785400FDC5FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NativeScene
struct NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean NativeScene::nativeAdLoaded
	bool ___nativeAdLoaded_4;
	// GoogleMobileAds.Api.NativeAd NativeScene::nativeAd
	NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* ___nativeAd_5;
	// UnityEngine.UI.Text NativeScene::adClickToAction
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___adClickToAction_6;
	// UnityEngine.UI.RawImage NativeScene::image
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___image_7;
};

// RewardedScene
struct RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GoogleMobileAds.Api.RewardedAd RewardedScene::rewardedAd
	RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* ___rewardedAd_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// System.Void BannerScene::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_RequestBanner_m2E5438CFC5D271DC12DFEA289429CAC47E0164BE (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void BannerScene::TS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_TS_m931224C017FC8BF1734EDD74A5A6979C5B8F9B11 (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___adUnitId0, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___adSize1, int32_t ___position2, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85 (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdLoaded_m080F143D61034545D5375B44E3E5165CA444CCE2 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189 (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFailedToLoad_m92D031919F382DE6C7B6C87F0DAB95AB3B8EDD50 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdOpening_mFF4CE382B9A9C9A9E43F68D23829440F5417459F (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdClosed_m1238848F85F63AE1D5FAE380326E9FD246B5752A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void BannerScene/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m505F7F7D03059AE3DD0A24A503EFA4CE335F6EB5 (U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void InterstitiaScene::RequestInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_RequestInterstitial_mC59F7ABBC69EBB943533D887FADEB274E4AA3957 (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void InterstitiaScene::TS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_TS_mC2FB2BF1C10AC3BEFC679592CC56B984DF6B1A3A (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, String_t* ___adUnitId0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_m959F3574110E01E5E986D7AB584A9E62E65D7F97 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void InterstitiaScene/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mD3ED8589B445E1211AF56962231C25578DB54017 (U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void MainScript/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAFA5E702511BDFE7294BCCF5713C6DF2D5CA74EB (U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70* __this, const RuntimeMethod* method) ;
// System.Void NativeScene::RequestNativeAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_RequestNativeAd_mE86BF03B1D5799A387588C55D1D8F032CDC96E50 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D GoogleMobileAds.Api.NativeAd::GetIconTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeAd_GetIconTexture_mBB4F35A26CF3E0DCD171A8BFB80A20CC56761E31_inline (NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* __this, const RuntimeMethod* method) ;
// System.String GoogleMobileAds.Api.NativeAd::GetCallToActionText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAd_GetCallToActionText_mA1A58AD7B59C7A5EAC105CD9E6E5045023BFAFC3 (NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.NativeAd::RegisterCallToActionGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeAd_RegisterCallToActionGameObject_m5B3F4EE9B0AAE9A7851143B8AD41C40525E05F71 (NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Void NativeScene::TS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.NativeAd::RegisterIconImageGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeAd_RegisterIconImageGameObject_m16E9314C971370EBAB3B500781C8EBCC54975395 (NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdLoader/Builder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mCF648A9C58EB1EFBEF24D16FB6ED342036E4DD52 (Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB* __this, String_t* p0, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.AdLoader/Builder GoogleMobileAds.Api.AdLoader/Builder::ForNativeAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB* Builder_ForNativeAd_m55A0B748F0ECA17EDF8D08FE3FF480D9926FA6CF (Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.AdLoader GoogleMobileAds.Api.AdLoader/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* Builder_Build_m89B1D22714EC3E42966E0B0907A02DEEA792EC76 (Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.NativeAdEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8F597C89635844232D5761402974732AC3AEB221 (EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.AdLoader::add_OnNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.NativeAdEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoader_add_OnNativeAdLoaded_mE92A402E2844A51AA2F8EBE6178A5E303EFDE306 (AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* __this, EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdLoader::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoader_add_OnAdFailedToLoad_m95A27609B3FAF5C9FDF307491E8CD43302D62D57 (AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdLoader::add_OnNativeAdClicked(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoader_add_OnNativeAdClicked_m9899D7CE5EC7C879ADE2881DC4FB2C89B3C4BA2D (AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdLoader::add_OnNativeAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoader_add_OnNativeAdClosed_mA5A386502FE5506C89BEAAEE1A1D911768477CB4 (AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdLoader::add_OnNativeAdImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoader_add_OnNativeAdImpression_m825A3ADB37093C71132991AAAD888DE64D0E1F3A (AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdLoader::add_OnNativeAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoader_add_OnNativeAdOpening_m4104213719A5F583E9AA917B06A739D33F7B4796 (AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdLoader::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoader_LoadAd_m75FC0B80510CA0F8E1546AE7CCC17D5AD0B46F34 (AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.NativeAd GoogleMobileAds.Api.NativeAdEventArgs::get_nativeAd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* NativeAdEventArgs_get_nativeAd_mC885AA3AC79E210C2344A919D5A9A9AA7D73DBCD_inline (NativeAdEventArgs_t770FC594D541ED8FB5F81D322E2F451DEA908F45* __this, const RuntimeMethod* method) ;
// System.Void NativeScene/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m1FC4628F79D59ECB8DC15B120D3E807A53AF0424 (U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* __this, const RuntimeMethod* method) ;
// System.Void RewardedScene::RequestRewarded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_RequestRewarded_mE8009F005656F04C22808D95863C930F12877068 (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.RewardedAd::IsLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9_inline (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_mF937659797435830409614A6B7A9CC29FA031948 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Void RewardedScene::TS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m1070740DC6E2FBC47C0F16E8FFCAF39BB5EC8BAD (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, String_t* ___adUnitId0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdLoaded_mD0B12FB2ABBDE30E8732E99B5C779433E6BAD6F6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToLoad_mB26D105153B1DB189E66011AABA403D89431895B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdOpening_mD07D6D5227A775A714601F6E5632DE6466956E57 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m92F984A82DFB8E84BAA2A39357B726FFD08FA3B1 (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToShow_mC937D2B8125C2FBCDCED3248B6E7930E45D07574 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146 (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_mB60E7A9832C6D85C8F0BF788A019E684C72A6989 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_mACC55256BAE633DB7C82568589572958F0EC2C50 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::get_Extras()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* AdRequest_get_Extras_m4FC161022FA3E5235B49C72ACBA8B6390F65516F_inline (AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_m47B97DF0CABB6A9C4F75D61C39149B20C5E95DDB (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.Double GoogleMobileAds.Api.Reward::get_Amount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Reward_get_Amount_m2A4B7143299E26F5C7B36BA40D118A8F668CD734_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String GoogleMobileAds.Api.Reward::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Reward_get_Type_m52A71F274CBCCF3FEF1B0E37BEBA30304C8DE5DA_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void RewardedScene/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m63369860B3FFAEA5B0D2CDB340BE666A7AAA21E5 (U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BannerScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_Start_m5536284C88F33134E2A04959A4B2A3A311FFB383 (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, const RuntimeMethod* method) 
{
	{
		// this.RequestBanner();
		BannerScene_RequestBanner_m2E5438CFC5D271DC12DFEA289429CAC47E0164BE(__this, NULL);
		// }
		return;
	}
}
// System.Void BannerScene::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_Back_m6DF7A368BDD6F3C9DA5FD1861C27FB177C5C1C1F (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bannerView != null)
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_0 = __this->___bannerView_4;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// bannerView.Destroy();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_1 = __this->___bannerView_4;
		NullCheck(L_1);
		BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01(L_1, NULL);
		// bannerView.Hide();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_2 = __this->___bannerView_4;
		NullCheck(L_2);
		BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD(L_2, NULL);
	}

IL_001e:
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void BannerScene::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_RequestBanner_m2E5438CFC5D271DC12DFEA289429CAC47E0164BE (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerScene_HandleOnAdClosed_m09E581C4D2EB9E27BC944C413E749F19919A6C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerScene_HandleOnAdFailedToLoad_mADD8BB3F492FBB7B231D4806651FBE93EA8BD85A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerScene_HandleOnAdLoaded_m48A31798DE8E4DF5A187342305DACCA880715B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerScene_HandleOnAdOpened_m34723E9AA64B47956F0C20DB04806D0030341EEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral755A4A126D150B4F49B2525BCF15C46E5E5241B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_1 = NULL;
	{
		// string adUnitId = "/6499/example/banner";
		V_0 = _stringLiteral755A4A126D150B4F49B2525BCF15C46E5E5241B4;
		// if(bannerView != null)
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_0 = __this->___bannerView_4;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// bannerView.Destroy();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_1 = __this->___bannerView_4;
		NullCheck(L_1);
		BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01(L_1, NULL);
	}

IL_0019:
	{
		// TS("Loading...");
		BannerScene_TS_m931224C017FC8BF1734EDD74A5A6979C5B8F9B11(__this, _stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA, NULL);
		// bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
		String_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_3 = ((AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var))->___Banner_4;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_4 = (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)il2cpp_codegen_object_new(BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC(L_4, L_2, L_3, 1, NULL);
		__this->___bannerView_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerView_4), (void*)L_4);
		// AdRequest request = new AdRequest.Builder().Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_5 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_5, NULL);
		NullCheck(L_5);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_6;
		L_6 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_5, NULL);
		V_1 = L_6;
		// bannerView.LoadAd(request);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_7 = __this->___bannerView_4;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_8 = V_1;
		NullCheck(L_7);
		BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF(L_7, L_8, NULL);
		// bannerView.Show();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_9 = __this->___bannerView_4;
		NullCheck(L_9);
		BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE(L_9, NULL);
		// bannerView.OnAdLoaded += HandleOnAdLoaded;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_10 = __this->___bannerView_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_11, __this, (intptr_t)((void*)BannerScene_HandleOnAdLoaded_m48A31798DE8E4DF5A187342305DACCA880715B90_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		BannerView_add_OnAdLoaded_m080F143D61034545D5375B44E3E5165CA444CCE2(L_10, L_11, NULL);
		// bannerView.OnAdFailedToLoad += HandleOnAdFailedToLoad;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_12 = __this->___bannerView_4;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_13 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_13, __this, (intptr_t)((void*)BannerScene_HandleOnAdFailedToLoad_mADD8BB3F492FBB7B231D4806651FBE93EA8BD85A_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		BannerView_add_OnAdFailedToLoad_m92D031919F382DE6C7B6C87F0DAB95AB3B8EDD50(L_12, L_13, NULL);
		// bannerView.OnAdOpening += HandleOnAdOpened;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_14 = __this->___bannerView_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_15 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_15, __this, (intptr_t)((void*)BannerScene_HandleOnAdOpened_m34723E9AA64B47956F0C20DB04806D0030341EEC_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		BannerView_add_OnAdOpening_mFF4CE382B9A9C9A9E43F68D23829440F5417459F(L_14, L_15, NULL);
		// bannerView.OnAdClosed += HandleOnAdClosed;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_16 = __this->___bannerView_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_17 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_17, __this, (intptr_t)((void*)BannerScene_HandleOnAdClosed_m09E581C4D2EB9E27BC944C413E749F19919A6C94_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		BannerView_add_OnAdClosed_m1238848F85F63AE1D5FAE380326E9FD246B5752A(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void BannerScene::HandleOnAdClosed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_HandleOnAdClosed_m09E581C4D2EB9E27BC944C413E749F19919A6C94 (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55218A2A16DC6F8AAA950B765613F5EE1204240);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Closed");
		BannerScene_TS_m931224C017FC8BF1734EDD74A5A6979C5B8F9B11(__this, _stringLiteralF55218A2A16DC6F8AAA950B765613F5EE1204240, NULL);
		// }
		return;
	}
}
// System.Void BannerScene::HandleOnAdOpened(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_HandleOnAdOpened_m34723E9AA64B47956F0C20DB04806D0030341EEC (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BCFA4178F9E9B9A87433D699AB00BD2FBD64CDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Opened");
		BannerScene_TS_m931224C017FC8BF1734EDD74A5A6979C5B8F9B11(__this, _stringLiteral2BCFA4178F9E9B9A87433D699AB00BD2FBD64CDD, NULL);
		// }
		return;
	}
}
// System.Void BannerScene::HandleOnAdFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_HandleOnAdFailedToLoad_mADD8BB3F492FBB7B231D4806651FBE93EA8BD85A (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03525C01623F115F6A38E71A48AC73E7A2071FAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Failed to load.");
		BannerScene_TS_m931224C017FC8BF1734EDD74A5A6979C5B8F9B11(__this, _stringLiteral03525C01623F115F6A38E71A48AC73E7A2071FAE, NULL);
		// }
		return;
	}
}
// System.Void BannerScene::HandleOnAdLoaded(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_HandleOnAdLoaded_m48A31798DE8E4DF5A187342305DACCA880715B90 (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF27C08C0B1A93322F707A10482F4AFCBC4094B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Loaded");
		BannerScene_TS_m931224C017FC8BF1734EDD74A5A6979C5B8F9B11(__this, _stringLiteralCF27C08C0B1A93322F707A10482F4AFCBC4094B6, NULL);
		// }
		return;
	}
}
// System.Void BannerScene::TS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene_TS_m931224C017FC8BF1734EDD74A5A6979C5B8F9B11 (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CTSU3Eb__0_m9D9DE6EA7D2FFAA8A159F70C74D0BBEEF4EE4BBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* L_0 = (U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m505F7F7D03059AE3DD0A24A503EFA4CE335F6EB5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		L_1->___message_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___message_1), (void*)L_2);
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_1 = L_3;
		// AndroidJavaObject unityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* L_4 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_1;
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_5, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___unityActivity_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___unityActivity_0), (void*)L_6);
		// if (unityActivity != null)
		U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* L_7 = V_0;
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = L_7->___unityActivity_0;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
		U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* L_9 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_10, _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C, NULL);
		NullCheck(L_9);
		L_9->___toastClass_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___toastClass_2), (void*)L_10);
		// unityActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
		//     toastObject.Call("show");
		// }));
		U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* L_11 = V_0;
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = L_11->___unityActivity_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* L_15 = V_0;
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_16 = (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)il2cpp_codegen_object_new(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CTSU3Eb__0_m9D9DE6EA7D2FFAA8A159F70C74D0BBEEF4EE4BBE_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_12);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_14, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void BannerScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerScene__ctor_m543A67AE7F14BBE5CB44E373203DA1E85AACCA74 (BannerScene_t797A53F32CC951802396ACAF8E941F5532E0D02A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BannerScene/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m505F7F7D03059AE3DD0A24A503EFA4CE335F6EB5 (U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BannerScene/<>c__DisplayClass8_0::<TS>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CTSU3Eb__0_m9D9DE6EA7D2FFAA8A159F70C74D0BBEEF4EE4BBE (U3CU3Ec__DisplayClass8_0_t815FC215B1809DF01E24F7718416EEC01206D7DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___toastClass_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___unityActivity_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___message_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		int32_t L_7 = 0;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0, L_6, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		// toastObject.Call("show");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_10, NULL);
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InterstitiaScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_Start_mCB4E7E012469005C60C6C09D5E9C8C2FED493547 (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, const RuntimeMethod* method) 
{
	{
		// this.RequestInterstitial();
		InterstitiaScene_RequestInterstitial_mC59F7ABBC69EBB943533D887FADEB274E4AA3957(__this, NULL);
		// }
		return;
	}
}
// System.Void InterstitiaScene::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_Back_m0B0535572FC3BF1BB2D3E435C80DB3804A4CA6F7 (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.interstitial != null)
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_0 = __this->___interstitial_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// this.interstitial.Destroy();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_1 = __this->___interstitial_4;
		NullCheck(L_1);
		InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778(L_1, NULL);
	}

IL_0013:
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void InterstitiaScene::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_ShowAd_m4A03C3096E329E96D6ACEF9FCAE23E18B27DFCDE (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9E18A483073767F3F22A3CFF0F809AE6871155);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.interstitial.IsLoaded())
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_0 = __this->___interstitial_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.interstitial.Show();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_2 = __this->___interstitial_4;
		NullCheck(L_2);
		InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB(L_2, NULL);
		return;
	}

IL_0019:
	{
		// TS("Ad Not Loaded Yet");
		InterstitiaScene_TS_mC2FB2BF1C10AC3BEFC679592CC56B984DF6B1A3A(__this, _stringLiteral9E9E18A483073767F3F22A3CFF0F809AE6871155, NULL);
		// }
		return;
	}
}
// System.Void InterstitiaScene::RequestInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_RequestInterstitial_mC59F7ABBC69EBB943533D887FADEB274E4AA3957 (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitiaScene_HandleOnAdClosed_mEBF7BAAE7FB1138B21D0F53CFD6775D5CE690C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitiaScene_HandleOnAdFailedToLoad_m9510ACE151DD4787F7FAC5E65D21C914803CC352_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitiaScene_HandleOnAdLoaded_m30BFA312A39F73437E3B71AB822851F563F0BD50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitiaScene_HandleOnAdOpened_mBC823F39D6695296D6B9A0629B9B235596B1105D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5184401158D536D1C15FA2ED3DCF1F0A84DFE00C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC505BDF30A894344FBAFC6982BBB60F87EC637F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_1 = NULL;
	{
		// string adUnitId = "/6499/example/interstitial";
		V_0 = _stringLiteral5184401158D536D1C15FA2ED3DCF1F0A84DFE00C;
		// TS("Loading Ad..");
		InterstitiaScene_TS_mC2FB2BF1C10AC3BEFC679592CC56B984DF6B1A3A(__this, _stringLiteralC505BDF30A894344FBAFC6982BBB60F87EC637F5, NULL);
		// this.interstitial = new InterstitialAd(adUnitId);
		String_t* L_0 = V_0;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_1 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)il2cpp_codegen_object_new(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9(L_1, L_0, NULL);
		__this->___interstitial_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitial_4), (void*)L_1);
		// AdRequest request = new AdRequest.Builder().Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_2 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_2, NULL);
		NullCheck(L_2);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_3;
		L_3 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_2, NULL);
		V_1 = L_3;
		// this.interstitial.LoadAd(request);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_4 = __this->___interstitial_4;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_5 = V_1;
		NullCheck(L_4);
		InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117(L_4, L_5, NULL);
		// this.interstitial.OnAdLoaded += HandleOnAdLoaded;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_6 = __this->___interstitial_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)InterstitiaScene_HandleOnAdLoaded_m30BFA312A39F73437E3B71AB822851F563F0BD50_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D(L_6, L_7, NULL);
		// this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_8 = __this->___interstitial_4;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_9, __this, (intptr_t)((void*)InterstitiaScene_HandleOnAdFailedToLoad_m9510ACE151DD4787F7FAC5E65D21C914803CC352_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525(L_8, L_9, NULL);
		// this.interstitial.OnAdOpening += HandleOnAdOpened;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_10 = __this->___interstitial_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_11, __this, (intptr_t)((void*)InterstitiaScene_HandleOnAdOpened_mBC823F39D6695296D6B9A0629B9B235596B1105D_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterstitialAd_add_OnAdOpening_m959F3574110E01E5E986D7AB584A9E62E65D7F97(L_10, L_11, NULL);
		// this.interstitial.OnAdClosed += HandleOnAdClosed;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_12 = __this->___interstitial_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, __this, (intptr_t)((void*)InterstitiaScene_HandleOnAdClosed_mEBF7BAAE7FB1138B21D0F53CFD6775D5CE690C79_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void InterstitiaScene::HandleOnAdClosed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_HandleOnAdClosed_mEBF7BAAE7FB1138B21D0F53CFD6775D5CE690C79 (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55218A2A16DC6F8AAA950B765613F5EE1204240);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Closed");
		InterstitiaScene_TS_mC2FB2BF1C10AC3BEFC679592CC56B984DF6B1A3A(__this, _stringLiteralF55218A2A16DC6F8AAA950B765613F5EE1204240, NULL);
		// }
		return;
	}
}
// System.Void InterstitiaScene::HandleOnAdOpened(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_HandleOnAdOpened_mBC823F39D6695296D6B9A0629B9B235596B1105D (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BCFA4178F9E9B9A87433D699AB00BD2FBD64CDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Opened");
		InterstitiaScene_TS_mC2FB2BF1C10AC3BEFC679592CC56B984DF6B1A3A(__this, _stringLiteral2BCFA4178F9E9B9A87433D699AB00BD2FBD64CDD, NULL);
		// }
		return;
	}
}
// System.Void InterstitiaScene::HandleOnAdFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_HandleOnAdFailedToLoad_m9510ACE151DD4787F7FAC5E65D21C914803CC352 (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03525C01623F115F6A38E71A48AC73E7A2071FAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Failed to load.");
		InterstitiaScene_TS_mC2FB2BF1C10AC3BEFC679592CC56B984DF6B1A3A(__this, _stringLiteral03525C01623F115F6A38E71A48AC73E7A2071FAE, NULL);
		// }
		return;
	}
}
// System.Void InterstitiaScene::HandleOnAdLoaded(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_HandleOnAdLoaded_m30BFA312A39F73437E3B71AB822851F563F0BD50 (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF27C08C0B1A93322F707A10482F4AFCBC4094B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Loaded");
		InterstitiaScene_TS_mC2FB2BF1C10AC3BEFC679592CC56B984DF6B1A3A(__this, _stringLiteralCF27C08C0B1A93322F707A10482F4AFCBC4094B6, NULL);
		// }
		return;
	}
}
// System.Void InterstitiaScene::TS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene_TS_mC2FB2BF1C10AC3BEFC679592CC56B984DF6B1A3A (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CTSU3Eb__0_m95C19AAB6A1C836E63B31458BB7438ADBED799E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* L_0 = (U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mD3ED8589B445E1211AF56962231C25578DB54017(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		L_1->___message_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___message_1), (void*)L_2);
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_1 = L_3;
		// AndroidJavaObject unityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* L_4 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_1;
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_5, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___unityActivity_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___unityActivity_0), (void*)L_6);
		// if (unityActivity != null)
		U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* L_7 = V_0;
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = L_7->___unityActivity_0;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
		U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* L_9 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_10, _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C, NULL);
		NullCheck(L_9);
		L_9->___toastClass_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___toastClass_2), (void*)L_10);
		// unityActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
		//     toastObject.Call("show");
		// }));
		U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* L_11 = V_0;
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = L_11->___unityActivity_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* L_15 = V_0;
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_16 = (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)il2cpp_codegen_object_new(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CTSU3Eb__0_m95C19AAB6A1C836E63B31458BB7438ADBED799E8_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_12);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_14, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void InterstitiaScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitiaScene__ctor_m24B6F3BDBEA575EBCC71CFA4D5B03571F10EC62C (InterstitiaScene_tCCFF0EB09D40603BDE418B91A5A1C0BE5FE55D72* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InterstitiaScene/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mD3ED8589B445E1211AF56962231C25578DB54017 (U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void InterstitiaScene/<>c__DisplayClass9_0::<TS>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CTSU3Eb__0_m95C19AAB6A1C836E63B31458BB7438ADBED799E8 (U3CU3Ec__DisplayClass9_0_t44B6113973F56C580ED6A9F62EF785CC689824F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___toastClass_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___unityActivity_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___message_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		int32_t L_7 = 0;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0, L_6, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		// toastObject.Call("show");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_10, NULL);
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScript_Start_mBADE8064A3ECDE65CA419F12BBA580065CFD9017 (MainScript_tE5DA41EF9F6C72F24338683BF923785400FDC5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_m062DA187591E8F87BF2D92D027440FAA89CF0167_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B2_0 = NULL;
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B1_0 = NULL;
	{
		// MobileAds.Initialize(initStatus => { });
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = ((U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var);
		U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70* L_2 = ((U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_3 = (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*)il2cpp_codegen_object_new(Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__0_0_m062DA187591E8F87BF2D92D027440FAA89CF0167_RuntimeMethod_var), NULL);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_4 = L_3;
		((U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void MainScript::OpenBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScript_OpenBanner_m52E4F59F2D9845396514C054739FB78BB053FCCF (MainScript_tE5DA41EF9F6C72F24338683BF923785400FDC5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void MainScript::OpenIntertitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScript_OpenIntertitial_m7BC5B9B0EBAE698A586FD29B3159B8BDAC93DFD1 (MainScript_tE5DA41EF9F6C72F24338683BF923785400FDC5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void MainScript::OpenRewarded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScript_OpenRewarded_m62267EF91EAE978BBB0F8032ADE14E8C4F3EFCF2 (MainScript_tE5DA41EF9F6C72F24338683BF923785400FDC5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(3, NULL);
		// }
		return;
	}
}
// System.Void MainScript::OpenNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScript_OpenNative_mC7CCDF6D0B633B0EF866710178BCE0A0C50035C6 (MainScript_tE5DA41EF9F6C72F24338683BF923785400FDC5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(4);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(4, NULL);
		// }
		return;
	}
}
// System.Void MainScript::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScript_Exit_m2C4C5157FD6F9CDC372278DECA8EBB072B2706F0 (MainScript_tE5DA41EF9F6C72F24338683BF923785400FDC5FF* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void MainScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainScript__ctor_m815FA088F921DB1343C256EA721C073FADB5D713 (MainScript_tE5DA41EF9F6C72F24338683BF923785400FDC5FF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainScript/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m453DB5EBAB8655D1379C79FA6578AC93405E8238 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70* L_0 = (U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70*)il2cpp_codegen_object_new(U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAFA5E702511BDFE7294BCCF5713C6DF2D5CA74EB(L_0, NULL);
		((U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void MainScript/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAFA5E702511BDFE7294BCCF5713C6DF2D5CA74EB (U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MainScript/<>c::<Start>b__0_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_m062DA187591E8F87BF2D92D027440FAA89CF0167 (U3CU3Ec_t6731F19D69A5346B6AC9BDC3E858BB7A44BF0D70* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___initStatus0, const RuntimeMethod* method) 
{
	{
		// MobileAds.Initialize(initStatus => { });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_Start_mB375993E3B3947DB1EAABAA6DF4162E695AEC971 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, const RuntimeMethod* method) 
{
	{
		// RequestNativeAd();
		NativeScene_RequestNativeAd_mE86BF03B1D5799A387588C55D1D8F032CDC96E50(__this, NULL);
		// }
		return;
	}
}
// System.Void NativeScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_Update_mAA2BDB166E366724EB6594697764E00F01C26312 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral788D0708A4C369A4B97239434B4A6D84B6BAE930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7C13AC9EB319BE3449468006F0DDE45B1A2D71);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (this.nativeAdLoaded)
		bool L_0 = __this->___nativeAdLoaded_4;
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		// this.nativeAdLoaded = false;
		__this->___nativeAdLoaded_4 = (bool)0;
		// Texture2D iconTexture = this.nativeAd.GetIconTexture();
		NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* L_1 = __this->___nativeAd_5;
		NullCheck(L_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = NativeAd_GetIconTexture_mBB4F35A26CF3E0DCD171A8BFB80A20CC56761E31_inline(L_1, NULL);
		V_0 = L_2;
		// string callToAction = this.nativeAd.GetCallToActionText();
		NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* L_3 = __this->___nativeAd_5;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = NativeAd_GetCallToActionText_mA1A58AD7B59C7A5EAC105CD9E6E5045023BFAFC3(L_3, NULL);
		V_1 = L_4;
		// image.texture = iconTexture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = __this->___image_7;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_0;
		NullCheck(L_5);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_5, L_6, NULL);
		// adClickToAction.text = callToAction;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___adClickToAction_6;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// if (!nativeAd.RegisterCallToActionGameObject(adClickToAction.gameObject))
		NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* L_9 = __this->___nativeAd_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___adClickToAction_6;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = NativeAd_RegisterCallToActionGameObject_m5B3F4EE9B0AAE9A7851143B8AD41C40525E05F71(L_9, L_11, NULL);
		if (L_12)
		{
			goto IL_0062;
		}
	}
	{
		// TS("Failed to Regiester Call To Action");
		NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96(__this, _stringLiteralAE7C13AC9EB319BE3449468006F0DDE45B1A2D71, NULL);
	}

IL_0062:
	{
		// if (!nativeAd.RegisterIconImageGameObject(image.gameObject))
		NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* L_13 = __this->___nativeAd_5;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_14 = __this->___image_7;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_13);
		bool L_16;
		L_16 = NativeAd_RegisterIconImageGameObject_m16E9314C971370EBAB3B500781C8EBCC54975395(L_13, L_15, NULL);
		if (L_16)
		{
			goto IL_0085;
		}
	}
	{
		// TS("Failed to Regiester Icon");
		NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96(__this, _stringLiteral788D0708A4C369A4B97239434B4A6D84B6BAE930, NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void NativeScene::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_Back_m3050422E9731C3937853F987737D9F7A2CFD696D (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void NativeScene::RequestNativeAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_RequestNativeAd_mE86BF03B1D5799A387588C55D1D8F032CDC96E50 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeScene_HandleAdFailedToLoad_m9FB0781A34E6026859F9D3EEF8848F232F408A4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeScene_HandleAdImpression_mFD21D6D1EE1AD860FC5768CAD2C292552524B4C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeScene_HandleAdOpening_mF93F04F1F476942E8E3A62F769210AB5C6C53D5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeScene_HandleNativeAdClicked_mB01A91992B1F1EDA9639E476CACB805823A52308_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeScene_HandleNativeAdClosed_m53A13945D7A854D7CC45F6EB0B49636B71695CFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeScene_HandleUnifiedNativeAdLoaded_m11887149575231C83E08F34C824FE7E60B1CBAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59D3365161BA587AF8CDB2B3B6F342D1D49AB1FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5);
		s_Il2CppMethodInitialized = true;
	}
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_0 = NULL;
	{
		// string adUnitId = "/6499/example/native";
		// TS("Loading");
		NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96(__this, _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5, NULL);
		// AdLoader adLoader = new AdLoader.Builder(adUnitId)
		//     .ForNativeAd()
		//     .Build();
		Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB* L_0 = (Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB*)il2cpp_codegen_object_new(Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_mCF648A9C58EB1EFBEF24D16FB6ED342036E4DD52(L_0, _stringLiteral59D3365161BA587AF8CDB2B3B6F342D1D49AB1FB, NULL);
		NullCheck(L_0);
		Builder_t4B72628959BFFCABD22607C0C520C3C59D2CDCFB* L_1;
		L_1 = Builder_ForNativeAd_m55A0B748F0ECA17EDF8D08FE3FF480D9926FA6CF(L_0, NULL);
		NullCheck(L_1);
		AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* L_2;
		L_2 = Builder_Build_m89B1D22714EC3E42966E0B0907A02DEEA792EC76(L_1, NULL);
		// adLoader.OnNativeAdLoaded += this.HandleUnifiedNativeAdLoaded;
		AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* L_3 = L_2;
		EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE* L_4 = (EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE*)il2cpp_codegen_object_new(EventHandler_1_tDCEF31403D7A09353877DD9F10F8B3357B29D3AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler_1__ctor_m8F597C89635844232D5761402974732AC3AEB221(L_4, __this, (intptr_t)((void*)NativeScene_HandleUnifiedNativeAdLoaded_m11887149575231C83E08F34C824FE7E60B1CBAE1_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		AdLoader_add_OnNativeAdLoaded_mE92A402E2844A51AA2F8EBE6178A5E303EFDE306(L_3, L_4, NULL);
		// adLoader.OnAdFailedToLoad += this.HandleAdFailedToLoad;
		AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* L_5 = L_3;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_6, __this, (intptr_t)((void*)NativeScene_HandleAdFailedToLoad_m9FB0781A34E6026859F9D3EEF8848F232F408A4B_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		AdLoader_add_OnAdFailedToLoad_m95A27609B3FAF5C9FDF307491E8CD43302D62D57(L_5, L_6, NULL);
		// adLoader.OnNativeAdClicked += this.HandleNativeAdClicked;
		AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* L_7 = L_5;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_8, __this, (intptr_t)((void*)NativeScene_HandleNativeAdClicked_mB01A91992B1F1EDA9639E476CACB805823A52308_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		AdLoader_add_OnNativeAdClicked_m9899D7CE5EC7C879ADE2881DC4FB2C89B3C4BA2D(L_7, L_8, NULL);
		// adLoader.OnNativeAdClosed += this.HandleNativeAdClosed;
		AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* L_9 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_10, __this, (intptr_t)((void*)NativeScene_HandleNativeAdClosed_m53A13945D7A854D7CC45F6EB0B49636B71695CFE_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		AdLoader_add_OnNativeAdClosed_mA5A386502FE5506C89BEAAEE1A1D911768477CB4(L_9, L_10, NULL);
		// adLoader.OnNativeAdImpression += this.HandleAdImpression;
		AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* L_11 = L_9;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_12 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_12, __this, (intptr_t)((void*)NativeScene_HandleAdImpression_mFD21D6D1EE1AD860FC5768CAD2C292552524B4C8_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		AdLoader_add_OnNativeAdImpression_m825A3ADB37093C71132991AAAD888DE64D0E1F3A(L_11, L_12, NULL);
		// adLoader.OnNativeAdOpening += this.HandleAdOpening;
		AdLoader_t03E7A44D10C600C457300E092C4BB5E44183CA12* L_13 = L_11;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_14 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_14, __this, (intptr_t)((void*)NativeScene_HandleAdOpening_mF93F04F1F476942E8E3A62F769210AB5C6C53D5B_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		AdLoader_add_OnNativeAdOpening_m4104213719A5F583E9AA917B06A739D33F7B4796(L_13, L_14, NULL);
		// AdRequest request = new AdRequest.Builder().Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_15 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_15, NULL);
		NullCheck(L_15);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_16;
		L_16 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_15, NULL);
		V_0 = L_16;
		// adLoader.LoadAd(request);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_17 = V_0;
		NullCheck(L_13);
		AdLoader_LoadAd_m75FC0B80510CA0F8E1546AE7CCC17D5AD0B46F34(L_13, L_17, NULL);
		// }
		return;
	}
}
// System.Void NativeScene::HandleAdOpening(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_HandleAdOpening_mF93F04F1F476942E8E3A62F769210AB5C6C53D5B (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF1F5463CA8A469273093CD038B5E338B463B1B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Open");
		NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96(__this, _stringLiteralFF1F5463CA8A469273093CD038B5E338B463B1B6, NULL);
		// }
		return;
	}
}
// System.Void NativeScene::HandleAdImpression(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_HandleAdImpression_mFD21D6D1EE1AD860FC5768CAD2C292552524B4C8 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF45887C25DE04BD2B93D110D811FBCFED423633);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Impression");
		NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96(__this, _stringLiteralAF45887C25DE04BD2B93D110D811FBCFED423633, NULL);
		// }
		return;
	}
}
// System.Void NativeScene::HandleNativeAdClosed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_HandleNativeAdClosed_m53A13945D7A854D7CC45F6EB0B49636B71695CFE (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55218A2A16DC6F8AAA950B765613F5EE1204240);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Closed");
		NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96(__this, _stringLiteralF55218A2A16DC6F8AAA950B765613F5EE1204240, NULL);
		// }
		return;
	}
}
// System.Void NativeScene::HandleNativeAdClicked(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_HandleNativeAdClicked_mB01A91992B1F1EDA9639E476CACB805823A52308 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C8F66013918995291D08AB92A0138130010A8D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Clicked");
		NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96(__this, _stringLiteral9C8F66013918995291D08AB92A0138130010A8D8, NULL);
		// }
		return;
	}
}
// System.Void NativeScene::HandleAdFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_HandleAdFailedToLoad_m9FB0781A34E6026859F9D3EEF8848F232F408A4B (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC6934F0FB2E78B15B24D781947DE2EEE43CFA2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Failed to load : " + e.ToString());
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDC6934F0FB2E78B15B24D781947DE2EEE43CFA2B, L_1, NULL);
		NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeScene::HandleUnifiedNativeAdLoaded(System.Object,GoogleMobileAds.Api.NativeAdEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_HandleUnifiedNativeAdLoaded_m11887149575231C83E08F34C824FE7E60B1CBAE1 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, RuntimeObject* ___sender0, NativeAdEventArgs_t770FC594D541ED8FB5F81D322E2F451DEA908F45* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF27C08C0B1A93322F707A10482F4AFCBC4094B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Loaded");
		NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96(__this, _stringLiteralCF27C08C0B1A93322F707A10482F4AFCBC4094B6, NULL);
		// this.nativeAd = e.nativeAd;
		NativeAdEventArgs_t770FC594D541ED8FB5F81D322E2F451DEA908F45* L_0 = ___e1;
		NullCheck(L_0);
		NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* L_1;
		L_1 = NativeAdEventArgs_get_nativeAd_mC885AA3AC79E210C2344A919D5A9A9AA7D73DBCD_inline(L_0, NULL);
		__this->___nativeAd_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nativeAd_5), (void*)L_1);
		// this.nativeAdLoaded = true;
		__this->___nativeAdLoaded_4 = (bool)1;
		// }
		return;
	}
}
// System.Void NativeScene::TS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene_TS_m3ED75CFF6DDAC189F149938D8998ECC8E22B8E96 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CTSU3Eb__0_mDFE820567DD3DE0FCB7134899FE82DADD10B2173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* L_0 = (U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m1FC4628F79D59ECB8DC15B120D3E807A53AF0424(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		L_1->___message_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___message_1), (void*)L_2);
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_1 = L_3;
		// AndroidJavaObject unityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* L_4 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_1;
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_5, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___unityActivity_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___unityActivity_0), (void*)L_6);
		// if (unityActivity != null)
		U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* L_7 = V_0;
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = L_7->___unityActivity_0;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
		U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* L_9 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_10, _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C, NULL);
		NullCheck(L_9);
		L_9->___toastClass_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___toastClass_2), (void*)L_10);
		// unityActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
		//     toastObject.Call("show");
		// }));
		U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* L_11 = V_0;
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = L_11->___unityActivity_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* L_15 = V_0;
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_16 = (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)il2cpp_codegen_object_new(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CTSU3Eb__0_mDFE820567DD3DE0FCB7134899FE82DADD10B2173_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_12);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_14, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void NativeScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeScene__ctor_m5AF7D36DC2FAC6D64016AC4D2304ADC547A842B1 (NativeScene_tDD09331E15BAEA7E7AAEF3B56408EEC8D49477CD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeScene/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m1FC4628F79D59ECB8DC15B120D3E807A53AF0424 (U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeScene/<>c__DisplayClass14_0::<TS>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CTSU3Eb__0_mDFE820567DD3DE0FCB7134899FE82DADD10B2173 (U3CU3Ec__DisplayClass14_0_t9B27134EF07D3E441C7B40CF779F519C106E1FBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___toastClass_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___unityActivity_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___message_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		int32_t L_7 = 0;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0, L_6, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		// toastObject.Call("show");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_10, NULL);
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RewardedScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_Start_m34B1901774D1520D13C32608BBCDE0B630DA6D2F (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, const RuntimeMethod* method) 
{
	{
		// this.RequestRewarded();
		RewardedScene_RequestRewarded_mE8009F005656F04C22808D95863C930F12877068(__this, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_Back_mF85526DE37D60385BD9D1D5216A2995534C7343E (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_ShowAd_mD8372ECDC2BDFE1866C6C55B58D567DA632E625A (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9E18A483073767F3F22A3CFF0F809AE6871155);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.rewardedAd.IsLoaded())
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_0 = __this->___rewardedAd_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.rewardedAd.Show();
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_2 = __this->___rewardedAd_4;
		NullCheck(L_2);
		RewardedAd_Show_mF937659797435830409614A6B7A9CC29FA031948(L_2, NULL);
		return;
	}

IL_0019:
	{
		// TS("Ad Not Loaded Yet");
		RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF(__this, _stringLiteral9E9E18A483073767F3F22A3CFF0F809AE6871155, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::RequestRewarded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_RequestRewarded_mE8009F005656F04C22808D95863C930F12877068 (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedScene_HandleAdFailedToShow_m5DED144BCDF5563993960C0E6F57295902DEB425_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedScene_HandleOnAdClosed_m0CC5375365AEAC96A25E27A13C48B3AD5093CB4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedScene_HandleOnAdFailedToLoad_mEB3E9E4B2D65B5E4E20D4261AFA8864D52AEBF77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedScene_HandleOnAdLoaded_m1D115F2D804B660096BE723A8CCB043780A93DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedScene_HandleOnAdOpened_m5E49C47311557F57A19F6DE57F74DEAE50CBD45A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedScene_HandleUserEarnedReward_m710C70187E4056BC4553D6625AF4FE85688A7689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5352BC0A6C2100990D6AA70AEC2B66224B222B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F8C5025727BC57743FCA6B548BED3ECCF93A8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81D208023C1BFAA58A430168E97397844F6ED400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CBD4BB426A3A8F51E52CAA025FFCB50588DC8E3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_1 = NULL;
	{
		// string adUnitId = "/6499/example/rewarded";
		V_0 = _stringLiteral27F8C5025727BC57743FCA6B548BED3ECCF93A8E;
		// this.rewardedAd = new RewardedAd(adUnitId);
		String_t* L_0 = V_0;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_1 = (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*)il2cpp_codegen_object_new(RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RewardedAd__ctor_m1070740DC6E2FBC47C0F16E8FFCAF39BB5EC8BAD(L_1, L_0, NULL);
		__this->___rewardedAd_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedAd_4), (void*)L_1);
		// TS("Loading Ad...");
		RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF(__this, _stringLiteral81D208023C1BFAA58A430168E97397844F6ED400, NULL);
		// this.rewardedAd.OnAdLoaded += HandleOnAdLoaded;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_2 = __this->___rewardedAd_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)RewardedScene_HandleOnAdLoaded_m1D115F2D804B660096BE723A8CCB043780A93DF3_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RewardedAd_add_OnAdLoaded_mD0B12FB2ABBDE30E8732E99B5C779433E6BAD6F6(L_2, L_3, NULL);
		// this.rewardedAd.OnAdFailedToLoad += HandleOnAdFailedToLoad;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_4 = __this->___rewardedAd_4;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_5 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_5, __this, (intptr_t)((void*)RewardedScene_HandleOnAdFailedToLoad_mEB3E9E4B2D65B5E4E20D4261AFA8864D52AEBF77_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		RewardedAd_add_OnAdFailedToLoad_mB26D105153B1DB189E66011AABA403D89431895B(L_4, L_5, NULL);
		// this.rewardedAd.OnAdOpening += HandleOnAdOpened;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_6 = __this->___rewardedAd_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)RewardedScene_HandleOnAdOpened_m5E49C47311557F57A19F6DE57F74DEAE50CBD45A_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		RewardedAd_add_OnAdOpening_mD07D6D5227A775A714601F6E5632DE6466956E57(L_6, L_7, NULL);
		// this.rewardedAd.OnAdFailedToShow += HandleAdFailedToShow;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_8 = __this->___rewardedAd_4;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)il2cpp_codegen_object_new(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_m92F984A82DFB8E84BAA2A39357B726FFD08FA3B1(L_9, __this, (intptr_t)((void*)RewardedScene_HandleAdFailedToShow_m5DED144BCDF5563993960C0E6F57295902DEB425_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		RewardedAd_add_OnAdFailedToShow_mC937D2B8125C2FBCDCED3248B6E7930E45D07574(L_8, L_9, NULL);
		// this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_10 = __this->___rewardedAd_4;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_11 = (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)il2cpp_codegen_object_new(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146(L_11, __this, (intptr_t)((void*)RewardedScene_HandleUserEarnedReward_m710C70187E4056BC4553D6625AF4FE85688A7689_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		RewardedAd_add_OnUserEarnedReward_mB60E7A9832C6D85C8F0BF788A019E684C72A6989(L_10, L_11, NULL);
		// this.rewardedAd.OnAdClosed += HandleOnAdClosed;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_12 = __this->___rewardedAd_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, __this, (intptr_t)((void*)RewardedScene_HandleOnAdClosed_m0CC5375365AEAC96A25E27A13C48B3AD5093CB4C_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		RewardedAd_add_OnAdClosed_mACC55256BAE633DB7C82568589572958F0EC2C50(L_12, L_13, NULL);
		// AdRequest request = new AdRequest.Builder().Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_14 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_14, NULL);
		NullCheck(L_14);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_15;
		L_15 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_14, NULL);
		V_1 = L_15;
		// request.Extras.Add("android_video", "video_test");
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_16 = V_1;
		NullCheck(L_16);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17;
		L_17 = AdRequest_get_Extras_m4FC161022FA3E5235B49C72ACBA8B6390F65516F_inline(L_16, NULL);
		NullCheck(L_17);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_17, _stringLiteral1A5352BC0A6C2100990D6AA70AEC2B66224B222B, _stringLiteral8CBD4BB426A3A8F51E52CAA025FFCB50588DC8E3, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// this.rewardedAd.LoadAd(request);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_18 = __this->___rewardedAd_4;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_19 = V_1;
		NullCheck(L_18);
		RewardedAd_LoadAd_m47B97DF0CABB6A9C4F75D61C39149B20C5E95DDB(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::HandleOnAdFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_HandleOnAdFailedToLoad_mEB3E9E4B2D65B5E4E20D4261AFA8864D52AEBF77 (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03525C01623F115F6A38E71A48AC73E7A2071FAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Failed to load.");
		RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF(__this, _stringLiteral03525C01623F115F6A38E71A48AC73E7A2071FAE, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::HandleAdFailedToShow(System.Object,GoogleMobileAds.Api.AdErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_HandleAdFailedToShow_m5DED144BCDF5563993960C0E6F57295902DEB425 (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, RuntimeObject* ___sender0, AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B708BF0AA53461494F09821B2C6F2E420B9E26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Failed to show Ad");
		RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF(__this, _stringLiteral84B708BF0AA53461494F09821B2C6F2E420B9E26, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::HandleUserEarnedReward(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_HandleUserEarnedReward_m710C70187E4056BC4553D6625AF4FE85688A7689 (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3639409ADC9040A811E8DBCA785479C926BF7CAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E5E0D6325E4E9D566A55938781FDC1288CC0474);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// TS("USER EARNED: " + args.Amount + " Amount of Type: " + args.Type);
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_0 = ___args1;
		NullCheck(L_0);
		double L_1;
		L_1 = Reward_get_Amount_m2A4B7143299E26F5C7B36BA40D118A8F668CD734_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_3 = ___args1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Reward_get_Type_m52A71F274CBCCF3FEF1B0E37BEBA30304C8DE5DA_inline(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral6E5E0D6325E4E9D566A55938781FDC1288CC0474, L_2, _stringLiteral3639409ADC9040A811E8DBCA785479C926BF7CAA, L_4, NULL);
		RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::HandleOnAdClosed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_HandleOnAdClosed_m0CC5375365AEAC96A25E27A13C48B3AD5093CB4C (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55218A2A16DC6F8AAA950B765613F5EE1204240);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Closed");
		RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF(__this, _stringLiteralF55218A2A16DC6F8AAA950B765613F5EE1204240, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::HandleOnAdOpened(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_HandleOnAdOpened_m5E49C47311557F57A19F6DE57F74DEAE50CBD45A (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BCFA4178F9E9B9A87433D699AB00BD2FBD64CDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Opened");
		RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF(__this, _stringLiteral2BCFA4178F9E9B9A87433D699AB00BD2FBD64CDD, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::HandleOnAdLoaded(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_HandleOnAdLoaded_m1D115F2D804B660096BE723A8CCB043780A93DF3 (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF27C08C0B1A93322F707A10482F4AFCBC4094B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TS("Ad Loaded");
		RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF(__this, _stringLiteralCF27C08C0B1A93322F707A10482F4AFCBC4094B6, NULL);
		// }
		return;
	}
}
// System.Void RewardedScene::TS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene_TS_m591DDD9A53D823CB5AB2D468ACA0950721D346EF (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CTSU3Eb__0_m9A08784D48F965F6873FC406CDE3E32785B09AA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* L_0 = (U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass11_0__ctor_m63369860B3FFAEA5B0D2CDB340BE666A7AAA21E5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		L_1->___message_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___message_1), (void*)L_2);
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_1 = L_3;
		// AndroidJavaObject unityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* L_4 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_1;
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_5, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___unityActivity_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___unityActivity_0), (void*)L_6);
		// if (unityActivity != null)
		U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* L_7 = V_0;
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = L_7->___unityActivity_0;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
		U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* L_9 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_10, _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C, NULL);
		NullCheck(L_9);
		L_9->___toastClass_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___toastClass_2), (void*)L_10);
		// unityActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
		//     toastObject.Call("show");
		// }));
		U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* L_11 = V_0;
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = L_11->___unityActivity_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* L_15 = V_0;
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_16 = (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)il2cpp_codegen_object_new(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CTSU3Eb__0_m9A08784D48F965F6873FC406CDE3E32785B09AA7_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_12);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_14, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void RewardedScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedScene__ctor_m16961527978C3A43D0CC401688FF4D7B36AFC798 (RewardedScene_t3F1AFB13DE2405EA55C8E1287CFA145548D96652* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RewardedScene/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m63369860B3FFAEA5B0D2CDB340BE666A7AAA21E5 (U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RewardedScene/<>c__DisplayClass11_0::<TS>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CTSU3Eb__0_m9A08784D48F965F6873FC406CDE3E32785B09AA7 (U3CU3Ec__DisplayClass11_0_tD0F7DA9B5EF7376D153BAB64AC70CC76A79C6F78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___toastClass_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___unityActivity_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___message_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		int32_t L_7 = 0;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0, L_6, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		// toastObject.Call("show");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_10, NULL);
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoaded_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeAd_GetIconTexture_mBB4F35A26CF3E0DCD171A8BFB80A20CC56761E31_inline (NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____Vrc4C4L9kpjGxJ34RVqyiThqfPc_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* NativeAdEventArgs_get_nativeAd_mC885AA3AC79E210C2344A919D5A9A9AA7D73DBCD_inline (NativeAdEventArgs_t770FC594D541ED8FB5F81D322E2F451DEA908F45* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		NativeAd_tE2B093CB472B2A93B78901628080436E12A823EA* L_0 = __this->____rwepqrtYTavl3wDyX5cV38QgpcA_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9_inline (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoaded_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* AdRequest_get_Extras_m4FC161022FA3E5235B49C72ACBA8B6390F65516F_inline (AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CExtrasU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Reward_get_Amount_m2A4B7143299E26F5C7B36BA40D118A8F668CD734_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CAmountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Reward_get_Type_m52A71F274CBCCF3FEF1B0E37BEBA30304C8DE5DA_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
