//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BU_IESGurdCacheCleanerManagerDelegate-Protocol.h"

@class NSString;

@interface BU_IESGurdCleanCacheManager : NSObject <BU_IESGurdCacheCleanerManagerDelegate>
{
}

+ (void)cleanCacheForAccessKey:(id)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)cleanCacheForAccessKey:(id)arg1 channel:(id)arg2;
+ (void)cleanCache;
+ (id)sharedManager;
- (void)cacheCleanerManager:(id)arg1 cleanCacheForAccessKey:(id)arg2 channelsToBeCleaned:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

