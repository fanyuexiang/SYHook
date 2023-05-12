//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableString, NSString;

@interface UMSocialBaseEntity : NSObject
{
    NSString *_type;
    NSString *_entityKey;
    NSString *_uid;
    NSString *_appkey;
    NSMutableDictionary *_baseDic;
    NSString *_cuid;
    NSString *_wid;
    NSString *_sdkVersion;
    NSMutableString *_baseString;
    NSMutableString *_baseURLEncodeString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableString *baseURLEncodeString; // @synthesize baseURLEncodeString=_baseURLEncodeString;
@property(copy, nonatomic) NSMutableString *baseString; // @synthesize baseString=_baseString;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *wid; // @synthesize wid=_wid;
@property(copy, nonatomic) NSString *cuid; // @synthesize cuid=_cuid;
@property(retain, nonatomic) NSMutableDictionary *baseDic; // @synthesize baseDic=_baseDic;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *entityKey; // @synthesize entityKey=_entityKey;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)toDictionary;
- (id)toURLEncodeString;
- (id)toString;
- (id)init;
- (void)UMSocial_Init;

@end
