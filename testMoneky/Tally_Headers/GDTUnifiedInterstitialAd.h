//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdProtocol-Protocol.h"
#import "GDTUnifiedInterstitialAdImpDelegate-Protocol.h"

@class GDTLoadAdParams, GDTServerSideVerificationOptions, NSString;
@protocol GDTUnifiedInterstitialAdDelegate, GDTUnifiedInterstitialAdImpProtocol;

@interface GDTUnifiedInterstitialAd : NSObject <GDTUnifiedInterstitialAdImpDelegate, GDTAdProtocol>
{
    _Bool _isFromS2S;
    id <GDTUnifiedInterstitialAdDelegate> _delegate;
    NSString *_placementId;
    id <GDTUnifiedInterstitialAdImpProtocol> _mediator;
    NSString *_s2sToken;
}

@property(nonatomic) _Bool isFromS2S; // @synthesize isFromS2S=_isFromS2S;
@property(copy, nonatomic) NSString *s2sToken; // @synthesize s2sToken=_s2sToken;
@property(retain, nonatomic) id <GDTUnifiedInterstitialAdImpProtocol> mediator; // @synthesize mediator=_mediator;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(nonatomic) __weak id <GDTUnifiedInterstitialAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)GDTfunctionq3M1mn:(id)arg1;
- (void)GDTfunctiona8cE0Y:(id)arg1 info:(id)arg2;
- (void)GDTfunctione4cgK5:(id)arg1;
- (void)GDTfunctions7S3o5:(id)arg1;
- (void)GDTfunctioni3J2f7:(id)arg1;
- (void)GDTfunctionn2V1Y2:(id)arg1;
- (void)GDTfunctionw1C3K1:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)GDTfunctionz9iGKO:(id)arg1;
- (void)GDTfunctione4AMWH:(id)arg1;
- (void)GDTfunctionf5lGRG:(id)arg1;
- (void)GDTfunctione9AiAR:(id)arg1;
- (void)GDTfunctionh63Vqk:(id)arg1;
- (void)GDTfunctionm3u4DF:(id)arg1;
- (void)GDTfunctionu5ljDp:(id)arg1;
- (void)GDTfunctionu0ofax:(id)arg1;
- (void)GDTfunctionl32PQY:(id)arg1 error:(id)arg2;
- (void)GDTfunctiona9drfD:(id)arg1;
- (void)GDTfunctionh6uY7M:(id)arg1;
- (void)GDTfunctionx2oKYo:(id)arg1 error:(id)arg2;
- (void)GDTfunctionj9AelP:(id)arg1;
- (void)GDTfunctiond4z2ZL:(id)arg1;
- (void)GDTfunctionc7VGoP:(id)arg1 error:(id)arg2;
- (void)GDTfunctiony78pca:(id)arg1;
- (void)setBidECPM:(long long)arg1;
- (void)sendLossNotificationWithInfo:(id)arg1;
- (void)sendWinNotificationWithInfo:(id)arg1;
@property(retain, nonatomic) GDTServerSideVerificationOptions *serverSideVerificationOptions;
@property(nonatomic) _Bool detailPageVideoMuted;
@property(nonatomic) long long minVideoDuration;
@property(nonatomic) long long maxVideoDuration;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
@property(nonatomic) _Bool videoMuted;
@property(nonatomic) _Bool videoAutoPlayOnWWAN;
@property(readonly, nonatomic) _Bool isVideoAd;
- (double)videoPlayTime;
- (double)videoDuration;
- (id)adNetworkName;
- (id)eCPMLevel;
- (long long)eCPM;
@property(readonly, nonatomic) _Bool isAdValid;
- (id)extraInfo;
- (void)presentFullScreenAdFromRootViewController:(id)arg1;
- (void)presentAdFromRootViewController:(id)arg1;
- (void)loadFullScreenAd;
- (void)loadAd;
- (void)GDTfunctionz0xuhX:(id)arg1;
- (void)GDTfunctionk8koSb;
- (id)initWithPlacementId:(id)arg1 token:(id)arg2;
- (id)initWithPlacementId:(id)arg1;
- (id)initWithPlacementId:(id)arg1 s2sToken:(id)arg2 isFromS2S:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

