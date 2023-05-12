//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUPersistenceProtocol-Protocol.h"

@class BUDiskCache, BUPersistenceOption, NSString;

@interface BUPersistence : NSObject <BUPersistenceProtocol>
{
    NSString *_name;
    BUDiskCache *_diskCache;
    BUPersistenceOption *_option;
}

+ (id)sdkVersion;
+ (void)setSDKVersion:(id)arg1;
+ (id)cacheDirectory;
+ (id)persistenceWithName:(id)arg1 option:(id)arg2;
+ (id)commonPersistence;
+ (id)persistenceWithName:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) BUPersistenceOption *option; // @synthesize option=_option;
@property(retain, nonatomic) BUDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)_pbu_internal_save;
- (_Bool)_pbu_internal_removeObjectsForKeys:(id)arg1;
- (_Bool)_pbu_internal_removeAll;
- (void)_appDidReceiveMemoryWarningNotification;
- (_Bool)_pbu_internal_hasObjectForKey:(id)arg1;
- (void)_pbu_internal_updateObjectsForKeys:(id)arg1 WithBlock:(CDUnknownBlockType)arg2;
- (_Bool)_pbu_internal_setObject:(id)arg1 forKey:(id)arg2;
- (id)_pbu_internal_allObjects;
- (id)_pbu_internal_objectsForKeys:(id)arg1;
- (id)_pbu_internal_objectForKey:(id)arg1;
- (void)allObjectsWithSafeBlock:(CDUnknownBlockType)arg1;
- (_Bool)save;
- (_Bool)removeObjectsForKeys:(id)arg1;
- (_Bool)removeAll;
- (_Bool)hasObjectForKey:(id)arg1;
- (void)updateObjectsForKeys:(id)arg1 WithBlock:(CDUnknownBlockType)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)allObjects;
- (id)objectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

