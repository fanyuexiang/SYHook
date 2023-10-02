//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUAdSDKManagerMediationProtocol-Protocol.h"
#import "BUAdSDKManager_MProtocol-Protocol.h"

@class NSString;

@interface GMAdSDKManager : NSObject <BUAdSDKManager_MProtocol, BUAdSDKManagerMediationProtocol>
{
}

+ (void)p_setupGMSDKWithAsyncCompletionHandler:(CDUnknownBlockType)arg1;
+ (double)getUserTouchOffSDKInitTime;
+ (id)userInfoForSegment;
+ (void)configAdapterWithKey:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
+ (void)preloadAdsWithInfos:(id)arg1 andInterval:(long long)arg2 andConcurrent:(long long)arg3;
+ (id)getMediationExtraInfo;
+ (_Bool)respondsToSelector:(SEL)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (Class)mediation;
+ (void)startWithAsyncCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)startWithSyncCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
+ (void)setAppID:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_addConfigurationObserver;
- (id)p_formatConvert:(id)arg1;
- (id)p_noWhiteSpaceString:(id)arg1;
- (id)p_pangleUserdataFormat:(id)arg1;
- (void)p_updatePangleExtData:(id)arg1;
- (void)p_setLimitPersonalAds:(id)arg1;
- (void)p_setTheme:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

