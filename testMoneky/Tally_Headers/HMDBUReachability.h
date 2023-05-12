//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDBUReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    int _hasCachedStatus;
    long long _cachedStatus;
    long long _cacheTime;
    _Bool _startedNotifier;
    NSString *_hostName;
    NSString *_hostAddress;
}

+ (long long)fastDetectActiveIfAddrsStatus;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (void)radioAccessTechnologyDidChange:(id)arg1;
+ (void)serviceRadioAccessTechnologyDidChange:(id)arg1;
+ (void)initialize;
+ (id)currentAvailableCellularProviders;
+ (id)currentAvailableCellularServices;
+ (id)currentRadioAccessTechnologyForDataService;
+ (id)currentRadioAccessTechnologyForService:(long long)arg1;
+ (id)currentCellularProviderForService:(long long)arg1;
+ (id)currentCellularProviderForDataService;
+ (int)currentCellularConnectionForDataService;
+ (int)currentCellularConnectionForService:(long long)arg1;
+ (_Bool)is4GConnectedForService:(long long)arg1;
+ (_Bool)is3GConnectedForService:(long long)arg1;
+ (_Bool)is2GConnectedForService:(long long)arg1;
+ (_Bool)is4GConnected;
+ (_Bool)is3GConnected;
+ (_Bool)is2GConnected;
+ (_Bool)isNetworkConnected;
+ (id)internetConnectionNotifyRunLoopMode;
+ (void)setInternetConnectionNotifyRunLoopMode:(id)arg1;
+ (id)internetConnectionNotifyRunLoop;
+ (void)setInternetConnectionNotifyRunLoop:(id)arg1;
+ (CDUnknownBlockType)statusCacheConfigBlock;
+ (void)setStatusCacheConfigBlock:(CDUnknownBlockType)arg1;
+ (id)currentPrioritizedRadioAccessTechnologies;
+ (id)currentPrioritizedCellularProviders;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (_Bool)shouldUpdateNetworkStatus;
- (_Bool)shouldUpdateCachedStatus:(long long)arg1;
- (void)setCachedStatus:(long long)arg1;
- (void)invalidateCachedStatus;
- (long long)currentNetworkAuthorizationStatus;
- (long long)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;
@property(readonly, nonatomic, getter=isInternetConnection) _Bool internetConnection;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;

@end

