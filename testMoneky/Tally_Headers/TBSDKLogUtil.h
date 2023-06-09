//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TBSDKLogUtil : NSObject
{
    _Bool _loging;
    NSObject<OS_dispatch_queue> *_logingQueue;
    id _tlog;
}

+ (id)currentClassName:(const char *)arg1;
+ (id)currentThreadName;
+ (void)error:(id)arg1 message:(id)arg2;
+ (void)warn:(id)arg1 message:(id)arg2;
+ (void)info:(id)arg1 message:(id)arg2;
+ (void)debug:(id)arg1 message:(id)arg2;
+ (void)log:(int)arg1 file:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
+ (id)sharedInstance;
@property(nonatomic) _Bool loging; // @synthesize loging=_loging;
@property(retain, nonatomic) id tlog; // @synthesize tlog=_tlog;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logingQueue; // @synthesize logingQueue=_logingQueue;
- (void).cxx_destruct;
- (id)init;

@end

