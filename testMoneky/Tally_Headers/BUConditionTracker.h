//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface BUConditionTracker : NSObject
{
    CDUnknownBlockType _condition;
    CDUnknownBlockType _action;
    long long _retryCount;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(copy, nonatomic) CDUnknownBlockType condition; // @synthesize condition=_condition;
- (void)_invokeTrack;
- (void)stop;
- (void)start;
- (id)initWithConditon:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2 retryCount:(long long)arg3;

@end
