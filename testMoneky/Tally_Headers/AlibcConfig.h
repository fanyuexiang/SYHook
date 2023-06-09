//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AlibcConfig : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isNeedUpdateSDK;
    _Bool _isAllowLinkTaobao;
    unsigned long long _sdkState;
    NSString *_errorMsg;
    long long _environment;
    unsigned long long _logLevel;
    NSString *_utdId;
    NSString *_appKey;
    NSString *_appVersion;
    NSString *_appName;
    NSMutableDictionary *_store;
}

+ (id)sharedConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *store; // @synthesize store=_store;
@property(retain) NSString *appName; // @synthesize appName=_appName;
@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain) NSString *utdId; // @synthesize utdId=_utdId;
@property unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property long long environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool isAllowLinkTaobao; // @synthesize isAllowLinkTaobao=_isAllowLinkTaobao;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) _Bool isNeedUpdateSDK; // @synthesize isNeedUpdateSDK=_isNeedUpdateSDK;
@property(nonatomic) unsigned long long sdkState; // @synthesize sdkState=_sdkState;
- (id)valueForKey:(id)arg1 forModule:(id)arg2;
- (void)setDictionary:(id)arg1 forModule:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 forModule:(id)arg3;
- (id)init;

@end

