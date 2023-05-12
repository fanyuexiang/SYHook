//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJAdBaseView.h"

#import "BUVideoPlayerDelegate-Protocol.h"
#import "BUWebViewDelegate-Protocol.h"
#import "CSJAdClientBiddingProtocol-Protocol.h"
#import "CSJNativeAdDelegate-Protocol.h"
#import "CSJRenderEngineDelegate-Protocol.h"

@class BUPlayer, CSJAdInfoViewModel, CSJDislikeContext, CSJNativeAd, CSJPlayerTimeObserverModel, CSJRenderEngine, CSJViewShowAreaTracker, NSDate, NSDictionary, NSMutableDictionary, NSString, UIButton, UIView, UIViewController;
@protocol CSJImmersiveMiddleExpressDelegate, CSJNativeExpressAdViewDelegate, CSJNativeExpressAdViewDismissDelegate;

@interface CSJNativeExpressAdView : CSJAdBaseView <BUVideoPlayerDelegate, CSJRenderEngineDelegate, BUWebViewDelegate, CSJNativeAdDelegate, CSJAdClientBiddingProtocol>
{
    UIViewController *_rootViewController;
    _Bool _isReady;
    _Bool _isAutoPresentAppStore;
    _Bool _isShowing;
    _Bool _haveBecomeVisiable;
    _Bool _liveAdJumped;
    _Bool _validImmersiveExpressView;
    _Bool _storeKitOpened;
    _Bool _hasStartRender;
    _Bool _isRenderSuccess;
    CSJDislikeContext *_dislikeContext;
    double _viewDidAllVisibleTime;
    NSDate *_didEnterBackgroundDate;
    NSDate *_willEnterForegroundDate;
    CSJViewShowAreaTracker *_areaTracker;
    CSJPlayerTimeObserverModel *_playerTimeObserverModel;
    id <CSJImmersiveMiddleExpressDelegate> _middleExpressDelegate;
    NSDictionary *_relatedMaterialMetaJSON;
    NSMutableDictionary *_relatedAdAppsID;
    CSJRenderEngine *_renderEngine;
    CSJNativeAd *_nativeAd;
    id <CSJNativeExpressAdViewDelegate> _expressAdViewDelegate;
    id <CSJNativeExpressAdViewDismissDelegate> _expressAdViewDismissDelegate;
    long long _userBehaviorType;
    NSDictionary *_clickInfo;
    NSString *_clickAreaType;
    long long _areaType;
    long long _clickAreaCategory;
    long long _nativeExpressAdViewSource;
    double _renderTimeout;
    CSJAdInfoViewModel *_infoViewModel;
    UIButton *_closeButton;
    long long _renderIndex;
    NSDictionary *_adAnalysisData;
    CDUnknownBlockType _renderFinishBlock;
    CDUnknownBlockType _renderFailBlock;
    UIView *_successView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *successView; // @synthesize successView=_successView;
@property(copy, nonatomic) CDUnknownBlockType renderFailBlock; // @synthesize renderFailBlock=_renderFailBlock;
@property(copy, nonatomic) CDUnknownBlockType renderFinishBlock; // @synthesize renderFinishBlock=_renderFinishBlock;
@property(copy, nonatomic) NSDictionary *adAnalysisData; // @synthesize adAnalysisData=_adAnalysisData;
@property(nonatomic) long long renderIndex; // @synthesize renderIndex=_renderIndex;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) CSJAdInfoViewModel *infoViewModel; // @synthesize infoViewModel=_infoViewModel;
@property(nonatomic) _Bool isRenderSuccess; // @synthesize isRenderSuccess=_isRenderSuccess;
@property(nonatomic) _Bool hasStartRender; // @synthesize hasStartRender=_hasStartRender;
@property(nonatomic) double renderTimeout; // @synthesize renderTimeout=_renderTimeout;
@property(nonatomic) long long nativeExpressAdViewSource; // @synthesize nativeExpressAdViewSource=_nativeExpressAdViewSource;
@property(nonatomic) _Bool storeKitOpened; // @synthesize storeKitOpened=_storeKitOpened;
@property(nonatomic) long long clickAreaCategory; // @synthesize clickAreaCategory=_clickAreaCategory;
@property(nonatomic) long long areaType; // @synthesize areaType=_areaType;
@property(copy, nonatomic) NSString *clickAreaType; // @synthesize clickAreaType=_clickAreaType;
@property(copy, nonatomic) NSDictionary *clickInfo; // @synthesize clickInfo=_clickInfo;
@property(nonatomic) long long userBehaviorType; // @synthesize userBehaviorType=_userBehaviorType;
@property(nonatomic) __weak id <CSJNativeExpressAdViewDismissDelegate> expressAdViewDismissDelegate; // @synthesize expressAdViewDismissDelegate=_expressAdViewDismissDelegate;
@property(nonatomic) __weak id <CSJNativeExpressAdViewDelegate> expressAdViewDelegate; // @synthesize expressAdViewDelegate=_expressAdViewDelegate;
@property(retain, nonatomic) CSJNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
@property(retain, nonatomic) CSJRenderEngine *renderEngine; // @synthesize renderEngine=_renderEngine;
@property(retain, nonatomic) NSMutableDictionary *relatedAdAppsID; // @synthesize relatedAdAppsID=_relatedAdAppsID;
@property(copy, nonatomic) NSDictionary *relatedMaterialMetaJSON; // @synthesize relatedMaterialMetaJSON=_relatedMaterialMetaJSON;
@property(nonatomic) __weak id <CSJImmersiveMiddleExpressDelegate> middleExpressDelegate; // @synthesize middleExpressDelegate=_middleExpressDelegate;
@property(nonatomic) _Bool validImmersiveExpressView; // @synthesize validImmersiveExpressView=_validImmersiveExpressView;
@property(retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel; // @synthesize playerTimeObserverModel=_playerTimeObserverModel;
@property(retain, nonatomic) CSJViewShowAreaTracker *areaTracker; // @synthesize areaTracker=_areaTracker;
@property(nonatomic) _Bool liveAdJumped; // @synthesize liveAdJumped=_liveAdJumped;
@property(nonatomic) _Bool haveBecomeVisiable; // @synthesize haveBecomeVisiable=_haveBecomeVisiable;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) NSDate *willEnterForegroundDate; // @synthesize willEnterForegroundDate=_willEnterForegroundDate;
@property(retain, nonatomic) NSDate *didEnterBackgroundDate; // @synthesize didEnterBackgroundDate=_didEnterBackgroundDate;
@property(nonatomic) double viewDidAllVisibleTime; // @synthesize viewDidAllVisibleTime=_viewDidAllVisibleTime;
@property(nonatomic) _Bool isAutoPresentAppStore; // @synthesize isAutoPresentAppStore=_isAutoPresentAppStore;
@property(retain, nonatomic) CSJDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)loss:(id)arg1 lossReason:(id)arg2 winBidder:(id)arg3;
- (void)win:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)safeDelegate_immersiveMiddleExpressClickWithMaterial:(id)arg1;
- (void)safeDelegate_immersiveMiddleExpressPageBack;
- (void)safeDelegate_nativeExpressAdViewDismiss:(id)arg1;
- (void)safeDelegate_nativeExpressAdViewWillDismiss:(id)arg1;
- (void)safeDelegate_nativeExpressAdViewDidRemoved:(id)arg1;
- (void)safeDelegate_nativeExpressAdViewDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)safeDelegate_nativeExpressAdViewWillPresentScreen:(id)arg1;
- (void)safeDelegate_nativeExpressAdView:(id)arg1 dislikeWithReason:(id)arg2;
- (void)safeDelegate_nativeExpressAdViewPlayerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)safeDelegate_nativeExpressAdView:(id)arg1 stateDidChanged:(long long)arg2;
- (void)safeDelegate_nativeExpressAdViewDidClick:(id)arg1;
- (void)safeDelegate_nativeExpressAdViewWillShow:(id)arg1;
- (void)safeDelegate_nativeExpressAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)safeDelegate_nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)showRewardAgainEntrance;
- (void)handleMiddlePageClickEventWithParams:(id)arg1;
- (void)fireEventRelatedMaterialMeta;
- (id)jsCallNative_getMaterialMetaWithParams:(id)arg1;
- (void)jsCallNative_immersiveVideoPageBack;
- (void)_reportExpressAdShowWithBool:(_Bool)arg1;
- (void)pbu_clickEventWithRenderInteractionModel:(id)arg1 clickExtraInfo:(id)arg2;
- (void)jsCallNative_handleInterstitialWebviewClose;
- (void)renderEngine:(id)arg1 reportLabel:(id)arg2;
- (void)renderEngine:(id)arg1 reportError:(id)arg2;
- (void)renderEngine:(id)arg1 report_webview_time_trackWithParams:(id)arg2;
- (id)nativeAdInRenderEngine:(id)arg1;
- (id)renderEngine:(id)arg1 renderInteractionModel:(id)arg2 clickExtraInfo:(id)arg3;
- (long long)playPercentInRenderEngine:(id)arg1;
- (double)renderTimeoutInRenderEngine:(id)arg1;
- (void)_update_playerView_gaosi;
- (void)renderEngine:(id)arg1 successView:(id)arg2 error:(id)arg3;
- (id)c_xyDict;
- (id)getAdExtraDataDic;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)receiveEnterBackgroundNotification:(id)arg1;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)connectionChanged:(id)arg1;
- (void)addReachabilityNotification;
- (_Bool)renderNative;
@property(readonly, nonatomic) long long currentDynamicShowType;
@property(readonly, nonatomic) _Bool renderDynamicTemplate;
@property(nonatomic) __weak UIViewController *rootViewController;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt;
@property(readonly, nonatomic) long long videoDuration;
@property(readonly, nonatomic) double currentPlayedTime;
- (void)openPlayable;
- (void)handleHalfShowAppStoreWithResult:(id)arg1;
- (void)videoViewTapped:(id)arg1;
- (void)handleDislikeEvent;
- (void)handleClickCallback;
- (_Bool)shouldControlFromWeb:(id)arg1;
- (void)startHandleClickEventIsVideoClicked:(_Bool)arg1 isEndcardClicked:(_Bool)arg2 clickExtraInfo:(id)arg3 model:(id)arg4;
- (void)startHandleClickEventIsVideoClicked:(_Bool)arg1 isEndcardClicked:(_Bool)arg2 clickExtraInfo:(id)arg3;
- (void)handleClickEventIsVideoClicked:(_Bool)arg1 isEndcardClicked:(_Bool)arg2 clickExtraInfo:(id)arg3;
- (void)handleClickEventIsVideoClicked:(_Bool)arg1 isEndcardClicked:(_Bool)arg2 clickExtraInfo:(id)arg3 model:(id)arg4;
- (void)handleClickEventIsVideoClicked:(_Bool)arg1 isEndcardClicked:(_Bool)arg2;
- (id)handleInteractiveFinished:(id)arg1;
- (id)interactiveFinished:(id)arg1;
- (void)tapAdLogo;
- (void)nativeAd:(id)arg1 adContainerViewDidRemoved:(id)arg2;
- (void)nativeAd:(id)arg1 dislikeWithReason:(id)arg2;
- (void)_internal_visiable;
- (void)nativeAdDidBecomeVisible:(id)arg1;
- (void)render_internal;
- (id)getAdCreativeToken;
- (void)render;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)p_restartWebMotionObserver;
- (void)p_stopWebMotionObserver;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1 nativeAd:(id)arg2 nativeExpressAdViewSource:(long long)arg3;
- (id)getTrackTag;
- (id)getAdExtraDataDict:(long long)arg1 skipType:(long long)arg2;
- (void)reportLabel:(id)arg1 adExtraDataType:(long long)arg2 skipType:(long long)arg3;
- (void)reportLabel:(id)arg1 adExtraDataType:(long long)arg2;
@property(nonatomic) _Bool isDefaltState;
@property(nonatomic) _Bool playingOnline;
@property(nonatomic) _Bool hasPlayedFinish;
@property(nonatomic) _Bool hasPlayed;
@property(retain, nonatomic) BUPlayer *player;
@property(readonly, nonatomic) long long realVideoDuration;
@property(readonly, nonatomic) double realCurrentPlayedTime;
- (void)startPlayVideo;
- (void)showDislikeHUD;
- (void)handleInvalidVideoUrl;
- (void)handleSkipVideo:(id)arg1;
- (void)handleSkipVideo;
- (void)handleClickEventInvideo:(id)arg1;
- (void)_initPlayer;
- (void)receiveWillTerminateNotification;
- (void)receiveEnterBackgroundNotification;
- (void)receiveWillEnterForegroundNotification;
- (void)handleVideoTransformWithParams:(id)arg1;
- (void)handleChangeVideoStateWithParams:(id)arg1;
@property(copy, nonatomic) NSDictionary *js2NativeParam;
- (id)handleRequestVideoPause:(id)arg1;
- (void)jsCallNative_startVideoTransformWithParams:(id)arg1;
- (void)jsCallNative_changeVideoStateWithParams:(id)arg1;
- (void)jsCallNative_skipVideo;
- (void)jsCallNative_muteVideoWithParams:(id)arg1;
- (id)jsCallNative_getCurrentVideoState;
- (void)registregistReachability;
- (void)bannerCarouselAction;
- (void)audioSessionHandleWithMute:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (double)innerTotalPlayTime;
- (double)currentPlayTime;
- (void)stop;
- (void)replay;
- (void)continuePlay;
- (void)pause;
- (void)play;
- (void)close;
- (_Bool)_shouldInitPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

