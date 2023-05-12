//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WPKAFNetworkReachabilityManager : NSObject
{
    long long _networkReachabilityStatus;
    struct __SCNetworkReachability *_networkReachability;
    CDUnknownBlockType _networkReachabilityStatusBlock;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)manager;
+ (id)managerForAddress:(const void *)arg1;
+ (id)managerForDomain:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType networkReachabilityStatusBlock; // @synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock;
@property(readonly, nonatomic) struct __SCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(nonatomic) long long networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
- (void)setReachabilityStatusChangeBlock:(CDUnknownBlockType)arg1;
- (id)localizedNetworkReachabilityStatusString;
- (void)stopMonitoring;
- (void)startMonitoring;
@property(readonly, nonatomic, getter=isReachableViaWiFi) _Bool reachableViaWiFi;
@property(readonly, nonatomic, getter=isReachableViaWWAN) _Bool reachableViaWWAN;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
- (void)dealloc;
- (id)init;
- (id)initWithReachability:(struct __SCNetworkReachability *)arg1;

@end

