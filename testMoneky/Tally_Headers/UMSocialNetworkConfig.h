//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UMSocialNetworkConfig : NSObject
{
    NSString *_umSocialAppkey;
    NSString *_umSocialAppSecret;
    NSString *_sdkVersion;
    NSString *_deString;
    NSString *_macString;
    NSString *_osString;
    NSString *_openUdidString;
    NSString *_protocolVersionString;
    NSString *_type;
    NSString *_enString;
    NSString *_timeIntervalString;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *timeIntervalString; // @synthesize timeIntervalString=_timeIntervalString;
@property(copy, nonatomic) NSString *enString; // @synthesize enString=_enString;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *protocolVersionString; // @synthesize protocolVersionString=_protocolVersionString;
@property(copy, nonatomic) NSString *openUdidString; // @synthesize openUdidString=_openUdidString;
@property(copy, nonatomic) NSString *osString; // @synthesize osString=_osString;
@property(copy, nonatomic) NSString *macString; // @synthesize macString=_macString;
@property(copy, nonatomic) NSString *deString; // @synthesize deString=_deString;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSString *umSocialAppSecret; // @synthesize umSocialAppSecret=_umSocialAppSecret;
@property(retain, nonatomic) NSString *umSocialAppkey; // @synthesize umSocialAppkey=_umSocialAppkey;

@end

