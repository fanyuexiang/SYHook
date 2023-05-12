//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseAdAdapter.h"

#import "GDTSplashAdDelegate-Protocol.h"
#import "GDTSplashAdNetworkAdapterProtocol-Protocol.h"
#import "GDTSplashZoomOutViewDelegate-Protocol.h"

@class GDTServerSideVerificationOptions, GDTSplashAdImp, GDTSplashAdMediator, GDTSplashZoomOutView, NSString, UIColor, UIImage;

@interface GDTSplashAdAdapter : GDTBaseAdAdapter <GDTSplashAdNetworkAdapterProtocol, GDTSplashAdDelegate, GDTSplashZoomOutViewDelegate>
{
    _Bool needZoomOut;
    _Bool shouldLoadFullscreenAd;
    UIColor *backgroundColor;
    UIImage *backgroundImage;
    long long fetchDelay;
    GDTSplashZoomOutView *splashZoomOutView;
    GDTServerSideVerificationOptions *serverSideVerificationOptions;
    GDTSplashAdMediator *_conncetor;
    GDTSplashAdImp *_splashAdImp;
    struct CGPoint skipButtonCenter;
}

+ (void)updateAppId:(id)arg1 extStr:(id)arg2;
@property(retain, nonatomic) GDTSplashAdImp *splashAdImp; // @synthesize splashAdImp=_splashAdImp;
@property(nonatomic) __weak GDTSplashAdMediator *conncetor; // @synthesize conncetor=_conncetor;
@property(retain, nonatomic) GDTServerSideVerificationOptions *serverSideVerificationOptions; // @synthesize serverSideVerificationOptions;
@property(nonatomic) _Bool shouldLoadFullscreenAd; // @synthesize shouldLoadFullscreenAd;
@property(nonatomic) _Bool needZoomOut; // @synthesize needZoomOut;
@property(nonatomic) struct CGPoint skipButtonCenter; // @synthesize skipButtonCenter;
@property(nonatomic) long long fetchDelay; // @synthesize fetchDelay;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
- (void).cxx_destruct;
- (void)splashAdLifeTime:(unsigned long long)arg1;
- (void)splashAdDidDismissFullScreenModal:(id)arg1;
- (void)splashAdWillDismissFullScreenModal:(id)arg1;
- (void)splashAdDidPresentFullScreenModal:(id)arg1;
- (void)splashAdWillPresentFullScreenModal:(id)arg1;
- (void)splashAdClosed:(id)arg1;
- (void)splashAdWillClosed:(id)arg1;
- (void)splashAdClicked:(id)arg1;
- (void)splashAdExposured:(id)arg1;
- (void)splashAdApplicationWillEnterBackground:(id)arg1;
- (void)splashAdFailToPresent:(id)arg1 withError:(id)arg2;
- (void)splashAdDidLoad:(id)arg1;
- (void)splashAdSuccessPresentScreen:(id)arg1;
- (id)adImp;
- (void)setMediationExtDict:(id)arg1;
- (void)showAdInWindow:(id)arg1 withBottomView:(id)arg2 skipView:(id)arg3;
@property(readonly, nonatomic) GDTSplashZoomOutView *splashZoomOutView; // @synthesize splashZoomOutView;
- (void)loadAd;
- (_Bool)isAdValid;
- (_Bool)isContractAd;
- (id)realMediationPrice;
- (id)eCPMLevel;
- (long long)eCPM;
- (id)initWithAdNetworkConnector:(id)arg1 posId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

