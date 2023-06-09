//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdReachability;

@interface BaiduMobCpuInfoManager : NSObject
{
    BaiduMobAdReachability *_reachabilityManager;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) BaiduMobAdReachability *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
- (void)stopUserLocationService;
- (void)startUserLocationService;
- (id)getMd5_32Bit_String:(id)arg1;
- (id)generateCUIDString;
- (id)getCUIDWithService:(id)arg1;
- (void)saveCUIDString:(id)arg1 CUIDService:(id)arg2;
- (id)getKeyChainQuery:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)registApplicationNotification;
- (void)setCookieWithVariableParams;
- (void)setCookieWithContantParams;
- (void)setCookie:(id)arg1 andValue:(id)arg2;
- (id)getCpuInfoUrlWithBlockId:(id)arg1 appId:(id)arg2;
- (id)getCpuInfoUrlWithChannelId:(id)arg1 appId:(id)arg2;
- (id)init;
- (void)dealloc;

@end

