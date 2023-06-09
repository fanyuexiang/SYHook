//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface CSJSKANStoreProductModel : NSObject <NSCoding>
{
    NSNumber *_itunce_item_id;
    NSString *_version;
    NSString *_ad_network_id;
    NSNumber *_campaign_id;
    NSNumber *_source_app_id;
    NSString *_nonce;
    NSNumber *_timestamp;
    NSString *_signature;
    NSDictionary *_originDic;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *originDic; // @synthesize originDic=_originDic;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSNumber *source_app_id; // @synthesize source_app_id=_source_app_id;
@property(retain, nonatomic) NSNumber *campaign_id; // @synthesize campaign_id=_campaign_id;
@property(copy, nonatomic) NSString *ad_network_id; // @synthesize ad_network_id=_ad_network_id;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSNumber *itunce_item_id; // @synthesize itunce_item_id=_itunce_item_id;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)skanInfoSearalizaitonValue;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

@end

