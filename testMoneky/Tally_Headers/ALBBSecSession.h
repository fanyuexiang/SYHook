//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ALBBSecSession : NSObject
{
    NSMutableDictionary *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSLock *_readSessionLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *readSessionLock; // @synthesize readSessionLock=_readSessionLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) NSMutableDictionary *session; // @synthesize session=_session;
- (_Bool)canAutoLogin;
- (_Bool)isSidInvalid;
- (_Bool)isValidLogin;
- (id)getLoginTimeKey;
- (id)getDeviceTokenArrayName;
- (id)getDeviceTokenKeyName;
- (id)getAppKeyName;
- (id)getserverDomainListKey;
- (id)getserverCookieListKey;
- (id)getRefreshTokenExpireKey;
- (id)getRefreshTokenKey;
- (id)getSidExpiredKey;
- (id)getSidKey;
- (id)getHidKey;
- (id)getserverDomainList;
- (id)getserverCookieList;
- (id)getHid;
- (id)getSidExpired;
- (id)getSid;
- (_Bool)isRefreshTokenExpired;
- (id)getRefreshToken;
- (void)markInvalidLogin;
- (void)clearSession;
- (void)storeSessionWithLoginResult:(id)arg1;
- (id)currentSession;
- (id)init;

@end

