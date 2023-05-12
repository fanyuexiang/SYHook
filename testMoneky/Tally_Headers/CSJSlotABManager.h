//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol BUPersistenceProtocol;

@interface CSJSlotABManager : NSObject
{
    id <BUPersistenceProtocol> _persistence;
    NSDictionary *_extraDic;
}

+ (void)removeAllCache;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) NSDictionary *extraDic; // @synthesize extraDic=_extraDic;
@property(retain, nonatomic) id <BUPersistenceProtocol> persistence; // @synthesize persistence=_persistence;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)dynamicSlotABExtraWithID:(id)arg1;
- (void)cacheExtraWithModel:(id)arg1;
- (id)getCacheModel:(long long)arg1;
- (void)fetchSlotWithCodeGroupId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

