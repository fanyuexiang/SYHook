//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface SDWebImageTransition : NSObject
{
    _Bool _avoidAutoSetImage;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    unsigned long long _animationOptions;
    CDUnknownBlockType _prepares;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
}

+ (id)curlDownTransitionWithDuration:(double)arg1;
+ (id)curlDownTransition;
+ (id)curlUpTransitionWithDuration:(double)arg1;
+ (id)curlUpTransition;
+ (id)flipFromBottomTransitionWithDuration:(double)arg1;
+ (id)flipFromBottomTransition;
+ (id)flipFromTopTransitionWithDuration:(double)arg1;
+ (id)flipFromTopTransition;
+ (id)flipFromRightTransitionWithDuration:(double)arg1;
+ (id)flipFromRightTransition;
+ (id)flipFromLeftTransitionWithDuration:(double)arg1;
+ (id)flipFromLeftTransition;
+ (id)fadeTransitionWithDuration:(double)arg1;
+ (id)fadeTransition;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(copy, nonatomic) CDUnknownBlockType prepares; // @synthesize prepares=_prepares;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool avoidAutoSetImage; // @synthesize avoidAutoSetImage=_avoidAutoSetImage;
- (id)init;

@end

