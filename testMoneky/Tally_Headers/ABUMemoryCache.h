//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUPersistenceProtocol-Protocol.h"

@class ABUPersistenceOption, NSMutableDictionary, NSString;

@interface ABUMemoryCache : NSObject <ABUPersistenceProtocol>
{
    NSMutableDictionary *_data;
    ABUPersistenceOption *_option;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABUPersistenceOption *option; // @synthesize option=_option;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (_Bool)save;
- (_Bool)removeObjectsForKeys:(id)arg1;
- (_Bool)removeAll;
- (void)updateObjectsForKeys:(id)arg1 WithBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasObjectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)allObjects;
- (id)objectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)appDidEnterBackgroundNotification;
- (void)appDidReceiveMemoryWarningNotification;
- (void)dealloc;
- (id)initWithOption:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

