//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BUVideoPlayerDelegate-Protocol.h"
#import "BUWebViewDelegate-Protocol.h"
#import "CSJCSJVideoBottomMaskClickDelegate-Protocol.h"
#import "CSJCSJVideoTopMaskClickDelegate-Protocol.h"
#import "CSJFullScreenInterstitialAdDelegate-Protocol.h"
#import "CSJRewardedVideoDownloadBarDelegate-Protocol.h"
#import "CSJRewardedVideoTopBarDelegate-Protocol.h"
#import "CSJVideoDetailAppInfoViewDelegate-Protocol.h"

@class BUPlayer, BUTimer, CSJAdSlot, CSJDislikeContext, CSJFullScreenInterstitialAdView, CSJMaterialMeta, CSJPlayerTimeObserverModel, CSJRewardedLiveCountDownView, CSJRewardedVideoDownloadBarView, CSJRewardedVideoTopBarView, CSJRewardedVideoWebMaskView, CSJURitSettingModel, CSJVideoAdTracker, CSJVideoBottomMask, CSJVideoDetailAppInfoView, CSJVideoDetailLoadingView, CSJVideoTopMask, CSJWebViewController, NSDictionary, NSString, NSTimer, NSURL, UIActivityIndicatorView, UIImageView, UILabel, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol BUWebView, CSJRewardedVideoDisplayDelegate;

@interface CSJRewardedVideoDisplayViewController : UIViewController <BUVideoPlayerDelegate, CSJRewardedVideoDownloadBarDelegate, CSJCSJVideoTopMaskClickDelegate, CSJCSJVideoBottomMaskClickDelegate, CSJRewardedVideoTopBarDelegate, CSJFullScreenInterstitialAdDelegate, BUWebViewDelegate, CSJVideoDetailAppInfoViewDelegate>
{
    _Bool _isTransform;
    _Bool _isRewardedVideo;
    _Bool _storeKitOpened;
    _Bool _isStopTimerEnterBackground;
    _Bool _isAlreadyPlayed;
    _Bool _isSkipTap;
    _Bool _isReportEvent;
    _Bool _isFirstAnimation;
    _Bool _isPlaying;
    _Bool _playingOnline;
    _Bool _hasPlayed;
    _Bool _isShowAlert;
    _Bool _displayDidDisappear;
    _Bool _resignActivity;
    _Bool _hasAddButtonToPlayerView;
    _Bool _isRewardLive;
    _Bool _liveAlertShowed;
    _Bool _liveJumped;
    _Bool _liveAutoJumping;
    _Bool _webviewLoadFinished;
    _Bool _loadingTimeFinished;
    _Bool _firstTimeClickWebview;
    _Bool _videoLoadFail;
    _Bool _isAreadyPreload;
    _Bool _isLoopPlaying;
    id <CSJRewardedVideoDisplayDelegate> _delegate;
    BUPlayer *_player;
    CSJRewardedVideoTopBarView *_topBarView;
    CSJMaterialMeta *_materialMeta;
    CSJAdSlot *_slot;
    double _screenWidth;
    double _screenHeight;
    NSTimer *_timer;
    long long _repeatsCount;
    UIView *_adlogoView;
    UILabel *_ADXLabel;
    UIView *_playerView;
    UIActivityIndicatorView *_activityIndicator;
    CSJRewardedVideoDownloadBarView *_downloadView;
    CSJVideoTopMask *_topMask;
    CSJVideoBottomMask *_bottomMask;
    NSDictionary *_touchDict;
    double _lastTime;
    CSJURitSettingModel *_ritModel;
    BUTimer *_quitTimer;
    CSJDislikeContext *_dislikeContext;
    CSJVideoAdTracker *_videoTracker;
    CSJFullScreenInterstitialAdView *_fullScreenInterstitialAdView;
    long long _imageAdLeftSeconds;
    CSJRewardedLiveCountDownView *_liveCountDownView;
    CSJWebViewController *_webViewController;
    UIView<BUWebView> *_webView;
    NSURL *_requestURL;
    CSJVideoDetailLoadingView *_loadingView;
    CSJRewardedVideoWebMaskView *_webmaskView;
    UISwipeGestureRecognizer *_maskViewSwipeGesture;
    UITapGestureRecognizer *_maskViewTapGesture;
    CSJVideoDetailAppInfoView *_detailAppInfoView;
    UIImageView *_adImageView;
    CSJPlayerTimeObserverModel *_playerTimeObserverModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoopPlaying; // @synthesize isLoopPlaying=_isLoopPlaying;
@property(retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel; // @synthesize playerTimeObserverModel=_playerTimeObserverModel;
@property(nonatomic) _Bool isAreadyPreload; // @synthesize isAreadyPreload=_isAreadyPreload;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(nonatomic) _Bool videoLoadFail; // @synthesize videoLoadFail=_videoLoadFail;
@property(nonatomic) _Bool firstTimeClickWebview; // @synthesize firstTimeClickWebview=_firstTimeClickWebview;
@property(nonatomic) _Bool loadingTimeFinished; // @synthesize loadingTimeFinished=_loadingTimeFinished;
@property(nonatomic) _Bool webviewLoadFinished; // @synthesize webviewLoadFinished=_webviewLoadFinished;
@property(retain, nonatomic) CSJVideoDetailAppInfoView *detailAppInfoView; // @synthesize detailAppInfoView=_detailAppInfoView;
@property(retain, nonatomic) UITapGestureRecognizer *maskViewTapGesture; // @synthesize maskViewTapGesture=_maskViewTapGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *maskViewSwipeGesture; // @synthesize maskViewSwipeGesture=_maskViewSwipeGesture;
@property(retain, nonatomic) CSJRewardedVideoWebMaskView *webmaskView; // @synthesize webmaskView=_webmaskView;
@property(retain, nonatomic) CSJVideoDetailLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) UIView<BUWebView> *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) CSJWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) _Bool liveAutoJumping; // @synthesize liveAutoJumping=_liveAutoJumping;
@property(nonatomic) _Bool liveJumped; // @synthesize liveJumped=_liveJumped;
@property(nonatomic) _Bool liveAlertShowed; // @synthesize liveAlertShowed=_liveAlertShowed;
@property(retain, nonatomic) CSJRewardedLiveCountDownView *liveCountDownView; // @synthesize liveCountDownView=_liveCountDownView;
@property(nonatomic) _Bool isRewardLive; // @synthesize isRewardLive=_isRewardLive;
@property(nonatomic) _Bool hasAddButtonToPlayerView; // @synthesize hasAddButtonToPlayerView=_hasAddButtonToPlayerView;
@property(nonatomic) _Bool resignActivity; // @synthesize resignActivity=_resignActivity;
@property(nonatomic) _Bool displayDidDisappear; // @synthesize displayDidDisappear=_displayDidDisappear;
@property(nonatomic) long long imageAdLeftSeconds; // @synthesize imageAdLeftSeconds=_imageAdLeftSeconds;
@property(retain, nonatomic) CSJFullScreenInterstitialAdView *fullScreenInterstitialAdView; // @synthesize fullScreenInterstitialAdView=_fullScreenInterstitialAdView;
@property(retain, nonatomic) CSJVideoAdTracker *videoTracker; // @synthesize videoTracker=_videoTracker;
@property(retain, nonatomic) CSJDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) _Bool isShowAlert; // @synthesize isShowAlert=_isShowAlert;
@property(nonatomic) _Bool hasPlayed; // @synthesize hasPlayed=_hasPlayed;
@property(nonatomic) _Bool playingOnline; // @synthesize playingOnline=_playingOnline;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) BUTimer *quitTimer; // @synthesize quitTimer=_quitTimer;
@property(nonatomic) _Bool isFirstAnimation; // @synthesize isFirstAnimation=_isFirstAnimation;
@property(retain, nonatomic) CSJURitSettingModel *ritModel; // @synthesize ritModel=_ritModel;
@property(nonatomic) _Bool isReportEvent; // @synthesize isReportEvent=_isReportEvent;
@property(nonatomic) _Bool isSkipTap; // @synthesize isSkipTap=_isSkipTap;
@property(nonatomic) _Bool isAlreadyPlayed; // @synthesize isAlreadyPlayed=_isAlreadyPlayed;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(copy, nonatomic) NSDictionary *touchDict; // @synthesize touchDict=_touchDict;
@property(retain, nonatomic) CSJVideoBottomMask *bottomMask; // @synthesize bottomMask=_bottomMask;
@property(retain, nonatomic) CSJVideoTopMask *topMask; // @synthesize topMask=_topMask;
@property(retain, nonatomic) CSJRewardedVideoDownloadBarView *downloadView; // @synthesize downloadView=_downloadView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UILabel *ADXLabel; // @synthesize ADXLabel=_ADXLabel;
@property(retain, nonatomic) UIView *adlogoView; // @synthesize adlogoView=_adlogoView;
@property(nonatomic) long long repeatsCount; // @synthesize repeatsCount=_repeatsCount;
@property(nonatomic) _Bool isStopTimerEnterBackground; // @synthesize isStopTimerEnterBackground=_isStopTimerEnterBackground;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) CSJAdSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) _Bool storeKitOpened; // @synthesize storeKitOpened=_storeKitOpened;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo=_isRewardedVideo;
@property(nonatomic) _Bool isTransform; // @synthesize isTransform=_isTransform;
@property(retain, nonatomic) CSJRewardedVideoTopBarView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) BUPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <CSJRewardedVideoDisplayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playerViewImageGaosi;
- (void)playerViewCoverGaosi;
- (void)webviewAnimationWithPlayerViewRatio:(double)arg1;
- (void)webviewAnimationWithFullScreen;
- (void)webViewMaskClickVoid;
- (void)webViewMaskTapWithRecognizer:(id)arg1;
- (void)webViewMaskSwipeWithRecognizer:(id)arg1;
- (void)swipeWebviewMaskView;
- (void)videoDetailAppInfoViewClickDownloadButton:(id)arg1 extraDic:(id)arg2;
- (void)fullScreenImageDownloadbar;
- (void)loadingTimeIsFinished;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)clickWebviewFirstTime;
- (void)createWebViewControllerWithFrame:(struct CGRect)arg1;
- (void)onRewardLiveBoxOpen;
- (void)checkRewardLiveBoxOpenState;
- (void)showRewardLiveAlert;
- (void)updateRewardLiveCountDown;
- (_Bool)videoUrlValiable;
- (id)infoViewModel;
- (long long)topBarViewStyle;
- (struct CGRect)getLiveCountDownFrame;
- (void)tapAdLogo;
@property(readonly, nonatomic) BUPlayer *displayPlayer;
- (double)watchedDuration;
- (double)currentTime;
- (double)playerDuration;
- (void)fullScreenImageAdDidClick:(id)arg1 extraDic:(id)arg2;
- (void)fullScreenInterstitialAdVideoViewDidClick:(id)arg1;
- (void)fullScreenInterstitialAdView:(id)arg1 videoStateDidChanged:(long long)arg2;
- (void)fullScreenInterstitialAdPlayerReadyToPlay:(id)arg1;
- (void)fullScreenInterstitialAdPlayerDidPlayFinish:(id)arg1;
- (void)fullScreenInterstitialAdViewDidClick:(id)arg1 extraDic:(id)arg2;
- (void)fullScreenInterstitialAdViewDidTapLogoImageView:(id)arg1;
- (void)fullScreenInterstitialAdView:(id)arg1 downloadBarTapped:(id)arg2 extraDic:(id)arg3;
- (void)fullScreenInterstitialAdView:(id)arg1 downloadButtonTapped:(id)arg2 extraDic:(id)arg3;
- (unsigned long long)isNewDowloadBar;
- (void)downloadViewAnimation;
- (void)reportEventIsNeedWatchPercent:(_Bool)arg1;
- (long long)getdownloadBarShowTime;
- (void)checkToPlayOrPause;
- (void)updateImageLeftSeconds;
- (void)updateLeftSeconds:(id)arg1;
- (void)startImageTimer;
- (void)stopTimer;
- (void)startTimer;
- (void)reportVideoEndCardTracker;
- (_Bool)fullscreenNotShowEndcard;
- (_Bool)rewardShowAlert;
- (long long)rewardWatchPercentForRport;
- (long long)videoBufferSecondForClose;
- (_Bool)videoDefaultMute;
- (void)dislikeDismissPlayVideo;
- (void)dislikeShowPauseVideo;
- (void)closeDisplayVC;
- (void)fullScreenInterstitialTypeDidClose;
- (void)showDislikeHUD;
- (_Bool)upToThirtySecondsStandard;
- (_Bool)isVideoNewDetailAndLandingPage;
- (_Bool)videoTopBarCloseButtonShowCloseIcon;
- (void)videoTopBarCloseButtonTapped:(id)arg1;
- (void)videoTopBarSilentButtonTapped:(id)arg1;
- (void)videoTopBarDislikeButtonTapped:(id)arg1;
- (void)videoTopBarTapped:(id)arg1 extraDic:(id)arg2;
- (id)playerViewTapyDict;
- (void)touchEventTrackerForClickClose;
- (void)touchEventTrackerForClick;
- (void)touchEventTrackerWithLabel:(id)arg1 sendClick:(_Bool)arg2;
- (id)getDurationAndPercentDic;
- (id)c_xyDict;
- (_Bool)needFullScreenVideoAdaptation;
- (_Bool)videoAdaptionVideoHeightNotContainBar;
- (struct CGSize)handleLandscapeVideoSizeWithVideoAdaption;
- (struct CGSize)handlePortraitVideoSizeWithVideoAdaption;
- (double)handlePortraitVideoTopWithVideoAdaption;
- (void)setPlayerVideoAdaption;
- (void)handleSendRewardWhenSwitchToEndcard;
- (_Bool)fullScreenImageNotSkipToEndcardAndNotDismiss;
- (void)openAppStore;
- (void)judgeQuit:(id)arg1;
- (void)forceQuit;
- (void)handleSkip;
- (void)handlePlayFinish:(id)arg1;
- (void)handlePlayFinish;
- (void)unMuteVideo;
- (void)silentVideo;
- (void)playRewardedVideo;
- (void)preloadMaterialMeta;
- (void)buildCommonView;
- (void)buildNorlmalView;
- (void)buildMaskView;
- (void)buildImageAdView;
- (void)continuePlay;
- (_Bool)sendClickEventWithArea:(id)arg1;
- (void)playerTap;
- (void)videoBottomMaskSubViewsTapped:(id)arg1 extraDic:(id)arg2;
- (void)videoBottomMaskTapped:(id)arg1 extraDic:(id)arg2;
- (void)videoTopMaskSubViewsTapped:(id)arg1 extraDic:(id)arg2 clickTypeString:(id)arg3;
- (void)clickAdImageView;
- (void)videoTopMaskTapped:(id)arg1 extraDic:(id)arg2;
- (id)extraDictionary:(id)arg1;
- (void)downloadButtonTapped:(id)arg1 extraDic:(id)arg2;
- (void)downloadBarTapped:(id)arg1 extraDic:(id)arg2;
- (id)getTrackTag;
- (void)reportLabel:(id)arg1 extraDic:(id)arg2 adExtraDataType:(long long)arg3 skipType:(long long)arg4;
- (void)reportLabel:(id)arg1 extraDic:(id)arg2 adExtraDataType:(long long)arg3;
- (void)player:(id)arg1 decodeModeChanged:(unsigned long long)arg2;
- (void)playerReadyToPlayWhenApplicationEnterBackground:(id)arg1;
- (void)playerReadyToPlay:(id)arg1;
- (void)player:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (_Bool)validFullScreenImageAndInterstitial;
- (_Bool)isFullScreenImageAd;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLayoutSubviews;
- (void)layoutNormalSubviews;
- (void)adjustLogoViewFrame;
- (void)pbu_safeLogoLayout;
- (void)layoutFullScreenImage;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)receiveDidEnterBackgroundNotification:(id)arg1;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)receiveWillResignActiveNotification:(id)arg1;
- (void)receivedidBecomeActiveNotification:(id)arg1;
- (void)addNotification;
- (id)initViewControllerWithAd:(id)arg1 slot:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

