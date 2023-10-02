//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimer;

@interface UgenTimer : NSObject
{
    _Bool _isPaused;
    double _timeInterval;
    NSTimer *_timer;
    NSDate *_pauseDate;
    id _target;
    SEL _selector;
    NSString *_runLoopMode;
    double _leftTimeInterval;
    CDUnknownBlockType _block;
}

+ (id)ugenTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)ugenTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 repeats:(_Bool)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double leftTimeInterval; // @synthesize leftTimeInterval=_leftTimeInterval;
@property(copy, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (double)initialTimeInterval;
- (_Bool)resumeFromPauseTime;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)scheduleNow;
- (_Bool)isScheduled;
- (void)invalidate;
- (_Bool)isValid;
- (void)timerDidFire;
- (void)dealloc;

@end
