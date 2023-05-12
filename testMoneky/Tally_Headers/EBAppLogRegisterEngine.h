//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface EBAppLogRegisterEngine : NSObject
{
    _Bool _needRegister;
    _Bool _hasObserveNetworkChange;
    _Bool _isRegistering;
    _Bool _needActiveUser;
    NSString *_deviceID;
    NSString *_installID;
    NSString *_ssID;
    CDUnknownBlockType _registerFinishBlock;
    NSObject<OS_dispatch_queue> *_registerQueue;
    unsigned long long _bgTask;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool needActiveUser; // @synthesize needActiveUser=_needActiveUser;
@property _Bool isRegistering; // @synthesize isRegistering=_isRegistering;
@property _Bool hasObserveNetworkChange; // @synthesize hasObserveNetworkChange=_hasObserveNetworkChange;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *registerQueue; // @synthesize registerQueue=_registerQueue;
@property(copy) CDUnknownBlockType registerFinishBlock; // @synthesize registerFinishBlock=_registerFinishBlock;
@property(nonatomic) _Bool needRegister; // @synthesize needRegister=_needRegister;
@property(copy) NSString *ssID; // @synthesize ssID=_ssID;
@property(copy) NSString *installID; // @synthesize installID=_installID;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)addActivateTask;
- (void)saveAllID;
- (void)loadAllID;
- (id)ssIDKey;
- (id)installIDKey;
- (id)deviceIDKey;
- (_Bool)hasRegistered;
- (void)invalidBgTaskIfNeeded;
- (void)connectionChanged:(id)arg1;
- (_Bool)addNetworkObserver;
- (void)handleRegisterResponse:(id)arg1 maxRetryTimes:(long long)arg2;
- (void)registerDeviceInternal:(long long)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground;
- (void)registerDeviceWithRetryTimes:(long long)arg1;
- (id)init;
- (void)dealloc;

@end
