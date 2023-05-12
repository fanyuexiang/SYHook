//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface BUPlayableSafeArray : NSMutableArray
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableArray *_array;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
- (void)dealloc;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectEnumerator;
- (_Bool)containsObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (id)initCommon;

@end
