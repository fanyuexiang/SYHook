//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AlibcUTAdapter-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AlibcAplusAdapter : NSObject <AlibcUTAdapter>
{
    NSMutableDictionary *_globalPropertiesDictionary;
    struct _opaque_pthread_rwlock_t _globalPropertiesLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *globalPropertiesDictionary; // @synthesize globalPropertiesDictionary=_globalPropertiesDictionary;
@property(nonatomic) struct _opaque_pthread_rwlock_t globalPropertiesLock; // @synthesize globalPropertiesLock=_globalPropertiesLock;
- (unsigned long long)queryStringLengthForParams:(id)arg1;
- (void)h5UT:(id)arg1 view:(id)arg2 viewController:(id)arg3;
- (_Bool)isThird;
- (void)addTradeLog:(id)arg1 eventID:(id)arg2 page:(id)arg3 arg1:(id)arg4 arg2:(id)arg5 arg3:(id)arg6 args:(id)arg7;
- (id)globalPropertiesForTracker:(id)arg1;
- (id)globalPropertyForKey:(id)arg1 asTracker:(id)arg2;
- (void)setGlobalProperty:(id)arg1 forKey:(id)arg2 asTracker:(id)arg3;
- (void)setChannel:(id)arg1;
- (void)initWithAppkey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

