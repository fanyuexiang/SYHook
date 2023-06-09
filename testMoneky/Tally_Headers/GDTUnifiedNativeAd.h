//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTLoadAdParams;
@protocol GDTUnifiedNativeAdDelegate, GDTUnifiedNativeAdImpProtocol;

@interface GDTUnifiedNativeAd : NSObject
{
    id <GDTUnifiedNativeAdImpProtocol> _mediator;
}

@property(retain, nonatomic) id <GDTUnifiedNativeAdImpProtocol> mediator; // @synthesize mediator=_mediator;
- (void).cxx_destruct;
- (void)setBidECPM:(long long)arg1;
- (void)sendLossNotificationWithInfo:(id)arg1;
- (void)sendWinNotificationWithInfo:(id)arg1;
- (void)GDTfunctionb8eaf1:(id)arg1;
- (void)setVastClassName:(id)arg1;
- (id)adNetworkName;
@property(nonatomic) long long minVideoDuration;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
@property(nonatomic) long long maxVideoDuration;
@property(nonatomic) unsigned long long videoRenderType;
@property(nonatomic) unsigned long long videoPlayPolicy;
- (void)loadAdWithAdCount:(long long)arg1;
- (void)loadAd;
@property(nonatomic) __weak id <GDTUnifiedNativeAdDelegate> delegate;
- (id)initWithPlacementId:(id)arg1 token:(id)arg2;
- (id)initWithPlacementId:(id)arg1;
- (id)initWithPlacementId:(id)arg1 s2sToken:(id)arg2 isFromS2S:(_Bool)arg3;

@end

