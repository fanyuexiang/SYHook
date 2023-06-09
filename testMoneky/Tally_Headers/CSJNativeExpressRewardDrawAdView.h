//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJNativeExpressAdView.h"

@class BUPlayerItem, BUTimer, CSJDislikeContext, CSJPlayerTimeObserverModel, CSJRewardedAgianAlertView, CSJVideoAdTracker, NSArray, NSDictionary, UIView;
@protocol CSJRewardedVideoDrawAdViewDelegate;

@interface CSJNativeExpressRewardDrawAdView : CSJNativeExpressAdView
{
    _Bool _isShowAlert;
    _Bool _enterBackground;
    _Bool _didStartPlay;
    id <CSJRewardedVideoDrawAdViewDelegate> _delegate;
    CSJDislikeContext *_dislikeContext;
    NSArray *_relatedMaterialMetas;
    NSDictionary *_relatedMaterialMetasJson;
    BUTimer *_quitTimer;
    BUTimer *_bufferTimer;
    long long _bufferSecond;
    CSJVideoAdTracker *_videoTracker;
    BUPlayerItem *_playerItem;
    CSJPlayerTimeObserverModel *_playerTimeObserverModel;
    double _leftSecondTime;
    double _lastReportTime;
    long long _rewardContributeValue;
    CSJRewardedAgianAlertView *_alert;
    double _currentPlayTime;
    UIView *_gaosiView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didStartPlay; // @synthesize didStartPlay=_didStartPlay;
@property(retain, nonatomic) UIView *gaosiView; // @synthesize gaosiView=_gaosiView;
@property(nonatomic) double currentPlayTime; // @synthesize currentPlayTime=_currentPlayTime;
@property(retain, nonatomic) CSJRewardedAgianAlertView *alert; // @synthesize alert=_alert;
@property(nonatomic) long long rewardContributeValue; // @synthesize rewardContributeValue=_rewardContributeValue;
@property(nonatomic) _Bool enterBackground; // @synthesize enterBackground=_enterBackground;
@property(nonatomic) _Bool isShowAlert; // @synthesize isShowAlert=_isShowAlert;
@property(nonatomic) double lastReportTime; // @synthesize lastReportTime=_lastReportTime;
@property(nonatomic) double leftSecondTime; // @synthesize leftSecondTime=_leftSecondTime;
@property(retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel; // @synthesize playerTimeObserverModel=_playerTimeObserverModel;
@property(retain, nonatomic) BUPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) CSJVideoAdTracker *videoTracker; // @synthesize videoTracker=_videoTracker;
@property(nonatomic) long long bufferSecond; // @synthesize bufferSecond=_bufferSecond;
@property(retain, nonatomic) BUTimer *bufferTimer; // @synthesize bufferTimer=_bufferTimer;
@property(retain, nonatomic) BUTimer *quitTimer; // @synthesize quitTimer=_quitTimer;
@property(readonly, copy, nonatomic) NSDictionary *relatedMaterialMetasJson; // @synthesize relatedMaterialMetasJson=_relatedMaterialMetasJson;
@property(readonly, copy, nonatomic) NSArray *relatedMaterialMetas; // @synthesize relatedMaterialMetas=_relatedMaterialMetas;
@property(retain, nonatomic) CSJDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) __weak id <CSJRewardedVideoDrawAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)safeDelegate_rewardDrawAdViewIsShowAlert:(_Bool)arg1;
- (void)safeDelegate_rewardDrawAdViewDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)safeDelegate_rewardDrawAdViewDimissCurrentVC;
- (void)safeDelegate_rewardDrawAdViewSwitchToEndcard;
- (void)reportPlayerTrackerPlayBreak:(unsigned long long)arg1;
- (void)reportPlayerTrackerEndcard:(unsigned long long)arg1;
- (void)playerBoundaryTimeReached:(id)arg1;
- (void)player:(id)arg1 decodeModeChanged:(unsigned long long)arg2;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)player:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerDidReadyPlay;
- (void)playerReadyToPlayWhenApplicationEnterBackground:(id)arg1;
- (void)playerReadyToPlay:(id)arg1;
- (void)judgeBufferTime:(id)arg1;
- (void)invalidateBufferTimer;
- (void)startBufferTimer;
- (void)judgeQuit:(id)arg1;
- (void)invalidateQuitTimer;
- (void)startQuitTimer;
- (void)receiveWillTerminateNotification;
- (void)receiveEnterBackgroundNotification;
- (void)receiveWillEnterForegroundNotification;
- (void)receiveWillResignActiveNotification:(id)arg1;
- (void)receivedidBecomeActiveNotification:(id)arg1;
- (void)updateLocalPlayerItem;
- (void)setupPlayerItem;
- (void)checkToPlayOrPause;
- (void)switchToEndcard:(unsigned long long)arg1;
- (unsigned long long)getRewardLeftTime;
- (void)handlePlayFinish:(unsigned long long)arg1;
- (void)showRewardAlert:(id)arg1;
- (void)showRewardAlert;
- (_Bool)shouldShowRewardAlert;
- (void)handleSkipVideo:(id)arg1;
- (void)handleSkipVideo;
- (void)showDislikeHUD;
@property(readonly, nonatomic) _Bool didReachMaxContrubuteValue;
- (void)increaseContributeValue;
- (void)releasePlayer;
- (void)createPlayer;
- (void)continuePlay;
- (void)pause;
- (void)startPlay;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)willMoveToSuperview:(id)arg1;
- (void)render;
- (id)initWithFrame:(struct CGRect)arg1 nativeAd:(id)arg2 nativeExpressAdViewSource:(long long)arg3;
- (void)dealloc;

@end

