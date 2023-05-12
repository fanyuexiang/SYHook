//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTCustomBezierTimingFunction, NSArray;

@interface GDTAnimation : NSObject
{
    _Bool _repeat;
    _Bool _autoreverse;
    _Bool _isRepeating;
    _Bool _currentTimeInRepeatDelayTimePhase;
    long long _animationID;
    double _duration;
    double _delay;
    double _repeatDelay;
    CDUnknownBlockType _easingFunction;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
    long long _maxRepeatCnt;
    long long _currentRepeatCnt;
    NSArray *_params;
    double _startTime;
    double _repeatStartTime;
    double _currentProgress;
    double _lastTimePhase;
    double _lastProgress;
    GDTCustomBezierTimingFunction *_customBezierTimingFunction;
}

+ (long long)getNextAnimationID;
@property(retain, nonatomic) GDTCustomBezierTimingFunction *customBezierTimingFunction; // @synthesize customBezierTimingFunction=_customBezierTimingFunction;
@property(nonatomic) double lastProgress; // @synthesize lastProgress=_lastProgress;
@property(nonatomic) double lastTimePhase; // @synthesize lastTimePhase=_lastTimePhase;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) _Bool currentTimeInRepeatDelayTimePhase; // @synthesize currentTimeInRepeatDelayTimePhase=_currentTimeInRepeatDelayTimePhase;
@property(nonatomic) double repeatStartTime; // @synthesize repeatStartTime=_repeatStartTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSArray *params; // @synthesize params=_params;
@property(nonatomic) _Bool isRepeating; // @synthesize isRepeating=_isRepeating;
@property(nonatomic) long long currentRepeatCnt; // @synthesize currentRepeatCnt=_currentRepeatCnt;
@property(nonatomic) long long maxRepeatCnt; // @synthesize maxRepeatCnt=_maxRepeatCnt;
@property(nonatomic) _Bool autoreverse; // @synthesize autoreverse=_autoreverse;
@property(nonatomic) _Bool repeat; // @synthesize repeat=_repeat;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(copy, nonatomic) CDUnknownBlockType easingFunction; // @synthesize easingFunction=_easingFunction;
@property(nonatomic) double repeatDelay; // @synthesize repeatDelay=_repeatDelay;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long animationID; // @synthesize animationID=_animationID;
- (void).cxx_destruct;
- (void)complete:(_Bool)arg1;
- (double)handleEasing:(double)arg1;
- (void)callbackAnimations:(double)arg1;
- (double)calculateProgress:(double)arg1;
- (_Bool)animationPlayEnded;
- (void)forceAnimationPlayLastFrame;
- (void)tick;
- (double)getThreeOrderBezierProcess:(double)arg1;
- (double)getCustomBezierProcess:(double)arg1;
- (double)getSineProcess:(double)arg1;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) double percentComplete;
- (double)remainingDelay;
- (void)applyOptions:(unsigned long long)arg1;
- (id)init;

@end

