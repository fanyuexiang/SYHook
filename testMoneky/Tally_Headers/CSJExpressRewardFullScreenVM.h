//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJNativeExpressRewardedVideoAdViewDelegate-Protocol.h"
#import "CSJPlayableLandingViewControllerDelegate-Protocol.h"
#import "CSJRewardedVideoWebViewDelegate-Protocol.h"

@class BUTimer, CSJAdSlot, CSJDislikeContext, CSJNativeAd, CSJNativeExpressRewardedVideoAdDisplayViewController, CSJNativeExpressRewardedVideoAdView, CSJNativeExpressRewardedVideoAdViewController, CSJPlayableLandingViewController, CSJPurePlayableLoadingViewController, CSJRewardBrowseAlertView, CSJRewardedVideoWebViewController, CSJURitSettingModel, NSArray, NSString, UIButton, UILabel, UIViewController;
@protocol CSJNativeExpressVideoAdDelegate;

@interface CSJExpressRewardFullScreenVM : NSObject <CSJRewardedVideoWebViewDelegate, CSJNativeExpressRewardedVideoAdViewDelegate, CSJPlayableLandingViewControllerDelegate>
{
    _Bool _isRewardedVideo;
    _Bool _mute;
    _Bool _isReportEvent;
    _Bool _purePlayableSendRewardFromH5;
    _Bool _couldSendRewardForPurePlayable;
    _Bool _isShowAlertView;
    _Bool _hadSwitchToWebviewVC;
    _Bool _playableRenderFailed;
    _Bool _isPlayableShowed;
    _Bool _isInteractived;
    id <CSJNativeExpressVideoAdDelegate> _rewardedVideoAd;
    CSJAdSlot *_adSlot;
    CDUnknownBlockType _purePlayableClickBlock;
    CSJNativeExpressRewardedVideoAdView *_expressAdView;
    UIViewController *_currentViewController;
    CSJNativeExpressRewardedVideoAdDisplayViewController *_rewardedVideoDisplayViewController;
    CSJRewardedVideoWebViewController *_endcardWebVC;
    CSJPlayableLandingViewController *_playableLandingVC;
    unsigned long long _systemOrientation;
    unsigned long long _videoOrientation;
    unsigned long long _childTransform;
    NSString *_startTimestamp;
    NSString *_endTimestamp;
    CSJNativeAd *_purePlayableNativeAd;
    CSJURitSettingModel *_ritModel;
    CSJPurePlayableLoadingViewController *_loadingWebView;
    UILabel *_leftSeconds;
    BUTimer *_leftTimer;
    UIButton *_closeButton;
    UIButton *_backBtn;
    UIButton *_dislikeButton;
    UIButton *_silentButton;
    NSArray *_relatedMaterialMetas;
    CSJDislikeContext *_dislikeContext;
    long long _closeButtonStyle;
    long long _leftTime;
    long long _closeTime;
    CSJNativeExpressRewardedVideoAdViewController *_rootVC;
    CSJRewardBrowseAlertView *_rewardBrowseEcomAlert;
    BUTimer *_playableStayDurationTimer;
    double _playableDuration;
    double _continuePlayProgress;
}

+ (id)createViewModelWithExpressAdView:(id)arg1 nativeAd:(id)arg2 rootViewController:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) double continuePlayProgress; // @synthesize continuePlayProgress=_continuePlayProgress;
@property(nonatomic) double playableDuration; // @synthesize playableDuration=_playableDuration;
@property(retain, nonatomic) BUTimer *playableStayDurationTimer; // @synthesize playableStayDurationTimer=_playableStayDurationTimer;
@property(retain, nonatomic) CSJRewardBrowseAlertView *rewardBrowseEcomAlert; // @synthesize rewardBrowseEcomAlert=_rewardBrowseEcomAlert;
@property(nonatomic) _Bool isInteractived; // @synthesize isInteractived=_isInteractived;
@property(nonatomic) _Bool isPlayableShowed; // @synthesize isPlayableShowed=_isPlayableShowed;
@property(nonatomic) __weak CSJNativeExpressRewardedVideoAdViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(nonatomic) _Bool playableRenderFailed; // @synthesize playableRenderFailed=_playableRenderFailed;
@property(nonatomic) long long closeTime; // @synthesize closeTime=_closeTime;
@property(nonatomic) long long leftTime; // @synthesize leftTime=_leftTime;
@property(nonatomic) long long closeButtonStyle; // @synthesize closeButtonStyle=_closeButtonStyle;
@property(retain, nonatomic) CSJDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(copy, nonatomic) NSArray *relatedMaterialMetas; // @synthesize relatedMaterialMetas=_relatedMaterialMetas;
@property(nonatomic) _Bool hadSwitchToWebviewVC; // @synthesize hadSwitchToWebviewVC=_hadSwitchToWebviewVC;
@property(nonatomic) _Bool isShowAlertView; // @synthesize isShowAlertView=_isShowAlertView;
@property(nonatomic) _Bool couldSendRewardForPurePlayable; // @synthesize couldSendRewardForPurePlayable=_couldSendRewardForPurePlayable;
@property(nonatomic) _Bool purePlayableSendRewardFromH5; // @synthesize purePlayableSendRewardFromH5=_purePlayableSendRewardFromH5;
@property(nonatomic) _Bool isReportEvent; // @synthesize isReportEvent=_isReportEvent;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(retain, nonatomic) UIButton *silentButton; // @synthesize silentButton=_silentButton;
@property(retain, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) BUTimer *leftTimer; // @synthesize leftTimer=_leftTimer;
@property(retain, nonatomic) UILabel *leftSeconds; // @synthesize leftSeconds=_leftSeconds;
@property(retain, nonatomic) CSJPurePlayableLoadingViewController *loadingWebView; // @synthesize loadingWebView=_loadingWebView;
@property(retain, nonatomic) CSJURitSettingModel *ritModel; // @synthesize ritModel=_ritModel;
@property(retain, nonatomic) CSJNativeAd *purePlayableNativeAd; // @synthesize purePlayableNativeAd=_purePlayableNativeAd;
@property(copy, nonatomic) NSString *endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(copy, nonatomic) NSString *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) unsigned long long childTransform; // @synthesize childTransform=_childTransform;
@property(nonatomic) unsigned long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) unsigned long long systemOrientation; // @synthesize systemOrientation=_systemOrientation;
@property(retain, nonatomic) CSJPlayableLandingViewController *playableLandingVC; // @synthesize playableLandingVC=_playableLandingVC;
@property(retain, nonatomic) CSJRewardedVideoWebViewController *endcardWebVC; // @synthesize endcardWebVC=_endcardWebVC;
@property(retain, nonatomic) CSJNativeExpressRewardedVideoAdDisplayViewController *rewardedVideoDisplayViewController; // @synthesize rewardedVideoDisplayViewController=_rewardedVideoDisplayViewController;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) CSJNativeExpressRewardedVideoAdView *expressAdView; // @synthesize expressAdView=_expressAdView;
@property(copy, nonatomic) CDUnknownBlockType purePlayableClickBlock; // @synthesize purePlayableClickBlock=_purePlayableClickBlock;
@property(retain, nonatomic) CSJAdSlot *adSlot; // @synthesize adSlot=_adSlot;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo=_isRewardedVideo;
@property(nonatomic) __weak id <CSJNativeExpressVideoAdDelegate> rewardedVideoAd; // @synthesize rewardedVideoAd=_rewardedVideoAd;
- (long long)_getRewardRemainTime;
- (void)_sendRewardButtonStatus;
- (void)_stopPlayableStayDurationTimer;
- (void)_startPlayableStayDurationTimerFire;
- (void)_startPlayableStayDurationTimer;
- (void)_willResignActiveNotification;
- (void)_didBecomeActiveNotification;
- (void)silentButtonTapped:(id)arg1;
- (void)confirmCloseWindow;
- (void)closeRewardBrowseTimeout;
- (void)closeButtonTapped:(id)arg1;
@property(readonly, nonatomic) CSJRewardedVideoWebViewController *currentWebVC;
- (void)dislikeButtonTapped:(id)arg1;
- (void)updateTopBarDislikeButtonFrame;
- (void)updateTopBarButtonFrame;
- (void)updateSizeWithLabel:(id)arg1;
- (void)updateSizeWithButton:(id)arg1;
- (void)rewardAgianMethod;
- (void)updateSlientBtnState:(_Bool)arg1;
- (void)preloadPlayable;
- (void)safeDelegate_videoAdDidClickSkip;
- (long long)getCloseTimeValue;
- (void)verifyRewardWithDurationTime:(double)arg1 type:(long long)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)_updateRewardWithType:(long long)arg1 propose:(float)arg2;
- (void)_updateAdvancedRewardType:(long long)arg1;
- (void)sendVerifiedRewardWithDuration:(double)arg1 type:(long long)arg2;
- (void)judgeDirection;
- (id)getRewardFullscreenMaterial;
- (void)sendPlayableReward;
- (void)setCurrentVideoProgress:(long long)arg1;
- (long long)currentVideoProgress;
- (void)updateNativeTitleBar:(_Bool)arg1;
- (void)rewardedVideoInteractiveSkip:(long long)arg1;
- (void)showRewardBrowseEcomAlert:(id)arg1;
- (void)rewardedVideoWebViewControllerOpenUrlWithParams:(id)arg1;
- (void)rewardedVideoWebViewControllerBackVideo:(id)arg1;
- (void)rewardedVideoWebViewControllerJumpEndcard:(id)arg1;
- (void)rewardedVideoWebViewControllerCloseClick:(id)arg1;
- (void)rewardedVideoWebViewControllerSkipClick:(id)arg1;
- (void)rewardedVideoWebViewControllerDislikeClick:(id)arg1;
- (void)rewardedVideoWebViewControllerVolumeChange:(id)arg1 isMute:(_Bool)arg2;
- (void)rewardedVideoWebViewControllerClick:(id)arg1 clickInfo:(id)arg2;
- (void)playableRenderFaild:(id)arg1;
- (void)purePlayableRemoveLoadingByJSB;
- (void)purePlayableSendRewardFromH5Callback;
- (void)bu_webviewLoadFinish:(id)arg1;
- (id)getTrackTag;
- (void)openAppStore;
- (void)rewardedVideoH5AdDidClickNeedJump:(_Bool)arg1;
- (void)rewardedVideoAdClose;
- (void)nativeExpressRewardedPlayAgain;
- (double)playableStayDuration;
- (void)nativeExpressRewardedVideoPushPlayableLandingPage;
- (void)dismissCurrentViewControllerIsSkip:(_Bool)arg1;
- (void)handlePurePlayableBar:(_Bool)arg1;
- (void)switchToEndcard;
- (void)checkSKOverlay;
- (void)switchToPlayable;
- (void)switchToWebViewController:(_Bool)arg1;
- (void)purePlayableSwitchToWebViewMute:(_Bool)arg1;
- (void)nativeExpressRewardedVideoDidPlayFinish:(id)arg1 error:(id)arg2;
- (id)nativeExpressInteractiveFinished:(id)arg1;
- (void)nativeExpressRewardedVideoDidPlayRewardTime:(id)arg1;
- (void)showRewardAgainEntranceTipsView;
- (unsigned long long)vmSupportedInterfaceOrientations;
- (void)layoutIntersitialStyle;
- (void)relayoutSubViews;
- (void)vmLoadData;
- (id)initViewModelWithExpressAdView:(id)arg1 nativeAd:(id)arg2 rootViewController:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

