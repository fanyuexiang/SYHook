//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdRenderer.h"

#import "BaiduMobAdActionComposerDelegate-Protocol.h"
#import "BaiduMobAdWebViewDelegate-Protocol.h"

@class BaiduMobAdMraidBridge, BaiduMobAdWebView, NSString, UILabel, UIView;

@interface BaiduMobAdHTMLRenderer : BaiduMobAdRenderer <BaiduMobAdActionComposerDelegate, BaiduMobAdWebViewDelegate>
{
    _Bool _shouldAddTimer;
    int _timeCount;
    BaiduMobAdWebView *_adDefaultWebView;
    BaiduMobAdWebView *_adExpandedWebView;
    UIView *_adResizedTransparentView;
    UIView *_fullscreenView;
    BaiduMobAdMraidBridge *_bridge;
    UILabel *_timeLabel;
    NSString *_firstUrlString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *firstUrlString; // @synthesize firstUrlString=_firstUrlString;
@property(nonatomic) _Bool shouldAddTimer; // @synthesize shouldAddTimer=_shouldAddTimer;
@property(nonatomic) int timeCount; // @synthesize timeCount=_timeCount;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) BaiduMobAdMraidBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) UIView *fullscreenView; // @synthesize fullscreenView=_fullscreenView;
@property(retain, nonatomic) UIView *adResizedTransparentView; // @synthesize adResizedTransparentView=_adResizedTransparentView;
@property(retain, nonatomic) BaiduMobAdWebView *adExpandedWebView; // @synthesize adExpandedWebView=_adExpandedWebView;
@property(retain, nonatomic) BaiduMobAdWebView *adDefaultWebView; // @synthesize adDefaultWebView=_adDefaultWebView;
- (void)bdWebViewDidStartLoad:(id)arg1;
- (void)bdWebViewDidFinishLoad:(id)arg1;
- (_Bool)bdWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)bdWebView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)evalScript:(id)arg1;
- (void)setWebViewOpaque:(_Bool)arg1;
- (void)setVisibility:(_Bool)arg1;
- (void)setIAPBuy:(_Bool)arg1;
- (_Bool)checkMsspNeedsIAP;
- (void)processClick:(id)arg1;
- (long long)mraidFullscreenOrientation;
- (void)cleanupViews;
- (void)prepareViews;
- (id)getTargetView:(id)arg1;
- (void)resizeRendererBaseView;
- (void)prepareWebView:(id)arg1;
- (void)timeAnimation;
- (void)addTimerInRenderWithSeconds:(int)arg1;
- (double)playheadTime;
- (void)stop;
- (void)didVideoFinishWithResult:(id)arg1;
- (void)playInterstitialVideo;
- (void)playVideoForVideoSdk:(id)arg1;
- (void)playVideoForInterstitial:(id)arg1;
- (void)onAdPlayEnd;
- (void)reload;
- (void)resume;
- (void)pause;
- (id)preparePropertyString;
- (void)start;
- (void)load;
- (void)initializeMraidData;
- (id)initWithAdRendererHelper:(id)arg1;
- (void)lazyStartWithHTML:(id)arg1 inWebView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

