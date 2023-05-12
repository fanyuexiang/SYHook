//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTMBaseAdMediator.h"

#import "GDTUnifiedNativeAdImpProtocol-Protocol.h"
#import "GDTUnifiedNativeAdNetworkConnectorProtocol-Protocol.h"

@class GDTLoadAdParams, GDTUnifiedNativeAd, NSDictionary, NSMutableDictionary, NSString;
@protocol GDTUnifiedNativeAdDelegate;

@interface GDTUnifiedNativeAdMediator : GDTMBaseAdMediator <GDTUnifiedNativeAdImpProtocol, GDTUnifiedNativeAdNetworkConnectorProtocol>
{
    id <GDTUnifiedNativeAdDelegate> delegate;
    GDTUnifiedNativeAd *unifiedNativeAd;
    NSString *adNetworkName;
    unsigned long long videoPlayPolicy;
    unsigned long long videoRenderType;
    long long maxVideoDuration;
    long long minVideoDuration;
    NSString *vastClassName;
    GDTLoadAdParams *loadAdParams;
    NSDictionary *mediationExtDict;
    NSMutableDictionary *_adapterMapDataObjectsDict;
    long long _adCount;
}

@property(nonatomic) long long adCount; // @synthesize adCount=_adCount;
@property(retain, nonatomic) NSMutableDictionary *adapterMapDataObjectsDict; // @synthesize adapterMapDataObjectsDict=_adapterMapDataObjectsDict;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams;
@property(copy, nonatomic) NSString *vastClassName; // @synthesize vastClassName;
@property(nonatomic) long long minVideoDuration; // @synthesize minVideoDuration;
@property(nonatomic) long long maxVideoDuration; // @synthesize maxVideoDuration;
@property(nonatomic) unsigned long long videoRenderType; // @synthesize videoRenderType;
@property(nonatomic) unsigned long long videoPlayPolicy; // @synthesize videoPlayPolicy;
@property(copy, nonatomic) NSString *adNetworkName; // @synthesize adNetworkName;
@property(nonatomic) __weak GDTUnifiedNativeAd *unifiedNativeAd; // @synthesize unifiedNativeAd;
@property(nonatomic) __weak id <GDTUnifiedNativeAdDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)GDTfunctionu2Kn1h:(id)arg1;
- (void)adapter:(id)arg1 unifiedNativeAdLoaded:(id)arg2 error:(id)arg3;
- (void)GDTfunctionx9fM3l:(id)arg1;
- (id)GDTfunctionu2Jx2u;
- (void)GDTfunctiony15T9q;
- (void)GDTfunctiont02pdN;
- (void)GDTfunctione9eJQi;
- (void)adapterLoadAd:(id)arg1;
- (void)loadAd;
- (void)loadAdWithAdCount:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
