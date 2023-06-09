//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdImpProtocol-Protocol.h"
#import "GDTAdImpS2SProtocol-Protocol.h"
#import "GDTNativeExpressAdDelegete-Protocol.h"
#import "GDTNativeExpressAdImpProtocol-Protocol.h"

@class GDTAdBaseModel, GDTAdParams, GDTLoadAdParams, GDTNativeExpressAd, NSDictionary, NSPointerArray, NSString;
@protocol GDTNativeExpressAdImpDelegate;

@interface GDTNativeExpressAdImp : NSObject <GDTNativeExpressAdDelegete, GDTNativeExpressAdImpProtocol, GDTAdImpProtocol, GDTAdImpS2SProtocol>
{
    _Bool videoAutoPlayOnWWAN;
    _Bool videoMuted;
    _Bool detailPageVideoMuted;
    _Bool isFromS2S;
    _Bool _disableServerMediation;
    _Bool _C2SHasInvokeWinOrLoss;
    _Bool _C2SLimitInvokeTimeEnable;
    id <GDTNativeExpressAdImpDelegate> delegate;
    GDTNativeExpressAd *nativeExpressAd;
    NSString *adNetworkName;
    long long minVideoDuration;
    long long maxVideoDuration;
    NSString *fixedVideoDuration;
    unsigned long long videoRenderType;
    NSDictionary *mediationExtDict;
    GDTLoadAdParams *_loadAdParams;
    NSString *s2sToken;
    GDTAdParams *_adParams;
    NSString *_placementId;
    NSString *_threadId;
    long long _serverType;
    double _requestBeginTime;
    double _requestEndTime;
    double _showBeginTime;
    GDTAdBaseModel *_adModelForEvent;
    NSPointerArray *_adViews;
    struct CGSize adSize;
}

@property(nonatomic) _Bool C2SLimitInvokeTimeEnable; // @synthesize C2SLimitInvokeTimeEnable=_C2SLimitInvokeTimeEnable;
@property(nonatomic) _Bool C2SHasInvokeWinOrLoss; // @synthesize C2SHasInvokeWinOrLoss=_C2SHasInvokeWinOrLoss;
@property(retain, nonatomic) NSPointerArray *adViews; // @synthesize adViews=_adViews;
@property(retain, nonatomic) GDTAdBaseModel *adModelForEvent; // @synthesize adModelForEvent=_adModelForEvent;
@property(nonatomic) double showBeginTime; // @synthesize showBeginTime=_showBeginTime;
@property(nonatomic) double requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(nonatomic) double requestBeginTime; // @synthesize requestBeginTime=_requestBeginTime;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(retain, nonatomic) GDTAdParams *adParams; // @synthesize adParams=_adParams;
@property(nonatomic) _Bool disableServerMediation; // @synthesize disableServerMediation=_disableServerMediation;
@property(nonatomic) _Bool isFromS2S; // @synthesize isFromS2S;
@property(copy, nonatomic) NSString *s2sToken; // @synthesize s2sToken;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams=_loadAdParams;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize;
@property(nonatomic) unsigned long long videoRenderType; // @synthesize videoRenderType;
@property(copy, nonatomic) NSString *fixedVideoDuration; // @synthesize fixedVideoDuration;
@property(nonatomic) long long maxVideoDuration; // @synthesize maxVideoDuration;
@property(nonatomic) long long minVideoDuration; // @synthesize minVideoDuration;
@property(nonatomic) _Bool detailPageVideoMuted; // @synthesize detailPageVideoMuted;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted;
@property(nonatomic) _Bool videoAutoPlayOnWWAN; // @synthesize videoAutoPlayOnWWAN;
@property(copy, nonatomic) NSString *adNetworkName; // @synthesize adNetworkName;
@property(nonatomic) __weak GDTNativeExpressAd *nativeExpressAd; // @synthesize nativeExpressAd;
@property(nonatomic) __weak id <GDTNativeExpressAdImpDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)gdtAdComplainSuccess:(id)arg1;
- (void)nativeExpressAdViewDidDismissVideoVC:(id)arg1;
- (void)nativeExpressAdViewWillDismissVideoVC:(id)arg1;
- (void)nativeExpressAdViewDidPresentVideoVC:(id)arg1;
- (void)nativeExpressAdViewWillPresentVideoVC:(id)arg1;
- (void)nativeExpressAdView:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)nativeExpressAdViewApplicationWillEnterBackground:(id)arg1;
- (void)nativeExpressAdViewDidDismissScreen:(id)arg1;
- (void)nativeExpressAdViewWillDismissScreen:(id)arg1;
- (void)nativeExpressAdViewDidPresentScreen:(id)arg1;
- (void)nativeExpressAdViewWillPresentScreen:(id)arg1;
- (void)nativeExpressAdViewClosed:(id)arg1;
- (void)nativeExpressAdViewClicked:(id)arg1;
- (void)nativeExpressAdViewExposure:(id)arg1;
- (void)nativeExpressAdViewRenderFail:(id)arg1;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)setBidECPM:(long long)arg1;
- (void)sendLossNotificationWithInfo:(id)arg1;
- (void)sendWinNotificationWithInfo:(id)arg1;
- (void)GDTfunctiona0tgtU:(long long)arg1;
- (void)GDTfunctionn3aild:(unsigned long long)arg1 detailErrorCode:(unsigned long long)arg2;
- (void)GDTfunctionn3aild:(unsigned long long)arg1;
- (_Bool)GDTfunctionb1sW6o;
- (void)loadAdWithAdCount:(long long)arg1;
- (void)loadAd;
- (id)initWithPlacementId:(id)arg1 serverType:(long long)arg2;
- (id)initWithPlacementId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

