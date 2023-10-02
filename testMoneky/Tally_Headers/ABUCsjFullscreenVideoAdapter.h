//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUFullscreenVideoAdDelegate-Protocol.h"
#import "BUMCustomFullscreenVideoAdapter-Protocol.h"
#import "BUNativeExpressFullscreenVideoAdDelegate-Protocol.h"

@class BUFullscreenVideoAd, BUNativeExpressFullscreenVideoAd, NSString;
@protocol BUMCustomConfigAdapter, BUMCustomFullscreenVideoAdapterBridge;

@interface ABUCsjFullscreenVideoAdapter : NSObject <BUFullscreenVideoAdDelegate, BUNativeExpressFullscreenVideoAdDelegate, BUMCustomFullscreenVideoAdapter>
{
    _Bool _hasVideoDownLoad;
    BUFullscreenVideoAd *_fvAd;
    BUNativeExpressFullscreenVideoAd *_expressFvAd;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasVideoDownLoad; // @synthesize hasVideoDownLoad=_hasVideoDownLoad;
@property(retain, nonatomic) BUNativeExpressFullscreenVideoAd *expressFvAd; // @synthesize expressFvAd=_expressFvAd;
@property(retain, nonatomic) BUFullscreenVideoAd *fvAd; // @synthesize fvAd=_fvAd;
- (void)nativeExpressFullscreenVideoAdDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)nativeExpressFullscreenVideoAdCallback:(id)arg1 withType:(long long)arg2;
- (void)nativeExpressFullscreenVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeExpressFullscreenVideoAdDidClose:(id)arg1;
- (void)nativeExpressFullscreenVideoAdWillClose:(id)arg1;
- (void)nativeExpressFullscreenVideoAdDidClickSkip:(id)arg1;
- (void)nativeExpressFullscreenVideoAdDidClick:(id)arg1;
- (void)nativeExpressFullscreenVideoAdDidVisible:(id)arg1;
- (void)nativeExpressFullscreenVideoAdWillVisible:(id)arg1;
- (void)nativeExpressFullscreenVideoAdDidDownLoadVideo:(id)arg1;
- (void)nativeExpressFullscreenVideoAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressFullscreenVideoAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressFullscreenVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeExpressFullscreenVideoAdDidLoad:(id)arg1;
- (void)fullscreenVideoAdCallback:(id)arg1 withType:(long long)arg2;
- (void)fullscreenVideoAdDidClickSkip:(id)arg1;
- (void)fullscreenVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)fullscreenVideoAdDidClose:(id)arg1;
- (void)fullscreenVideoAdWillClose:(id)arg1;
- (void)fullscreenVideoAdDidClick:(id)arg1;
- (void)fullscreenVideoAdDidVisible:(id)arg1;
- (void)fullscreenVideoAdWillVisible:(id)arg1;
- (void)fullscreenVideoAdVideoDataDidLoad:(id)arg1;
- (void)fullscreenVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)fullscreenVideoMaterialMetaAdDidLoad:(id)arg1;
- (id)_transitionMediaExt:(id)arg1;
- (void)_setupWithWithSlotID:(id)arg1 andParameter:(id)arg2;
- (_Bool)enablePreloadWhenCurrentIsDisplay;
- (CDStruct_2ec95fd7)mediatedAdStatus;
- (id)serverBiddingTokenWithParams:(id)arg1 error:(id *)arg2;
- (_Bool)showAdFromRootViewController:(id)arg1 parameter:(id)arg2;
- (void)loadFullscreenVideoAdWithSlotID:(id)arg1 andParameter:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <BUMCustomFullscreenVideoAdapterBridge> bridge;
@property(retain, nonatomic) id <BUMCustomConfigAdapter> configAdapter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCustomAdapter;
@property(readonly) Class superclass;

@end

