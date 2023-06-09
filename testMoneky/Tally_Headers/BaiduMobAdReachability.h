//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo;

@interface BaiduMobAdReachability : NSObject
{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
    _Bool _isQueryingWiFiStatus;
    int _globalRetVal;
    CTTelephonyNetworkInfo *_info;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isQueryingWiFiStatus; // @synthesize isQueryingWiFiStatus=_isQueryingWiFiStatus;
@property(nonatomic) int globalRetVal; // @synthesize globalRetVal=_globalRetVal;
@property(retain, nonatomic) CTTelephonyNetworkInfo *info; // @synthesize info=_info;
- (int)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end

