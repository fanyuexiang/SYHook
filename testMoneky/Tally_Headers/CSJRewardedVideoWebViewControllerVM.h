//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJWebViewControllerViewModel.h"

#import "CSJRewardedVideoWebDefaultViewDelegate-Protocol.h"

@class BUThreadSafeMutableArray, BUTimer, CSJMaterialMeta, CSJRewardedAgianAlertView, CSJRewardedRetainAlertManager, CSJRewardedVideoWebDefaultView, CSJRewardedVideoWebViewController, NSMutableDictionary, NSString, UIButton;
@protocol CSJRewardedVideoAgianDelegate, CSJRewardedVideoWebViewDelegate;

@interface CSJRewardedVideoWebViewControllerVM : CSJWebViewControllerViewModel <CSJRewardedVideoWebDefaultViewDelegate>
{
    struct {
        _Bool webViewDidStartLoadFlag;
        _Bool webViewDidFinishLoadFlag;
        _Bool webViewDidFailLoadWithErrorFlag;
    } flags;
    _Bool _isTransform;
    _Bool _isRewardedVideo;
    _Bool _mute;
    _Bool _isPath_UrlAd;
    _Bool _T5_IdCase;
    _Bool _for_MaskSet;
    _Bool _isRenderSuc;
    _Bool _isViewShow;
    _Bool _isLandscape;
    _Bool _isNativeExpress;
    _Bool _User_EnumCase;
    _Bool _The_HttpVoid;
    id <CSJRewardedVideoWebViewDelegate> _delegate;
    unsigned long long _transformDirection;
    CSJMaterialMeta *_materialMeta;
    NSString *_ritScene;
    id __log_OrgGdp;
    CSJRewardedVideoWebViewController *_List_AdOr;
    CSJRewardedVideoWebDefaultView *_Hpp_CnTs;
    UIButton *_silentButton;
    UIButton *_dislikeButton;
    UIButton *_closeButton;
    long long __pos_SizeDate;
    long long _Copy_TvNow;
    double _showTime;
    NSMutableDictionary *_logH5Dictinary;
    BUThreadSafeMutableArray *_switchBackgroundArray;
    CSJRewardedAgianAlertView *_againAlertView;
    id <CSJRewardedVideoAgianDelegate> _rewardAgianAd;
    BUTimer *_closeTimer;
    CSJRewardedRetainAlertManager *_alertManger;
    struct CGSize _Slot_NowMap;
    struct CGSize _originSize;
}

+ (struct CGSize)Tmp_PushA2:(id)arg1;
+ (id)Weak_PosLazy:(id)arg1 pageType:(unsigned long long)arg2;
+ (id)Pods_FtCode:(id)arg1 isNativeExpress:(_Bool)arg2 pageType:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) CSJRewardedRetainAlertManager *alertManger; // @synthesize alertManger=_alertManger;
@property(retain, nonatomic) BUTimer *closeTimer; // @synthesize closeTimer=_closeTimer;
@property(readonly, nonatomic) _Bool The_HttpVoid; // @synthesize The_HttpVoid=_The_HttpVoid;
@property(retain, nonatomic) id <CSJRewardedVideoAgianDelegate> rewardAgianAd; // @synthesize rewardAgianAd=_rewardAgianAd;
@property(retain, nonatomic) CSJRewardedAgianAlertView *againAlertView; // @synthesize againAlertView=_againAlertView;
@property(nonatomic) _Bool User_EnumCase; // @synthesize User_EnumCase=_User_EnumCase;
@property(retain, nonatomic) BUThreadSafeMutableArray *switchBackgroundArray; // @synthesize switchBackgroundArray=_switchBackgroundArray;
@property(retain, nonatomic) NSMutableDictionary *logH5Dictinary; // @synthesize logH5Dictinary=_logH5Dictinary;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(nonatomic) _Bool isNativeExpress; // @synthesize isNativeExpress=_isNativeExpress;
@property(nonatomic) struct CGSize originSize; // @synthesize originSize=_originSize;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) struct CGSize Slot_NowMap; // @synthesize Slot_NowMap=_Slot_NowMap;
@property(nonatomic) _Bool isViewShow; // @synthesize isViewShow=_isViewShow;
@property(nonatomic) _Bool isRenderSuc; // @synthesize isRenderSuc=_isRenderSuc;
@property(nonatomic) long long Copy_TvNow; // @synthesize Copy_TvNow=_Copy_TvNow;
@property(nonatomic) long long _pos_SizeDate; // @synthesize _pos_SizeDate=__pos_SizeDate;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) UIButton *silentButton; // @synthesize silentButton=_silentButton;
@property(retain, nonatomic) CSJRewardedVideoWebDefaultView *Hpp_CnTs; // @synthesize Hpp_CnTs=_Hpp_CnTs;
@property(nonatomic) __weak CSJRewardedVideoWebViewController *List_AdOr; // @synthesize List_AdOr=_List_AdOr;
@property(nonatomic) __weak id _log_OrgGdp; // @synthesize _log_OrgGdp=__log_OrgGdp;
@property(nonatomic) _Bool for_MaskSet; // @synthesize for_MaskSet=_for_MaskSet;
@property(nonatomic) _Bool T5_IdCase; // @synthesize T5_IdCase=_T5_IdCase;
@property(nonatomic) _Bool isPath_UrlAd; // @synthesize isPath_UrlAd=_isPath_UrlAd;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(copy, nonatomic) NSString *ritScene; // @synthesize ritScene=_ritScene;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo=_isRewardedVideo;
@property(nonatomic) unsigned long long transformDirection; // @synthesize transformDirection=_transformDirection;
@property(nonatomic) _Bool isTransform; // @synthesize isTransform=_isTransform;
@property(nonatomic) __weak id <CSJRewardedVideoWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)Var_DataY2;
- (void)Bool_This_cmd;
- (void)Http_WinID;
- (void)setUa_CodeNot:(id)arg1;
- (id)Id_TagPos;
- (id)Info_SlotLoad;
- (id)Left_SDKAds:(double)arg1;
- (void)switchBackgroundAndForegroundLog:(id)arg1 extraDic:(id)arg2;
- (void)sendTrackDataWithParameters:(id)arg1;
- (void)logoImageViewTapped:(id)arg1;
- (void)downloadButtonTapped:(id)arg1 extraDic:(id)arg2;
- (void)Y1_Type_rhs;
- (void)showRewardAgainAlert;
- (_Bool)shouldShowRewardAgainAlert;
- (_Bool)Docs_SelfVli;
- (void)showToastWithMessage:(id)arg1;
- (void)rewardAgianCloseNotificationMethod:(id)arg1;
- (void)setUpRewardAgian;
- (void)showRewardAgainMethod;
- (void)addAccessibilityIdentifier;
- (void)Int_UaAPI;
- (double)Desc_PlayUa:(id)arg1;
- (double)End_AKeyMsg:(id)arg1;
- (void)updateSlientBtnState:(_Bool)arg1;
- (void)silentButtonTapped;
- (void)dislikeButtonTapped;
- (void)Weak_TapIdx;
- (void)Fm_MARKItem;
- (_Bool)Pop_NoteA0;
- (void)webCloseButtonTapped;
- (void)_log_DescOnly:(long long)arg1;
- (void)Json_BoolAt;
- (void)onCloseCountDown;
- (void)Desc_VarEnd;
- (double)Sdk_CidIf;
- (void)updateFullLinkRewardCloseButton;
- (_Bool)UI_SqlDic;
- (_Bool)Hash_FromFabs;
- (void)Slot_MutePos:(_Bool)arg1;
- (id)buJSB3_sendPlayableRewardWithViewModel:(id)arg1;
- (void)Get_CarlGDPR;
- (void)Noti_VcAt;
- (id)buJSB3_openPrivacyWithViewModel:(id)arg1;
- (id)buJSB3_commonConvertWithViewModel:(id)arg1;
- (void)jsCallNative_commonConvertWithParams:(id)arg1;
- (void)On_SetAll:(id)arg1;
- (id)buJSB3_onClickBrowseCloseCallbackWithViewModel:(id)arg1;
- (void)Are_TimeA1:(id)arg1;
- (id)buJSB3_rewardPlayAgainWithViewModel:(id)arg1;
- (id)_cmd_T5Bu_x;
- (id)buJSB3_intercept_resource_listWithViewModel:(id)arg1;
- (void)jsCallNative_webview_time_trackWithParams:(id)arg1;
- (id)buJSB3_webview_time_trackWithViewModel:(id)arg1;
- (id)Pos_CidPop;
- (id)buJSB3_getCloseButtonInfoWithViewModel:(id)arg1;
- (void)When_UseA2:(id)arg1;
- (id)buJSB3_endcard_loadWithViewModel:(id)arg1;
- (void)Ios_VarEnd:(id)arg1;
- (id)buJSB3_clickEventWithViewModel:(id)arg1;
- (id)NULL_StrIdfa;
- (id)buJSB3_getVolumeWithViewModel:(id)arg1;
- (id)NO_IOSName;
- (id)buJSB3_getScreenSizeWithViewModel:(id)arg1;
- (id)T5_P1Not;
- (id)buJSB3_isViewableWithViewModel:(id)arg1;
- (id)Read_posApp;
- (id)buJSB3_landscape_clickWithViewModel:(id)arg1;
- (id)Mute_MayJs;
- (void)openInternalStoreWithMaterial:(id)arg1;
- (id)buJSB3_open_app_storeWithViewModel:(id)arg1;
- (id)jsCallNative_dynamicTrackWithParams:(id)arg1;
- (id)buJSB3_dynamicTrackWithViewModel:(id)arg1;
- (void)registerJSBridge3;
- (void)_log_LineIdfa;
- (_Bool)isRealPlayablePage;
- (_Bool)useLandingPageNewStyle;
- (id)getTrackTag;
- (id)trackTag;
- (void)handleTapWithInfo:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)trackLoading;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)customNavigationBarDidClickDislikeButton:(id)arg1;
- (void)customNavigationBarDidClickCloseButton:(id)arg1;
- (void)appWillEnterForegroundNotification:(id)arg1;
- (void)appDidEnterBackgroundNotification:(id)arg1;
- (void)Self_Ipv4Show;
- (void)handleViewWillLayoutSubviews;
- (void)handleViewDidDisappear:(_Bool)arg1;
- (void)handleViewDidAppear:(_Bool)arg1;
- (void)handleViewWillAppear:(_Bool)arg1;
- (void)handleViewDidLoad;
- (id)initViewControllerWithAd:(id)arg1 isNativeExpress:(_Bool)arg2 pageType:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

