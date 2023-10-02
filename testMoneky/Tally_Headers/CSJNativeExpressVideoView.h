//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJNativeExpressAdView.h"

@class BUAudioSessionHandler, BUReachability, BUTimer, CSJDislikeContext, CSJPlayerTimeObserverModel, CSJVideoAdTracker, NSArray, UIButton, UIView;
@protocol CSJNormalVideoFinishViewProtocol;

@interface CSJNativeExpressVideoView : CSJNativeExpressAdView
{
    _Bool _muteSwitch;
    _Bool _last_paused;
    _Bool _codeExecuted;
    BUTimer *_autoPlayTimer;
    BUReachability *_reachability;
    UIView<CSJNormalVideoFinishViewProtocol> *_finishBackgroundView;
    UIButton *_playButton;
    long long _videoAutoPlayType;
    long long _presentationType;
    CSJDislikeContext *_dislikeContext;
    CSJVideoAdTracker *_videoTracker;
    NSArray *_superScrollViewArray;
    BUAudioSessionHandler *_sessionHandler;
    CSJPlayerTimeObserverModel *_playerTimeObserverModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel; // @synthesize playerTimeObserverModel=_playerTimeObserverModel;
@property(retain, nonatomic) BUAudioSessionHandler *sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(copy, nonatomic) NSArray *superScrollViewArray; // @synthesize superScrollViewArray=_superScrollViewArray;
@property(retain, nonatomic) CSJVideoAdTracker *videoTracker; // @synthesize videoTracker=_videoTracker;
@property(retain, nonatomic) CSJDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) _Bool codeExecuted; // @synthesize codeExecuted=_codeExecuted;
@property(nonatomic) long long presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) _Bool last_paused; // @synthesize last_paused=_last_paused;
@property(nonatomic) long long videoAutoPlayType; // @synthesize videoAutoPlayType=_videoAutoPlayType;
@property(nonatomic) _Bool muteSwitch; // @synthesize muteSwitch=_muteSwitch;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView<CSJNormalVideoFinishViewProtocol> *finishBackgroundView; // @synthesize finishBackgroundView=_finishBackgroundView;
@property(retain, nonatomic) BUReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) BUTimer *autoPlayTimer; // @synthesize autoPlayTimer=_autoPlayTimer;
- (void)videoClickTypeConfigWith:(id)arg1 context:(id)arg2;
- (void)goToDetail:(id)arg1;
- (id)Tm_LongShow;
- (id)findSupperScrollViews:(id)arg1;
- (_Bool)Bool_MAXData;
- (void)audioSessionHandleWithMute:(_Bool)arg1;
- (void)ADX_AsObj;
- (_Bool)getAutoPlayVideoSwitch;
- (_Bool)UI_IntIf;
- (void)innerPause;
- (void)Hash_TextDate;
- (void)innerPlay;
- (void)tick:(id)arg1;
- (void)playerBoundaryTimeReached:(id)arg1;
- (void)player:(id)arg1 decodeModeChanged:(unsigned long long)arg2;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)player:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerReadyToPlay:(id)arg1;
- (void)stop;
- (void)replay;
- (void)Pos_BOOLNew;
- (void)pause;
- (void)play;
- (void)Can_IdfaHttp;
- (void)receiveEnterBackgroundNotification;
- (void)receiveWillEnterForegroundNotification;
- (void)videoInfoSetting;
- (void)startPlayVideo;
- (void)playerSeekToTime:(double)arg1;
- (void)Tag_A0Docs:(id)arg1;
- (void)_initPlayer;
- (void)layoutSubviews;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)appStoreControllerDidDisappear:(id)arg1;
- (void)appStoreControllerDidAppear:(id)arg1;
- (_Bool)Lock_ADXTm;
- (void)setYES_AppDate:(id)arg1;
- (void)addNotification;
- (void)close;
- (id)initWithFrame:(struct CGRect)arg1 nativeAd:(id)arg2 nativeExpressAdViewSource:(long long)arg3;
- (void)didMoveToWindow;
- (void)dealloc;

@end

