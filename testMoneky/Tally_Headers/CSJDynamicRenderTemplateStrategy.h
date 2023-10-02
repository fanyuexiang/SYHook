//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDynamicRenderStrategy.h"

#import "BUPlayableAdDelegate-Protocol.h"
#import "BUWebViewDelegate-Protocol.h"
#import "CSJWKWebViewClientInterceptionDelegate-Protocol.h"
#import "CSJWebViewDynamicRenderInterface-Protocol.h"

@class BUPlayableAd, BUTimer, CSJWKWebViewClient, CSJWebViewOwner, NSDictionary, NSMutableDictionary, NSString, UIView;
@protocol CSJWebViewDynamicRenderDelegate;

@interface CSJDynamicRenderTemplateStrategy : CSJDynamicRenderStrategy <BUWebViewDelegate, CSJWebViewDynamicRenderInterface, BUPlayableAdDelegate, CSJWKWebViewClientInterceptionDelegate>
{
    _Bool _Lazy_ApiOf;
    id <CSJWebViewDynamicRenderDelegate> May_NOFtc;
    CSJWebViewOwner *_Cls_R0Nil;
    CSJWKWebViewClient *_webview;
    BUPlayableAd *_playableAd;
    NSDictionary *_relatedMaterialMetaJSON;
    BUTimer *_renderTimer;
    BUTimer *_Ua_ADXGDPR;
    NSMutableDictionary *_Time_WhenMIT;
    UIView *_M_PI_BOOLNet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *M_PI_BOOLNet; // @synthesize M_PI_BOOLNet=_M_PI_BOOLNet;
@property(retain, nonatomic) NSMutableDictionary *Time_WhenMIT; // @synthesize Time_WhenMIT=_Time_WhenMIT;
@property(retain, nonatomic) BUTimer *Ua_ADXGDPR; // @synthesize Ua_ADXGDPR=_Ua_ADXGDPR;
@property(retain, nonatomic) BUTimer *renderTimer; // @synthesize renderTimer=_renderTimer;
@property(nonatomic) _Bool Lazy_ApiOf; // @synthesize Lazy_ApiOf=_Lazy_ApiOf;
@property(copy, nonatomic) NSDictionary *relatedMaterialMetaJSON; // @synthesize relatedMaterialMetaJSON=_relatedMaterialMetaJSON;
@property(retain, nonatomic) BUPlayableAd *playableAd; // @synthesize playableAd=_playableAd;
@property(retain, nonatomic) CSJWKWebViewClient *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) CSJWebViewOwner *Cls_R0Nil; // @synthesize Cls_R0Nil=_Cls_R0Nil;
@property(nonatomic) __weak id <CSJWebViewDynamicRenderDelegate> May_NOFtc; // @synthesize May_NOFtc;
- (void)_onDialogCloseButton;
- (void)Icon_IntIdx:(id)arg1;
- (id)Use_HttpIos;
- (long long)renderType;
- (void)buWKWebViewClientInterceptedWithStartTime:(double)arg1 url:(id)arg2 type:(id)arg3 isCache:(_Bool)arg4 extraDic:(id)arg5;
- (void)playableEventReportNotification:(id)arg1;
- (id)Char_PathOf;
- (void)addObservers;
- (void)trackEvent:(id)arg1 params:(id)arg2;
- (id)playableAdCurrentURL:(id)arg1;
- (void)playableAdRenderFailed:(id)arg1;
- (struct CGRect)webViewFrameInPlayableAd:(id)arg1;
- (long long)netTypeForDeviceInPlayableAd:(id)arg1;
- (void)sendRewardFromH5CallbackInPlayableAd:(id)arg1;
- (void)openAppStoreInPlayableAd:(id)arg1 params:(id)arg2;
- (void)playableAd:(id)arg1 executeJavaScript:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)playableAd:(id)arg1 fireEvent:(id)arg2 params:(id)arg3;
- (void)playableAd:(id)arg1 registerHandlerBlock:(CDUnknownBlockType)arg2 forJSMethod:(id)arg3;
- (void)playableAd:(id)arg1 loadRequest:(id)arg2;
- (id)Adm_RowRush;
- (void)Carl_ItSet;
- (id)Are_TimeA1:(id)arg1;
- (id)Mute_MayJs;
- (id)Api_Bu_xApi:(id)arg1;
- (id)You_DoTap:(id)arg1;
- (void)Item_WeakFabs:(id)arg1;
- (void)jsCallNative_webview_time_trackWithParams:(id)arg1;
- (id)jsCallNative_dynamicTrackWithParams:(id)arg1;
- (void)Nb_AdMate:(id)arg1;
- (id)Sql_AsInit:(id)arg1;
- (id)buJSB3_requestPauseVideoWithViewModel:(id)arg1;
- (id)buJSB3_adAnalysisDataWithViewModel:(id)arg1;
- (id)buJSB3_getMaterialMetaWithViewModel:(id)arg1;
- (id)buJSB3_immersiveVideoPageBackWithViewModel:(id)arg1;
- (id)buJSB3_getPlayTimeCurrentWithViewModel:(id)arg1;
- (id)buJSB3_startVideoTransformWithViewModel:(id)arg1;
- (id)buJSB3_skipVideoWithViewModel:(id)arg1;
- (id)buJSB3_getCurrentVideoStateWithViewModel:(id)arg1;
- (id)buJSB3_changeVideoStateWithViewModel:(id)arg1;
- (id)buJSB3_muteVideoWithViewModel:(id)arg1;
- (id)buJSB3_rewardPlayAgainWithViewModel:(id)arg1;
- (id)buJSB3_openPlayableWithViewModel:(id)arg1;
- (id)buJSB3_interstitial_webview_closeWithViewModel:(id)arg1;
- (id)buJSB3_adInfoDialogWithViewModel:(id)arg1;
- (id)buJSB3_preventTouchEventWithViewModel:(id)arg1;
- (id)buJSB3_webview_time_trackWithViewModel:(id)arg1;
- (id)buJSB3_openPrivacyWithViewModel:(id)arg1;
- (id)buJSB3_clickEventWithViewModel:(id)arg1;
- (id)buJSB3_dynamicTrackWithViewModel:(id)arg1;
- (id)buJSB3_renderDidFinishWithViewModel:(id)arg1;
- (id)buJSB3_adInfoWithViewModel:(id)arg1;
- (id)buJSB3_show_skoverlayWithViewModel:(id)arg1;
- (id)buJSB3_getTemplateInfoWithViewModel:(id)arg1;
- (id)buJSB3_interactiveFinishWithViewModel:(id)arg1;
- (id)buJSB3_interactiveStartWithViewModel:(id)arg1;
- (void)registerJSBridge3;
- (void)Net_TopNULL;
- (void)This_CanEnum;
- (void)From_CellSkip;
- (void)Pods_TODOAre;
- (void)Tag_ReadMIT;
- (void)Y1_MARKAdId;
- (void)Sql_OutRoot;
- (void)Use_ItemThe;
- (void)BOOL_YouCell;
- (void)AdID_DocsThe;
- (void)Bu_y_UaNO;
- (void)Time_IfX2;
- (void)Sel_TheTs;
- (void)R0_OpenIs;
- (void)Open_ApiFt;
- (void)Lazy_WeakLong;
- (void)sendTrackDataFromURLString:(id)arg1;
- (void)Ipv4_NoteObjc;
- (void)R2_Host_pos;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)A0_X1BOOL:(id)arg1;
- (void)Root_UseMate:(id)arg1;
- (void)Font_GDPRX1:(id)arg1 error:(id)arg2;
- (void)retryTimerAction;
- (void)Path_PushBody;
- (void)At_UseWeak;
- (_Bool)Ua_WhenLogo;
- (double)timeOut;
- (void)renderTimerAction;
- (void)Id_OrgGet;
- (void)Url_WhenMust:(double)arg1;
- (void)YES_ObjCopy:(struct CGRect)arg1;
- (void)Bool_AtNb;
- (void)Only_R1Or;
- (double)Nb_BeADX;
- (void)Hash_A0Meta;
- (long long)An_SelfGDPR;
- (void)It_Y1CCPA:(id)arg1 data:(id)arg2;
- (void)Init_OrVar:(long long)arg1;
- (void)Out_MaskNb:(id)arg1;
- (void)Wiki_AryTry:(_Bool)arg1;
- (void)From_ObjADX:(_Bool)arg1 reduceDuration:(long long)arg2;
- (void)Stop_CodeTop;
- (void)On_DicRead:(id)arg1;
- (void)Lock_AllUse;
- (void)Used_StrBeen;
- (void)Of_BodyApi:(_Bool)arg1;
- (void)__pbu_internal_webview_load;
- (void)Ft_AdInfo;
- (void)render;
- (void)connectionChanged:(id)arg1;
- (void)dealloc;
- (id)initLR1_FabsA1:(id)arg1 containerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

