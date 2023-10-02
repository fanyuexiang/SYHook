//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJNativeExpressAdView.h"

@class BUPlayerItem, BUTimer, CSJDislikeContext, CSJPlayerTimeObserverModel, CSJRewardedRetainAlertManager, CSJVideoAdTracker;
@protocol CSJNativeExpressRewardedVideoAdViewDelegate;

@interface CSJNativeExpressRewardedVideoAdView : CSJNativeExpressAdView
{
    _Bool _isSkipTap;
    _Bool _isAPI_R1Cn;
    _Bool _You_TagXzj;
    _Bool _isLoopPlaying;
    _Bool _isShowAlert;
    _Bool _enterBackground;
    _Bool _isAreadyPreload;
    _Bool _isPlayFail;
    _Bool _isAppear;
    id <CSJNativeExpressRewardedVideoAdViewDelegate> _delegate;
    CSJDislikeContext *_dislikeContext;
    long long _skipDuration;
    BUPlayerItem *_playerItem;
    BUTimer *_quitTimer;
    BUTimer *_bufferTimer;
    long long _bufferSecond;
    double _leftSecondTime;
    double _lastReportTime;
    BUTimer *_The_ByInit;
    double _totalPlayedTime;
    long long _playTimes;
    CSJRewardedRetainAlertManager *_alertManger;
    long long _totalReduceRewardTime;
    CSJVideoAdTracker *_videoTracker;
    CSJPlayerTimeObserverModel *_playerTimeObserverModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) _Bool isPlayFail; // @synthesize isPlayFail=_isPlayFail;
@property(nonatomic) _Bool isAreadyPreload; // @synthesize isAreadyPreload=_isAreadyPreload;
@property(retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel; // @synthesize playerTimeObserverModel=_playerTimeObserverModel;
@property(nonatomic) _Bool enterBackground; // @synthesize enterBackground=_enterBackground;
@property(retain, nonatomic) CSJVideoAdTracker *videoTracker; // @synthesize videoTracker=_videoTracker;
@property(nonatomic) long long totalReduceRewardTime; // @synthesize totalReduceRewardTime=_totalReduceRewardTime;
@property(retain, nonatomic) CSJRewardedRetainAlertManager *alertManger; // @synthesize alertManger=_alertManger;
@property(nonatomic) _Bool isShowAlert; // @synthesize isShowAlert=_isShowAlert;
@property(nonatomic) long long playTimes; // @synthesize playTimes=_playTimes;
@property(nonatomic) double totalPlayedTime; // @synthesize totalPlayedTime=_totalPlayedTime;
@property(nonatomic) _Bool isLoopPlaying; // @synthesize isLoopPlaying=_isLoopPlaying;
@property(retain, nonatomic) BUTimer *The_ByInit; // @synthesize The_ByInit=_The_ByInit;
@property(nonatomic) double lastReportTime; // @synthesize lastReportTime=_lastReportTime;
@property(nonatomic) double leftSecondTime; // @synthesize leftSecondTime=_leftSecondTime;
@property(nonatomic) long long bufferSecond; // @synthesize bufferSecond=_bufferSecond;
@property(retain, nonatomic) BUTimer *bufferTimer; // @synthesize bufferTimer=_bufferTimer;
@property(retain, nonatomic) BUTimer *quitTimer; // @synthesize quitTimer=_quitTimer;
@property(retain, nonatomic) BUPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool You_TagXzj; // @synthesize You_TagXzj=_You_TagXzj;
@property(nonatomic) long long skipDuration; // @synthesize skipDuration=_skipDuration;
@property(nonatomic) _Bool isAPI_R1Cn; // @synthesize isAPI_R1Cn=_isAPI_R1Cn;
@property(nonatomic) _Bool isSkipTap; // @synthesize isSkipTap=_isSkipTap;
@property(retain, nonatomic) CSJDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) __weak id <CSJNativeExpressRewardedVideoAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)Logo_FailAdd;
- (id)Init_ShowLd:(id)arg1;
- (void)Nil_UIAnd:(unsigned long long)arg1;
- (void)Push_CaseZone:(unsigned long long)arg1;
- (long long)Meta_IfHash;
- (long long)Char_NotiAKey;
- (void)Play_CtaView;
- (_Bool)By_HttpMAX;
- (void)fullLinkTimerAction:(id)arg1;
- (void)ID_DcTime;
- (void)invalidateQuitTimer;
- (void)Diff_T5This;
- (void)judgeBufferTime:(id)arg1;
- (void)UI_OnNote;
- (void)Str_ComFrom;
- (void)judgeQuit:(id)arg1;
- (void)forceQuit:(unsigned long long)arg1;
- (void)A0_InTv;
- (_Bool)isRewardedVideo;
- (_Bool)MIN_NotVar;
- (_Bool)Pop_NoteA0;
- (_Bool)Char_JsonSel;
- (_Bool)Text_MARKUse;
- (void)Xzj_TmpThis;
- (void)Sel_NotiRit:(unsigned long long)arg1;
- (void)Fm_MARKItem:(id)arg1;
- (void)Do_TapWill:(unsigned long long)arg1;
- (_Bool)isVisible;
- (void)TODO_ByAs;
- (void)Docs_UITry:(_Bool)arg1;
- (void)To_HasThis;
- (void)onLiveStreamError:(id)arg1;
- (void)onLiveStreamShowTimeFinish;
- (void)onLiveStreamBoundaryTimeReached;
- (void)onLiveStreamStateUpdate:(long long)arg1;
- (void)onLiveStreamRenderStart;
- (void)playerBoundaryTimeReached:(id)arg1;
- (void)player:(id)arg1 decodeModeChanged:(unsigned long long)arg2;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)player:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerReadyToPlayWhenApplicationEnterBackground:(id)arg1;
- (void)playerReadyToPlay:(id)arg1;
- (void)Enum_ElseMain:(id)arg1;
- (id)Not_ObjR2;
- (void)openPlayable;
- (void)Net_PosJson;
- (void)The_AndEnum;
- (void)handleSkipVideo:(id)arg1;
- (void)handleSkipVideo;
- (void)Been_PosDuan;
- (void)receiveEnterBackgroundNotification;
- (void)receiveWillEnterForegroundNotification;
- (void)receiveWillResignActiveNotification:(id)arg1;
- (void)receivedidBecomeActiveNotification:(id)arg1;
- (void)handleInvalidVideoUrl;
- (void)Pos_BOOLNew;
- (void)startPlayVideo;
- (void)_initPlayer;
- (void)As_AndHttp;
- (void)AdId_Md5Duan;
- (void)Vc_DoXzj;
- (id)initWithFrame:(struct CGRect)arg1 nativeAd:(id)arg2 nativeExpressAdViewSource:(long long)arg3;
- (void)dealloc;

@end

