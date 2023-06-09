//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTMBaseAdMediator.h"

#import "GDTSplashAdImpProtocol-Protocol.h"
#import "GDTSplashAdNetworkConnectorProtocol-Protocol.h"

@class GDTLoadAdParams, GDTServerSideVerificationOptions, GDTSplashAd, GDTSplashZoomOutView, NSDictionary, NSString, UIColor, UIImage, UIView, UIWindow;
@protocol GDTSplashAdDelegate><GDTSplashZoomOutViewDelegate;

@interface GDTSplashAdMediator : GDTMBaseAdMediator <GDTSplashAdImpProtocol, GDTSplashAdNetworkConnectorProtocol>
{
    _Bool needZoomOut;
    _Bool loading;
    _Bool _isParallelLoad;
    _Bool _isIMAX;
    id <GDTSplashAdDelegate><GDTSplashZoomOutViewDelegate> delegate;
    GDTSplashAd *splashAd;
    NSString *adNetworkName;
    double _fetchDelay;
    UIColor *backgroundColor;
    UIImage *backgroundImage;
    NSString *placementId;
    GDTSplashZoomOutView *splashZoomOutView;
    NSDictionary *mediationExtDict;
    GDTLoadAdParams *loadAdParams;
    GDTServerSideVerificationOptions *serverSideVerificationOptions;
    UIWindow *_window;
    UIView *_adProviderView;
    UIView *_skipView;
    struct CGPoint skipButtonCenter;
}

@property(nonatomic) _Bool isIMAX; // @synthesize isIMAX=_isIMAX;
@property(nonatomic) _Bool isParallelLoad; // @synthesize isParallelLoad=_isParallelLoad;
@property(retain, nonatomic) UIView *skipView; // @synthesize skipView=_skipView;
@property(retain, nonatomic) UIView *adProviderView; // @synthesize adProviderView=_adProviderView;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) GDTServerSideVerificationOptions *serverSideVerificationOptions; // @synthesize serverSideVerificationOptions;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict;
@property(retain, nonatomic) GDTSplashZoomOutView *splashZoomOutView; // @synthesize splashZoomOutView;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId;
@property(nonatomic) _Bool loading; // @synthesize loading;
@property(nonatomic) _Bool needZoomOut; // @synthesize needZoomOut;
@property(nonatomic) struct CGPoint skipButtonCenter; // @synthesize skipButtonCenter;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic) double fetchDelay; // @synthesize fetchDelay=_fetchDelay;
@property(copy, nonatomic) NSString *adNetworkName; // @synthesize adNetworkName;
@property(nonatomic) __weak GDTSplashAd *splashAd; // @synthesize splashAd;
@property(nonatomic) __weak id <GDTSplashAdDelegate><GDTSplashZoomOutViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)adapter_splashAd:(id)arg1 lifeTime:(unsigned long long)arg2;
- (void)adapter_splashAdDidDismissFullScreenModal:(id)arg1;
- (void)adapter_splashAdWillDismissFullScreenModal:(id)arg1;
- (void)adapter_splashAdDidPresentFullScreenModal:(id)arg1;
- (void)adapter_splashAdWillPresentFullScreenModal:(id)arg1;
- (void)adapter_splashAdClosed:(id)arg1;
- (void)adapter_splashAdWillClosed:(id)arg1;
- (void)adapter_splashAdClicked:(id)arg1;
- (void)adapter_splashAdExposured:(id)arg1;
- (void)adapter_splashAdApplicationWillEnterBackground:(id)arg1;
- (void)adapter_splashAdSuccessPresentScreen:(id)arg1;
- (void)adapter_splashAdFailToPresent:(id)arg1 withError:(id)arg2;
- (void)adapter_splashAdDidLoad:(id)arg1;
- (id)GDTfunctionu2Jx2u;
- (void)GDTfunctiony15T9q;
- (void)GDTfunctiont02pdN;
- (void)GDTfunctione9eJQi;
- (void)adapterLoadAd:(id)arg1;
- (void)showAdInWindow:(id)arg1 adProviderView:(id)arg2 skipView:(id)arg3;
- (void)loadAd:(_Bool)arg1;
- (_Bool)isAdValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

