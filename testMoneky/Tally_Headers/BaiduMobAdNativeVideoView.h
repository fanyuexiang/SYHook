//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdNativeVideoBaseView.h"

#import "BaiduMobAdMediaPlayerDelegate-Protocol.h"

@class BaiduAdVideoTailFrame, BaiduMobAdImageDownloadQueue, BaiduMobAdMediaPlayer, BaiduMobAdNativeAdObject, BaiduMobAdbarrageView, NSString, NSTimer, UIButton, UIImageView, UILabel, UISlider, UITapGestureRecognizer, UIView;
@protocol BaiduMobAdNativeVideoViewDelegate;

@interface BaiduMobAdNativeVideoView : BaiduMobAdNativeVideoBaseView <BaiduMobAdMediaPlayerDelegate>
{
    _Bool _supportControllerView;
    _Bool _supportActImage;
    _Bool _isFullScreen;
    _Bool _isFirstTimePlay;
    _Bool _metaLoaded;
    _Bool _isVideo;
    _Bool _mute;
    _Bool _isInShowLPWebView;
    _Bool _isWillShow;
    _Bool _hasSendAlsPlay;
    _Bool _isTriggeredAutoClick;
    _Bool _isVideoEnableClick;
    _Bool _isFrontCardEnableClick;
    _Bool _isEnableToPlay;
    _Bool _isEnablePlayAndClick;
    _Bool _isRemoveTailFrame;
    _Bool _isAutoPlay;
    _Bool _isAutoPlayNonWifi;
    _Bool _isEnableBlur;
    int _remainTimeValue;
    id <BaiduMobAdNativeVideoViewDelegate> _videoDelegate;
    UISlider *_progress;
    UIButton *_btnPlayOrPause;
    UIButton *_btnFullScreen;
    UIButton *_btnDone;
    UIView *_controlView;
    BaiduMobAdNativeAdObject *_associatedObject;
    UIView *_displayView;
    BaiduAdVideoTailFrame *_finialView;
    NSString *_url;
    BaiduMobAdMediaPlayer *_player;
    UITapGestureRecognizer *_tapGesture;
    UIView *_originSuperView;
    id _playbackObserver;
    NSTimer *_countTimer;
    UILabel *_timecountLabel;
    NSString *_endcardUrlString;
    UIImageView *_frontPostView;
    UIButton *_frontPauseButton;
    double _backgroundTimeStamp;
    NSString *_mainImageUrl;
    BaiduMobAdImageDownloadQueue *_imageDownloadQueue;
    long long _videoState;
    NSString *_category;
    double _startPlayingTime;
    NSString *_blurImageUrl;
    BaiduMobAdbarrageView *_barrageView;
    struct CGRect _originFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaiduMobAdbarrageView *barrageView; // @synthesize barrageView=_barrageView;
@property(retain, nonatomic) NSString *blurImageUrl; // @synthesize blurImageUrl=_blurImageUrl;
@property(nonatomic) _Bool isEnableBlur; // @synthesize isEnableBlur=_isEnableBlur;
@property(nonatomic) _Bool isAutoPlayNonWifi; // @synthesize isAutoPlayNonWifi=_isAutoPlayNonWifi;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) _Bool isRemoveTailFrame; // @synthesize isRemoveTailFrame=_isRemoveTailFrame;
@property(nonatomic) _Bool isEnablePlayAndClick; // @synthesize isEnablePlayAndClick=_isEnablePlayAndClick;
@property(nonatomic) _Bool isEnableToPlay; // @synthesize isEnableToPlay=_isEnableToPlay;
@property(nonatomic) _Bool isFrontCardEnableClick; // @synthesize isFrontCardEnableClick=_isFrontCardEnableClick;
@property(nonatomic) _Bool isVideoEnableClick; // @synthesize isVideoEnableClick=_isVideoEnableClick;
@property(nonatomic) _Bool isTriggeredAutoClick; // @synthesize isTriggeredAutoClick=_isTriggeredAutoClick;
@property(nonatomic) _Bool hasSendAlsPlay; // @synthesize hasSendAlsPlay=_hasSendAlsPlay;
@property(nonatomic) double startPlayingTime; // @synthesize startPlayingTime=_startPlayingTime;
@property(nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) long long videoState; // @synthesize videoState=_videoState;
@property(retain, nonatomic) BaiduMobAdImageDownloadQueue *imageDownloadQueue; // @synthesize imageDownloadQueue=_imageDownloadQueue;
@property(nonatomic) _Bool isWillShow; // @synthesize isWillShow=_isWillShow;
@property(nonatomic) _Bool isInShowLPWebView; // @synthesize isInShowLPWebView=_isInShowLPWebView;
@property(retain, nonatomic) NSString *mainImageUrl; // @synthesize mainImageUrl=_mainImageUrl;
@property(nonatomic) double backgroundTimeStamp; // @synthesize backgroundTimeStamp=_backgroundTimeStamp;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) UIButton *frontPauseButton; // @synthesize frontPauseButton=_frontPauseButton;
@property(retain, nonatomic) UIImageView *frontPostView; // @synthesize frontPostView=_frontPostView;
@property(retain, nonatomic) NSString *endcardUrlString; // @synthesize endcardUrlString=_endcardUrlString;
@property(retain, nonatomic) UILabel *timecountLabel; // @synthesize timecountLabel=_timecountLabel;
@property(nonatomic) int remainTimeValue; // @synthesize remainTimeValue=_remainTimeValue;
@property(retain, nonatomic) NSTimer *countTimer; // @synthesize countTimer=_countTimer;
@property(retain, nonatomic) id playbackObserver; // @synthesize playbackObserver=_playbackObserver;
@property(retain, nonatomic) UIView *originSuperView; // @synthesize originSuperView=_originSuperView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) BaiduMobAdMediaPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) BaiduAdVideoTailFrame *finialView; // @synthesize finialView=_finialView;
@property(retain, nonatomic) UIView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) BaiduMobAdNativeAdObject *associatedObject; // @synthesize associatedObject=_associatedObject;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) _Bool metaLoaded; // @synthesize metaLoaded=_metaLoaded;
@property(nonatomic) _Bool isFirstTimePlay; // @synthesize isFirstTimePlay=_isFirstTimePlay;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UIButton *btnDone; // @synthesize btnDone=_btnDone;
@property(retain, nonatomic) UIButton *btnFullScreen; // @synthesize btnFullScreen=_btnFullScreen;
@property(retain, nonatomic) UIButton *btnPlayOrPause; // @synthesize btnPlayOrPause=_btnPlayOrPause;
@property(retain, nonatomic) UISlider *progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <BaiduMobAdNativeVideoViewDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property _Bool supportActImage; // @synthesize supportActImage=_supportActImage;
@property _Bool supportControllerView; // @synthesize supportControllerView=_supportControllerView;
- (void)dismissLandingPage;
- (_Bool)render;
- (_Bool)checkAutoPlay;
- (_Bool)handleScrollStop;
- (void)didMoveToWindow;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)sendVideoEvent:(int)arg1 currentPlayingTime:(double)arg2 startPlayTime:(double)arg3 reason:(id)arg4;
- (void)sendVideoEvent:(int)arg1 currentTime:(double)arg2;
- (void)updateValue:(id)arg1;
- (void)addProgressObserver;
- (void)videoAdClick;
- (void)indicatorViewClick;
- (void)btnReplayClick;
- (void)btnLPClick;
- (void)clickFullScreen:(id)arg1;
- (void)playClick:(id)arg1;
- (_Bool)newWindowTransform;
- (void)didChangeOrientation;
- (void)handleClick;
- (void)setVideoMute:(_Bool)arg1;
- (_Bool)isPlaying;
- (void)playbackFail:(id)arg1;
- (void)setRemainTime;
- (void)layoutDisplayArea;
- (void)displayVideo;
- (void)completePlayback;
- (void)startPlayback;
- (void)hideEndCard;
- (void)showEndCard;
- (void)hideFrontCard;
- (void)showFrontCard;
- (void)onPlayerItemDidReachEnd:(id)arg1;
- (void)onPlayerItemFail:(id)arg1;
- (void)mediaPlayerDidLoading:(id)arg1;
- (void)mediaPlayerStatusIsReady:(id)arg1;
- (void)mediaPlayerDidFailed:(id)arg1;
- (void)mediaPlayerDidPlay:(id)arg1;
- (void)mediaPlayerDidPause:(id)arg1;
- (void)mediaPlayerDidComplete:(id)arg1;
- (void)mediaPlayerDidReadyForDisplay:(id)arg1;
- (void)resizePlaybackFrame:(struct CGRect)arg1;
- (double)currentTime;
- (double)duration;
- (void)stop;
- (void)pause;
- (void)replay;
- (void)resume;
- (void)play;
- (void)videoStateStop:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)checkVisible;
- (void)reSize;
- (id)imageForString:(id)arg1;
- (void)resetFrontCardContentMode:(long long)arg1;
- (void)setupUI;
- (void)cleanUp;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)setupImageUI;
- (id)initImageWithFrame:(struct CGRect)arg1 andObject:(id)arg2;
- (void)setAudioSessionCategory:(id)arg1;
- (id)initVideoWithFrame:(struct CGRect)arg1 andObject:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

