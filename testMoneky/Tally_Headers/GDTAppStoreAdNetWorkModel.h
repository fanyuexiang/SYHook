//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GDTAppStoreAdNetWorkModel : NSObject
{
    NSString *_campaignId;
    NSString *_timestamp;
    NSString *_adNetworkId;
    NSString *_nonce;
    NSString *_sourceAppId;
    NSString *_version;
    NSString *_sig;
    NSString *_exposureSignature;
    NSString *_advertiserAppId;
}

+ (_Bool)supportAdNetwork;
@property(copy, nonatomic) NSString *advertiserAppId; // @synthesize advertiserAppId=_advertiserAppId;
@property(copy, nonatomic) NSString *exposureSignature; // @synthesize exposureSignature=_exposureSignature;
@property(copy, nonatomic) NSString *sig; // @synthesize sig=_sig;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *sourceAppId; // @synthesize sourceAppId=_sourceAppId;
@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
- (void).cxx_destruct;
- (id)GDTfunctioni4qVXi;
- (id)GDTfunctionm4UE6W;
- (id)initWithDictionary:(id)arg1;

@end

