//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJWebViewControllerViewModel.h"

#import "CSJRewardedVideoWebDefaultViewDelegate-Protocol.h"

@class BUThreadSafeMutableArray, BUTimer, CSJMaterialMeta, CSJRewardedAgianAlertView, CSJRewardedVideoWebDefaultView, CSJRewardedVideoWebViewController, NSMutableDictionary, NSString, UIButton;
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
    _Bool _isLoadFinish;
    _Bool _hasClosed;
    _Bool _renderFailed;
    _Bool _isRenderSuc;
    _Bool _isViewShow;
    _Bool _isLandscape;
    _Bool _isNativeExpress;
    _Bool _handleTapReported;
    _Bool _ignoreSecondAd;
    id <CSJRewardedVideoWebViewDelegate> _delegate;
    unsigned long long _transformDirection;
    CSJMaterialMeta *_materialMeta;
    NSString *_ritScene;
    id _rewardAd;
    CSJRewardedVideoWebViewController *_videoWebVC;
    CSJRewardedVideoWebDefaultView *_defaultView;
    UIButton *_silentButton;
    UIButton *_dislikeButton;
    UIButton *_closeButton;
    long long _delayTimeCount;
    long long _VCLifeCycleStatus;
    double _showTime;
    NSMutableDictionary *_logH5Dictinary;
    BUThreadSafeMutableArray *_switchBackgroundArray;
    CSJRewardedAgianAlertView *_againAlertView;
    id <CSJRewardedVideoAgianDelegate> _rewardAgianAd;
    BUTimer *_closeTimer;
    struct CGSize _customSize;
    struct CGSize _originSize;
}

+ (struct CGSize)webViewSizeWithMeta:(id)arg1;
+ (id)pageUrlWithMeta:(id)arg1 pageType:(unsigned long long)arg2;
+ (id)newWithAd:(id)arg1 isNativeExpress:(_Bool)arg2 pageType:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) BUTimer *closeTimer; // @synthesize closeTimer=_closeTimer;
@property(readonly, nonatomic) _Bool ignoreSecondAd; // @synthesize ignoreSecondAd=_ignoreSecondAd;
@property(retain, nonatomic) id <CSJRewardedVideoAgianDelegate> rewardAgianAd; // @synthesize rewardAgianAd=_rewardAgianAd;
@property(retain, nonatomic) CSJRewardedAgianAlertView *againAlertView; // @synthesize againAlertView=_againAlertView;
@property(nonatomic) _Bool handleTapReported; // @synthesize handleTapReported=_handleTapReported;
@property(retain, nonatomic) BUThreadSafeMutableArray *switchBackgroundArray; // @synthesize switchBackgroundArray=_switchBackgroundArray;
@property(retain, nonatomic) NSMutableDictionary *logH5Dictinary; // @synthesize logH5Dictinary=_logH5Dictinary;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(nonatomic) _Bool isNativeExpress; // @synthesize isNativeExpress=_isNativeExpress;
@property(nonatomic) struct CGSize originSize; // @synthesize originSize=_originSize;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) struct CGSize customSize; // @synthesize customSize=_customSize;
@property(nonatomic) _Bool isViewShow; // @synthesize isViewShow=_isViewShow;
@property(nonatomic) _Bool isRenderSuc; // @synthesize isRenderSuc=_isRenderSuc;
@property(nonatomic) long long VCLifeCycleStatus; // @synthesize VCLifeCycleStatus=_VCLifeCycleStatus;
@property(nonatomic) long long delayTimeCount; // @synthesize delayTimeCount=_delayTimeCount;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) UIButton *silentButton; // @synthesize silentButton=_silentButton;
@property(retain, nonatomic) CSJRewardedVideoWebDefaultView *defaultView; // @synthesize defaultView=_defaultView;
@property(nonatomic) __weak CSJRewardedVideoWebViewController *videoWebVC; // @synthesize videoWebVC=_videoWebVC;
@property(nonatomic) __weak id rewardAd; // @synthesize rewardAd=_rewardAd;
@property(nonatomic) _Bool renderFailed; // @synthesize renderFailed=_renderFailed;
@property(nonatomic) _Bool hasClosed; // @synthesize hasClosed=_hasClosed;
@property(nonatomic) _Bool isLoadFinish; // @synthesize isLoadFinish=_isLoadFinish;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(copy, nonatomic) NSString *ritScene; // @synthesize ritScene=_ritScene;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo=_isRewardedVideo;
@property(nonatomic) unsigned long long transformDirection; // @synthesize transformDirection=_transformDirection;
@property(nonatomic) _Bool isTransform; // @synthesize isTransform=_isTransform;
@property(nonatomic) __weak id <CSJRewardedVideoWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appendEndcardGrayscale;
- (void)appendNativeExpressOrientation;
- (void)appendURLParameters;
- (void)setPageUrlString:(id)arg1;
- (id)getPageUrlString;
- (id)getLogExtraDic;
- (id)closeDictWithDuration:(double)arg1;
- (void)switchBackgroundAndForegroundLog:(id)arg1 extraDic:(id)arg2;
- (void)sendTrackDataWithParameters:(id)arg1;
- (void)logoImageViewTapped:(id)arg1;
- (void)downloadButtonTapped:(id)arg1 extraDic:(id)arg2;
- (void)preloadRewardVideoAdAfterQuiteRewardAgainFirst;
- (void)showRewardAgainAlert;
- (_Bool)shouldShowRewardAgainAlert;
- (_Bool)shouldShowRewardAgainEntrance;
- (void)showToastWithMessage:(id)arg1;
- (void)rewardAgianCloseNotificationMethod:(id)arg1;
- (void)setUpRewardAgian;
- (void)showRewardAgainMethod;
- (void)addAccessibilityIdentifier;
- (void)updateDislikeButtonFrame;
- (double)getDislikeButtonWidthWithStr:(id)arg1;
- (double)getCloseButtonWidthWithStr:(id)arg1;
- (void)updateSlientBtnState:(_Bool)arg1;
- (void)silentButtonTapped;
- (void)dislikeButtonTapped;
- (void)webCloseAction;
- (void)webCloseButtonTapped;
- (void)skipRewardDuration:(long long)arg1;
- (void)updateCloseButton;
- (void)onCloseCountDown;
- (void)startCloseCountDown;
- (double)getCloseDelayTime;
- (void)sendEndcardControlEvent:(_Bool)arg1;
- (id)buJSB3_sendPlayableRewardWithViewModel:(id)arg1;
- (void)jsCallNative_sendPlayableReward;
- (void)jsCallNative_sendVideoProgress:(id)arg1;
- (id)buJSB3_sendVideoProgressWithViewModel:(id)arg1;
- (id)jsCallNative_getVideoInfo;
- (id)buJSB3_getVideoInfoWithViewModel:(id)arg1;
- (void)jsCallNative_openPrivacy;
- (id)buJSB3_openPrivacyWithViewModel:(id)arg1;
- (id)buJSB3_commonConvertWithViewModel:(id)arg1;
- (void)jsCallNative_commonConvertWithParams:(id)arg1;
- (void)jsCallNative_onClickBrowseCloseCallbackWithParams:(id)arg1;
- (id)buJSB3_onClickBrowseCloseCallbackWithViewModel:(id)arg1;
- (void)jsCallNative_rewardPlayAgainWithParams:(id)arg1;
- (id)buJSB3_rewardPlayAgainWithViewModel:(id)arg1;
- (id)jsCallNative_intercept_resource_list;
- (id)buJSB3_intercept_resource_listWithViewModel:(id)arg1;
- (void)jsCallNative_webview_time_trackWithParams:(id)arg1;
- (id)buJSB3_webview_time_trackWithViewModel:(id)arg1;
- (id)jsCallNative_getCloseButtonInfo;
- (id)buJSB3_getCloseButtonInfoWithViewModel:(id)arg1;
- (void)jsCallNative_endcard_loadWithParams:(id)arg1;
- (id)buJSB3_endcard_loadWithViewModel:(id)arg1;
- (void)jsCallNative_clickEventWithParams:(id)arg1;
- (id)buJSB3_clickEventWithViewModel:(id)arg1;
- (id)jsCallNative_getVolume;
- (id)buJSB3_getVolumeWithViewModel:(id)arg1;
- (id)jsCallNative_getScreenSize;
- (id)buJSB3_getScreenSizeWithViewModel:(id)arg1;
- (id)jsCallNative_isViewable;
- (id)buJSB3_isViewableWithViewModel:(id)arg1;
- (id)jsCallNative_landscape_click;
- (id)buJSB3_landscape_clickWithViewModel:(id)arg1;
- (id)jsCallNative_open_app_store;
- (id)buJSB3_open_app_storeWithViewModel:(id)arg1;
- (void)registerJSBridge3;
- (void)registerJSB_Plugin;
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
- (void)layoutSubViewsForNativeExpress;
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
