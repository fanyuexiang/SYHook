//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdProtocol-Protocol.h"

@class GDTMNetworkConfigModel, GDTUnifiedNativeAdModel, GDTVideoConfig, NSArray, NSNumber, NSString;
@protocol GDTUnifiedNativeAdDataObjectAdapterProtocol><GDTMediaViewAdapterProtocol;

@interface GDTUnifiedNativeAdDataObject : NSObject <GDTAdProtocol>
{
    _Bool _isReported;
}

@property(nonatomic) _Bool isReported; // @synthesize isReported=_isReported;
- (id)extraInfo;
- (id)GDTfunctionn6bCDM:(int)arg1 height:(int)arg2 alpha:(int)arg3;
- (void)bindImageViews:(id)arg1 placeholder:(id)arg2;
@property(retain, nonatomic) GDTVideoConfig *videoConfig;
@property(readonly, nonatomic) _Bool isAdValid;
@property(readonly, nonatomic) _Bool isVastAd;
@property(readonly, copy, nonatomic) NSString *vastContent;
@property(readonly, copy, nonatomic) NSString *vastTagUrl;
@property(readonly, nonatomic) _Bool skippable;
@property(readonly, nonatomic) NSString *callToAction;
@property(readonly, nonatomic) NSString *buttonText;
@property(readonly, nonatomic) NSString *eCPMLevel;
@property(readonly, nonatomic) long long eCPM;
@property(readonly, nonatomic) long long imageHeight;
@property(readonly, nonatomic) long long imageWidth;
- (_Bool)equalsAdData:(id)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool isWechatCanvasAd;
@property(readonly, nonatomic) _Bool isThreeImgsAd;
@property(readonly, nonatomic) _Bool isVideoAd;
@property(readonly, nonatomic) _Bool isAppAd;
@property(readonly, nonatomic) NSNumber *appPrice;
@property(readonly, nonatomic) double appRating;
@property(readonly, copy, nonatomic) NSArray *mediaUrlList;
@property(readonly, copy, nonatomic) NSString *iconUrl;
@property(readonly, copy, nonatomic) NSString *imageUrl;
@property(readonly, copy, nonatomic) NSString *desc;
@property(readonly, copy, nonatomic) NSString *title;
- (id)model;
@property(nonatomic) _Bool isExposured;
@property(retain, nonatomic) GDTUnifiedNativeAdModel *adModel; // @dynamic adModel;
- (id)realMediationPrice;
- (_Bool)isContractAd;
- (_Bool)GDTfunctiony0mVDj;
@property(copy, nonatomic) NSString *traceId;
@property(retain, nonatomic) id <GDTUnifiedNativeAdDataObjectAdapterProtocol><GDTMediaViewAdapterProtocol> GDTfunctionc4yl7k;
@property(retain, nonatomic) GDTMNetworkConfigModel *networkConfigModel;
@property(nonatomic) _Bool hasReported;
@property(readonly, nonatomic) NSString *placementId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

