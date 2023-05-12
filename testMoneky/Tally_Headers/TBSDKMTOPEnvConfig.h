//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol TBSDKSignProtocol;

@interface TBSDKMTOPEnvConfig : NSObject
{
    _Bool _useSecurityGuard;
    _Bool _enableHttps;
    NSString *_authCode;
    NSString *_appkey;
    NSString *_appSecret;
    unsigned long long _appkeyIndex;
    NSString *_gatewayDomain;
    NSString *_appConfVersion;
    NSArray *_tradeUnitDomainList;
    NSArray *_needUpdateTradeUnitList;
    NSString *_uid;
    long long _environment;
    NSString *_instanceId;
    id <TBSDKSignProtocol> _signModule;
}

+ (id)urlEncodeString:(id)arg1;
+ (id)shareInstanceWithID:(id)arg1;
+ (id)shareInstance;
+ (long long)currentEnvironment;
+ (void)setEnvironment:(long long)arg1;
+ (void)initialize;
@property __weak id <TBSDKSignProtocol> signModule; // @synthesize signModule=_signModule;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) _Bool enableHttps; // @synthesize enableHttps=_enableHttps;
@property(retain) NSArray *needUpdateTradeUnitList; // @synthesize needUpdateTradeUnitList=_needUpdateTradeUnitList;
@property(retain) NSArray *tradeUnitDomainList; // @synthesize tradeUnitDomainList=_tradeUnitDomainList;
@property(copy) NSString *appConfVersion; // @synthesize appConfVersion=_appConfVersion;
@property(retain, nonatomic) NSString *gatewayDomain; // @synthesize gatewayDomain=_gatewayDomain;
@property(nonatomic) unsigned long long appkeyIndex; // @synthesize appkeyIndex=_appkeyIndex;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(nonatomic) _Bool useSecurityGuard; // @synthesize useSecurityGuard=_useSecurityGuard;
- (void).cxx_destruct;
- (id)signHandler;
- (void)setupSignHandler:(id)arg1;
- (id)readUtdid;
- (void)fetchTradeUnitListFromDisk;
@property(retain, nonatomic) NSString *customMtopRequestURL;
- (id)ID;
- (id)initWithID:(id)arg1;

@end
