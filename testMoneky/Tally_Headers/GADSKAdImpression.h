//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface GADSKAdImpression : NSObject
{
    NSString *_signature;
    NSString *_version;
    NSString *_adNetworkIdentifier;
    NSNumber *_adCampaignIdentifier;
    NSNumber *_advertisedAppStoreItemIdentifier;
    NSString *_adImpressionIdentifier;
    NSNumber *_sourceAppStoreItemIdentifier;
    NSNumber *_timestamp;
    NSString *_adType;
    NSString *_adDescription;
    NSString *_adPurchaserName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adPurchaserName; // @synthesize adPurchaserName=_adPurchaserName;
@property(retain, nonatomic) NSString *adDescription; // @synthesize adDescription=_adDescription;
@property(retain, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *sourceAppStoreItemIdentifier; // @synthesize sourceAppStoreItemIdentifier=_sourceAppStoreItemIdentifier;
@property(retain, nonatomic) NSString *adImpressionIdentifier; // @synthesize adImpressionIdentifier=_adImpressionIdentifier;
@property(retain, nonatomic) NSNumber *advertisedAppStoreItemIdentifier; // @synthesize advertisedAppStoreItemIdentifier=_advertisedAppStoreItemIdentifier;
@property(retain, nonatomic) NSNumber *adCampaignIdentifier; // @synthesize adCampaignIdentifier=_adCampaignIdentifier;
@property(retain, nonatomic) NSString *adNetworkIdentifier; // @synthesize adNetworkIdentifier=_adNetworkIdentifier;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;

@end

