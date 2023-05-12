//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTNativeExpressAdImpDelegate-Protocol.h"

@class GDTLoadAdParams, NSString;
@protocol GDTNativeExpressAdDelegete, GDTNativeExpressAdImpProtocol;

@interface GDTNativeExpressAd : NSObject <GDTNativeExpressAdImpDelegate>
{
    _Bool _videoAutoPlayOnWWAN;
    _Bool _videoMuted;
    _Bool _detailPageVideoMuted;
    id <GDTNativeExpressAdDelegete> _delegate;
    NSString *_placementId;
    id <GDTNativeExpressAdImpProtocol> _mediator;
}

@property(retain, nonatomic) id <GDTNativeExpressAdImpProtocol> mediator; // @synthesize mediator=_mediator;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(nonatomic) _Bool detailPageVideoMuted; // @synthesize detailPageVideoMuted=_detailPageVideoMuted;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(nonatomic) _Bool videoAutoPlayOnWWAN; // @synthesize videoAutoPlayOnWWAN=_videoAutoPlayOnWWAN;
@property(nonatomic) __weak id <GDTNativeExpressAdDelegete> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)GDTfunctionp00uap:(id)arg1;
- (void)GDTfunctionl88N4F:(id)arg1;
- (void)GDTfunctionp91mCA:(id)arg1;
- (void)GDTfunctionb4fDts:(id)arg1;
- (void)GDTfunctiond7nfbe:(id)arg1;
- (void)GDTfunctionx53CJS:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)GDTfunctiong8a987:(id)arg1;
- (void)GDTfunctionn2lOJv:(id)arg1;
- (void)GDTfunctionn70u2u:(id)arg1;
- (void)GDTfunctionn8sNaC:(id)arg1;
- (void)GDTfunctiond6x62y:(id)arg1;
- (void)GDTfunctionm5ab8r:(id)arg1;
- (void)GDTfunctionn8dNAG:(id)arg1;
- (void)GDTfunctionu0Onii:(id)arg1;
- (void)GDTfunctiono0Bpjo:(id)arg1;
- (void)GDTfunctionh7YFV4:(id)arg1;
- (void)GDTfunctionp87Zkt:(id)arg1 error:(id)arg2;
- (void)GDTfunctionb3Ifq3:(id)arg1 views:(id)arg2;
- (void)setBidECPM:(long long)arg1;
- (void)sendLossNotificationWithInfo:(id)arg1;
- (void)sendWinNotificationWithInfo:(id)arg1;
- (id)adNetworkName;
@property(nonatomic) long long minVideoDuration;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
@property(nonatomic) long long maxVideoDuration;
- (void)loadAd:(long long)arg1;
- (id)initWithPlacementId:(id)arg1 token:(id)arg2 adSize:(struct CGSize)arg3;
- (id)initWithPlacementId:(id)arg1 adSize:(struct CGSize)arg2;
- (id)initWithPlacementId:(id)arg1 s2sToken:(id)arg2 isFromS2S:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
