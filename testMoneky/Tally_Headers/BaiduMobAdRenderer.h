//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdImageDownloadQueue, BaiduMobAdRendererHelper, BaiduMobAdSkipButtonView, BaiduMobAdSplashActionView, BaiduMobAdSplashAtmosphereView, BaiduMobAdSplashShakeView, BaiduMobAdSplashSlideView, BaiduMobAdSplashTwistView, BaiduMobAdVideoProgressView, NSString, NSTimer, UIButton, UIColor, UILabel, UIView;

@interface BaiduMobAdRenderer : NSObject
{
    double _duration;
    double _playheadTime;
    _Bool _hideAdLogo;
    _Bool _enableAreaClick;
    _Bool _displayAreaClick;
    _Bool _splashAdIsClicked;
    _Bool _isEnableColorGradientLayer;
    _Bool _successColorFetch;
    _Bool _isEnableSmartColorFetch;
    BaiduMobAdRendererHelper *_rendererHelper;
    UIView *_rendererBaseView;
    double _rendererWidth;
    double _rendererHeight;
    BaiduMobAdVideoProgressView *_progressView;
    BaiduMobAdSkipButtonView *_skipButton;
    UILabel *_timeTicker;
    long long _seconds;
    NSTimer *_countTimer;
    double _remainTimeValue;
    double _currentTimeValue;
    NSString *_resourceUrl;
    double _startTimeStamp;
    double _containerBeforeCreatedTimeStamp;
    double _containerAfterCreatedTimeStamp;
    double _startLoadHtmlTimeStamp;
    BaiduMobAdImageDownloadQueue *_imageDownloadQueue;
    BaiduMobAdSplashActionView *_actionView;
    BaiduMobAdSplashShakeView *_splashShakeView;
    BaiduMobAdSplashTwistView *_splashTwistView;
    BaiduMobAdSplashSlideView *_slideView;
    BaiduMobAdSplashAtmosphereView *_atmosphereView;
    double _shakeImageViewSize;
    double _twistImageViewSize;
    UIColor *_twistMaskColor;
    UIView *_skipEnableClickView;
    NSString *_shakeVersion;
    UIButton *_imageAdButton;
    UIButton *_imageBaiduIconButton;
    NSString *_area;
    NSString *_splashActionViewColor;
    NSString *_colorModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *colorModel; // @synthesize colorModel=_colorModel;
@property(nonatomic) _Bool isEnableSmartColorFetch; // @synthesize isEnableSmartColorFetch=_isEnableSmartColorFetch;
@property(nonatomic) _Bool successColorFetch; // @synthesize successColorFetch=_successColorFetch;
@property(nonatomic) _Bool isEnableColorGradientLayer; // @synthesize isEnableColorGradientLayer=_isEnableColorGradientLayer;
@property(retain, nonatomic) NSString *splashActionViewColor; // @synthesize splashActionViewColor=_splashActionViewColor;
@property(retain, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) UIButton *imageBaiduIconButton; // @synthesize imageBaiduIconButton=_imageBaiduIconButton;
@property(retain, nonatomic) UIButton *imageAdButton; // @synthesize imageAdButton=_imageAdButton;
@property(nonatomic) _Bool splashAdIsClicked; // @synthesize splashAdIsClicked=_splashAdIsClicked;
@property(retain, nonatomic) NSString *shakeVersion; // @synthesize shakeVersion=_shakeVersion;
@property(retain, nonatomic) UIView *skipEnableClickView; // @synthesize skipEnableClickView=_skipEnableClickView;
@property(retain, nonatomic) UIColor *twistMaskColor; // @synthesize twistMaskColor=_twistMaskColor;
@property(nonatomic) double twistImageViewSize; // @synthesize twistImageViewSize=_twistImageViewSize;
@property(nonatomic) double shakeImageViewSize; // @synthesize shakeImageViewSize=_shakeImageViewSize;
@property(retain, nonatomic) BaiduMobAdSplashAtmosphereView *atmosphereView; // @synthesize atmosphereView=_atmosphereView;
@property(retain, nonatomic) BaiduMobAdSplashSlideView *slideView; // @synthesize slideView=_slideView;
@property(retain, nonatomic) BaiduMobAdSplashTwistView *splashTwistView; // @synthesize splashTwistView=_splashTwistView;
@property(retain, nonatomic) BaiduMobAdSplashShakeView *splashShakeView; // @synthesize splashShakeView=_splashShakeView;
@property(retain, nonatomic) BaiduMobAdSplashActionView *actionView; // @synthesize actionView=_actionView;
@property(nonatomic) _Bool displayAreaClick; // @synthesize displayAreaClick=_displayAreaClick;
@property(nonatomic) _Bool enableAreaClick; // @synthesize enableAreaClick=_enableAreaClick;
@property(nonatomic) _Bool hideAdLogo; // @synthesize hideAdLogo=_hideAdLogo;
@property(retain, nonatomic) BaiduMobAdImageDownloadQueue *imageDownloadQueue; // @synthesize imageDownloadQueue=_imageDownloadQueue;
@property(nonatomic) double startLoadHtmlTimeStamp; // @synthesize startLoadHtmlTimeStamp=_startLoadHtmlTimeStamp;
@property(nonatomic) double containerAfterCreatedTimeStamp; // @synthesize containerAfterCreatedTimeStamp=_containerAfterCreatedTimeStamp;
@property(nonatomic) double containerBeforeCreatedTimeStamp; // @synthesize containerBeforeCreatedTimeStamp=_containerBeforeCreatedTimeStamp;
@property(nonatomic) double startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(copy, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(nonatomic) double currentTimeValue; // @synthesize currentTimeValue=_currentTimeValue;
@property(nonatomic) double remainTimeValue; // @synthesize remainTimeValue=_remainTimeValue;
@property(retain, nonatomic) NSTimer *countTimer; // @synthesize countTimer=_countTimer;
@property(nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property(retain, nonatomic) UILabel *timeTicker; // @synthesize timeTicker=_timeTicker;
@property(retain, nonatomic) BaiduMobAdSkipButtonView *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) BaiduMobAdVideoProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double rendererHeight; // @synthesize rendererHeight=_rendererHeight;
@property(nonatomic) double rendererWidth; // @synthesize rendererWidth=_rendererWidth;
@property(retain, nonatomic) UIView *rendererBaseView; // @synthesize rendererBaseView=_rendererBaseView;
@property(retain, nonatomic) BaiduMobAdRendererHelper *rendererHelper; // @synthesize rendererHelper=_rendererHelper;
- (void)stopSplashVideo;
- (void)sendVideoEvent:(int)arg1 currentPlayingTime:(double)arg2 startPlayTime:(double)arg3 reason:(id)arg4;
- (void)sendVideoEvent:(int)arg1 currentTime:(double)arg2;
- (_Bool)isRenderForSplash;
- (id)imageWithResoureFromBundle:(id)arg1;
- (void)sendWinLog:(id)arg1 withState:(int)arg2 andDic:(id)arg3;
- (void)pressImageBaiduIconButtonToShowWangmeng;
- (void)pressImageAdToShowIcon;
- (void)removeTwistView;
- (void)removeShakeView;
- (void)resetShakeViewConfig;
- (void)clearnShakeView;
- (void)sendSplashFocus:(id)arg1 type:(int)arg2;
- (void)sendShakeViewLog:(id)arg1;
- (void)sendImageSplashSmartColorFetchLog:(id)arg1 clickType:(id)arg2;
- (void)addSplashTwistViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)addSplashShakeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)configImageBaiduIconWithImage:(id)arg1 frame:(struct CGRect)arg2 targetView:(id)arg3;
- (void)configImageAdWithImage:(id)arg1 frame:(struct CGRect)arg2 targetView:(id)arg3;
- (void)addLogoRecommendOnTargetView:(id)arg1;
- (void)resizeAdLogoFramePosition:(int)arg1 targetView:(id)arg2;
- (void)resizeAdLogoType:(int)arg1 targetView:(id)arg2;
- (void)cloudResizeLogoRecommendWithView:(id)arg1;
- (void)addLogoRecommendOnTargetView:(id)arg1 frame:(struct CGRect)arg2;
- (void)addSkipTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)cloudResizeSkipButton;
- (void)addSkipButton;
- (void)addProgressView;
- (void)smartFetchColorFromImage:(id)arg1;
- (void)addAreaClickView:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resetSlideViewConfig;
- (void)addAtmosphereViewWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addSlideViewWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addTimeTicker;
- (void)didAdClickedForWeb;
- (void)didAdImpressedForWeb;
- (void)failedAdDisplayForWeb:(int)arg1;
- (void)willAdDisplayForWeb;
- (void)didReceiveFailForWeb;
- (void)didReceiveSuccessForWeb;
- (void)reSizeInAnimateDuration:(double)arg1 targetFrame:(struct CGRect)arg2;
- (void)reSize;
- (void)removeAdButtons;
- (double)playheadTime;
- (double)duration;
- (void)didVideoFinishWithResult:(id)arg1;
- (void)playInterstitialVideo;
- (void)playVideoForVideoSdk:(id)arg1;
- (id)adView;
- (void)onAdPlayEnd;
- (void)stop;
- (void)reload;
- (void)resume;
- (void)pause;
- (void)start;
- (void)load;
- (id)initWithAdRendererHelper:(id)arg1;
- (void)dealloc;

@end

