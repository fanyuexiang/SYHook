//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLinearAdSlot.h"

@class BaiduMobAdWebView, NSNumber, NSString, UIColor;

@interface BaiduMobAdSplashSlot : XLinearAdSlot
{
    _Bool _isShowAd;
    BaiduMobAdWebView *_prepareWebview;
    NSNumber *_splashTipStyle;
    long long _contentMode;
    double _shakeImageViewSize;
    double _twistImageViewSize;
    UIColor *_twistMaskColor;
    double _requestPrepare;
    double _requestFinish;
    double _rendererFinish;
    NSString *_adType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property double rendererFinish; // @synthesize rendererFinish=_rendererFinish;
@property double requestFinish; // @synthesize requestFinish=_requestFinish;
@property double requestPrepare; // @synthesize requestPrepare=_requestPrepare;
@property(retain, nonatomic) UIColor *twistMaskColor; // @synthesize twistMaskColor=_twistMaskColor;
@property(nonatomic) double twistImageViewSize; // @synthesize twistImageViewSize=_twistImageViewSize;
@property(nonatomic) double shakeImageViewSize; // @synthesize shakeImageViewSize=_shakeImageViewSize;
@property(nonatomic) _Bool isShowAd; // @synthesize isShowAd=_isShowAd;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) NSNumber *splashTipStyle; // @synthesize splashTipStyle=_splashTipStyle;
@property(retain, nonatomic) BaiduMobAdWebView *prepareWebview; // @synthesize prepareWebview=_prepareWebview;
- (void)stop;
- (void)preloadResource;
- (void)sendVideoLog:(id)arg1 reason:(id)arg2;
- (void)sendSplashLog:(id)arg1;
- (void)onAdStart:(id)arg1 withAdInstance:(id)arg2 withDictionary:(id)arg3;
- (void)errorCallback:(id)arg1 withRequestAndResponseDic:(id)arg2;
- (void)successCallback:(id)arg1 withRequestAndResponseDic:(id)arg2;
- (void)load;
- (void)showAd;
- (void)loadBiddingAdWithTokenId:(id)arg1;
- (void)setBiddingData:(id)arg1;
- (id)getSplashRequestToken;
- (void)request;
- (void)start;
- (id)type;

@end
