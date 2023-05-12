//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJAdBaseView.h"

#import "BUVideoPlayerDelegate-Protocol.h"
#import "CSJVideoEngine-Protocol.h"

@class BUAudioSessionHandler, BUPlayer, BUReachability, BUTimer, CSJAdSlot, CSJDislikeContext, CSJDrawVideoFinishView, CSJMaterialMeta, CSJPlayerTimeObserverModel, CSJVideoAdTracker, NSArray, NSString, UIButton, UITapGestureRecognizer, UIView, UIViewController;
@protocol CSJNormalVideoFinishViewProtocol, CSJVideoAdViewDelegate;

@interface CSJVideoAdView : CSJAdBaseView <BUVideoPlayerDelegate, CSJVideoEngine>
{
    _Bool _drawVideoClickEnable;
    _Bool _supportAutoPlay;
    _Bool _hasPlaying;
    _Bool _hasStartPlaying;
    _Bool _muteSwitch;
    _Bool _isVideoCompletion;
    _Bool _codeExecuted;
    _Bool _last_paused;
    _Bool _drawVideo_tapPaused;
    _Bool _customPlayImage;
    _Bool _isCustomVideo;
    _Bool _shouldPause;
    id <CSJVideoAdViewDelegate> _delegate;
    UIViewController *_rootViewController;
    long long _AdType;
    CSJMaterialMeta *_materialMeta;
    UITapGestureRecognizer *_tapGesture;
    double _playedSeconds;
    UIButton *_playButton;
    UIView<CSJNormalVideoFinishViewProtocol> *_normalfinishView;
    CSJDrawVideoFinishView *_drawfinishView;
    unsigned long long _customPlayerType;
    BUTimer *_autoPlayTimer;
    BUPlayer *_player;
    BUReachability *_reachability;
    long long _drawVideoPlayCount;
    CSJDislikeContext *_dislikeContext;
    NSArray *_superScrollViewArray;
    CSJVideoAdTracker *_videoTracker;
    BUAudioSessionHandler *_sessionHandler;
    CSJPlayerTimeObserverModel *_playerTimeObserverModel;
    CSJAdSlot *_adslot;
    long long _drawVideoType;
    long long _videoAutoPlayType;
    unsigned long long _videoFinishMode;
}

+ (id)videoAdViewInstanceArray;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldPause; // @synthesize shouldPause=_shouldPause;
@property(nonatomic) unsigned long long videoFinishMode; // @synthesize videoFinishMode=_videoFinishMode;
@property(nonatomic) long long videoAutoPlayType; // @synthesize videoAutoPlayType=_videoAutoPlayType;
@property(nonatomic) long long drawVideoType; // @synthesize drawVideoType=_drawVideoType;
@property(nonatomic) _Bool isCustomVideo; // @synthesize isCustomVideo=_isCustomVideo;
@property(retain, nonatomic) CSJAdSlot *adslot; // @synthesize adslot=_adslot;
@property(retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel; // @synthesize playerTimeObserverModel=_playerTimeObserverModel;
@property(retain, nonatomic) BUAudioSessionHandler *sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(retain, nonatomic) CSJVideoAdTracker *videoTracker; // @synthesize videoTracker=_videoTracker;
@property(copy, nonatomic) NSArray *superScrollViewArray; // @synthesize superScrollViewArray=_superScrollViewArray;
@property(retain, nonatomic) CSJDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) _Bool customPlayImage; // @synthesize customPlayImage=_customPlayImage;
@property(nonatomic) _Bool drawVideo_tapPaused; // @synthesize drawVideo_tapPaused=_drawVideo_tapPaused;
@property(nonatomic) _Bool last_paused; // @synthesize last_paused=_last_paused;
@property(nonatomic) long long drawVideoPlayCount; // @synthesize drawVideoPlayCount=_drawVideoPlayCount;
@property(nonatomic) _Bool codeExecuted; // @synthesize codeExecuted=_codeExecuted;
@property(nonatomic) _Bool isVideoCompletion; // @synthesize isVideoCompletion=_isVideoCompletion;
@property(retain, nonatomic) BUReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) BUPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) BUTimer *autoPlayTimer; // @synthesize autoPlayTimer=_autoPlayTimer;
@property(nonatomic) unsigned long long customPlayerType; // @synthesize customPlayerType=_customPlayerType;
@property(nonatomic) _Bool muteSwitch; // @synthesize muteSwitch=_muteSwitch;
@property(nonatomic) _Bool hasStartPlaying; // @synthesize hasStartPlaying=_hasStartPlaying;
@property(nonatomic) _Bool hasPlaying; // @synthesize hasPlaying=_hasPlaying;
@property(retain, nonatomic) CSJDrawVideoFinishView *drawfinishView; // @synthesize drawfinishView=_drawfinishView;
@property(retain, nonatomic) UIView<CSJNormalVideoFinishViewProtocol> *normalfinishView; // @synthesize normalfinishView=_normalfinishView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) double playedSeconds; // @synthesize playedSeconds=_playedSeconds;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool supportAutoPlay; // @synthesize supportAutoPlay=_supportAutoPlay;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) long long AdType; // @synthesize AdType=_AdType;
@property(nonatomic) _Bool drawVideoClickEnable; // @synthesize drawVideoClickEnable=_drawVideoClickEnable;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <CSJVideoAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)reportVideoPlayerUrlEmptyTracker;
- (id)infoViewModel;
- (id)innerPlayer;
- (_Bool)_conformsToProtocolAction;
- (void)enableControlAndGesture;
- (_Bool)getAutoPlayVideoSwitch;
- (id)getTrackTag;
- (void)reportLabel:(id)arg1 adExtraDataType:(long long)arg2;
- (void)videoDetailPageReportLabel:(id)arg1 adExtraDataType:(long long)arg2;
- (id)getAdExtraDataDict:(long long)arg1;
- (void)playerTouchesBegan:(id)arg1;
- (void)player:(id)arg1 recognizeTapGesture:(id)arg2;
- (void)player:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerReadyToPlay:(id)arg1;
- (void)playerSeekToTime:(double)arg1;
- (void)player:(id)arg1 decodeModeChanged:(unsigned long long)arg2;
- (unsigned long long)videoAdViewInstanceCount;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)playerDidPlayTimeChanged:(id)arg1 currentTime:(long long)arg2;
- (void)videoActionHandlerWith:(id)arg1 context:(id)arg2;
- (void)videoClickTypeConfigWith:(id)arg1 context:(id)arg2;
- (void)goToDetail:(id)arg1;
- (void)setContextBlock:(id)arg1;
- (void)playTapped:(id)arg1;
- (void)tapPlayforDrawVideo;
- (void)hideNonWifiPromptView:(id)arg1;
- (_Bool)videoPlayerPlaying;
- (void)setMute:(_Bool)arg1;
- (double)currentPlayTime;
- (void)pause;
- (void)play;
- (void)audioSessionHandleWithMute:(_Bool)arg1;
- (void)audioSessionHandlerWhenDissmiss;
- (double)innerTotalPlayTime;
- (void)innerPause;
- (void)innerPlay;
- (void)playerPlayIncon:(id)arg1 playInconSize:(struct CGSize)arg2;
- (void)getSettingValueWithMaterialMeta:(id)arg1;
- (id)c_xyDictIfClick:(_Bool)arg1;
- (void)connectionChanged:(id)arg1;
- (void)tick:(id)arg1;
- (void)videoInfoSetting;
- (void)resetVideoPLayer;
- (void)finishVideoViewInfo;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didMoveToWindow;
- (id)findSupperScrollViews:(id)arg1;
- (id)init;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)resetCurrentTapPaused;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)AdViewClose:(id)arg1;
- (void)AdViewdidClick:(id)arg1;
- (id)initWithMaterial:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
