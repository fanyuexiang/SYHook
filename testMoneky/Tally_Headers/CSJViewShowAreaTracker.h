//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUTimer, NSMapTable;
@protocol OS_dispatch_semaphore;

@interface CSJViewShowAreaTracker : NSObject
{
    BUTimer *_timer;
    NSMapTable *_weakCache;
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMapTable *weakCache; // @synthesize weakCache=_weakCache;
@property(retain, nonatomic) BUTimer *timer; // @synthesize timer=_timer;
- (void)_fire;
- (void)_createTimer;
- (void)stopTrackWithView:(id)arg1;
- (void)trackWithView:(id)arg1 showAreaBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

