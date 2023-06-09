//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TBSDKRequestDelegate-Protocol.h"

@class NSMutableDictionary, NSString, TBSDKAccountInfo, TBSDKConfiguration;
@protocol FilterManagerProtocol, LoginProtocol, MtopAuthProtocol;

@interface MtopService : NSObject <TBSDKRequestDelegate>
{
    _Bool _available;
    NSMutableDictionary *_pendingRequests;
    TBSDKConfiguration *_configure;
    TBSDKAccountInfo *_accountInfo;
    id <MtopAuthProtocol> _authModule;
    id <LoginProtocol> _loginModule;
    id <FilterManagerProtocol> _filterModule;
}

+ (id)getInstanceWithID:(id)arg1;
+ (id)getInstanceWithType:(unsigned long long)arg1;
+ (id)shareInstance;
+ (id)getInstance;
+ (void)initialize;
@property(retain, nonatomic) id <FilterManagerProtocol> filterModule; // @synthesize filterModule=_filterModule;
@property(retain, nonatomic) id <LoginProtocol> loginModule; // @synthesize loginModule=_loginModule;
@property(retain, nonatomic) id <MtopAuthProtocol> authModule; // @synthesize authModule=_authModule;
@property(retain, nonatomic) TBSDKAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(retain, nonatomic) TBSDKConfiguration *configure; // @synthesize configure=_configure;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void).cxx_destruct;
- (void)removeExtParameter:(id)arg1;
- (void)addExtParameter:(id)arg1 forKey:(id)arg2;
- (void)removHttpHeader:(id)arg1;
- (void)addHttpHeader:(id)arg1 forKey:(id)arg2;
- (void)addCustomHttpHeader:(id)arg1 forKey:(id)arg2;
- (long long)getDpEnvironment:(unsigned long long)arg1;
- (void)requestSecurityToken:(id)arg1;
- (void)request:(id)arg1 didLoadCacheResponseHeader:(id)arg2 body:(id)arg3;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)failed:(id)arg1 response:(id)arg2;
- (void)succeed:(id)arg1 response:(id)arg2;
- (void)started:(id)arg1;
- (id)after:(id)arg1;
- (id)before:(id)arg1 startFilter:(id)arg2;
- (id)removeRequest:(id)arg1;
- (id)getRequest:(id)arg1;
- (void)pendingRequest:(id)arg1;
- (id)getResponse:(id)arg1 mrequest:(id)arg2;
- (id)sync_call:(id)arg1 apiVersion:(id)arg2 bizParameters:(id)arg3;
- (id)sync_call:(id)arg1 apiVersion:(id)arg2;
- (void)async_call:(id)arg1 delegate:(id)arg2 startFilter:(id)arg3;
- (void)async_call:(id)arg1 delegate:(id)arg2;
- (void)async_call:(id)arg1;
- (id)sync_call:(id)arg1;
- (id)currentAccount;
- (void)installCustomAuthModule:(id)arg1;
- (void)installCustomLoginModule:(id)arg1;
- (void)dealloc;
- (void)onClearCacheNotification;
- (void)initDemoteModule;
- (unsigned long long)type;
- (id)ID;
- (id)configuration;
- (void)loadFilterModule:(unsigned long long)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

