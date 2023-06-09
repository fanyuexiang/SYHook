//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GDTDLAnimationParam : NSObject
{
    long long _animationType;
    NSString *_animationGroup;
    NSArray *_animationParams;
    double _animationStartDelay;
    double _animationRepeatDelay;
    double _animationDuration;
    long long _animationRepeatCount;
    long long _animationRepeatDirection;
    double _animationTimeFunctionName;
    NSArray *_animationTimeFunctionParams;
}

@property(retain, nonatomic) NSArray *animationTimeFunctionParams; // @synthesize animationTimeFunctionParams=_animationTimeFunctionParams;
@property(nonatomic) double animationTimeFunctionName; // @synthesize animationTimeFunctionName=_animationTimeFunctionName;
@property(nonatomic) long long animationRepeatDirection; // @synthesize animationRepeatDirection=_animationRepeatDirection;
@property(nonatomic) long long animationRepeatCount; // @synthesize animationRepeatCount=_animationRepeatCount;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double animationRepeatDelay; // @synthesize animationRepeatDelay=_animationRepeatDelay;
@property(nonatomic) double animationStartDelay; // @synthesize animationStartDelay=_animationStartDelay;
@property(retain, nonatomic) NSArray *animationParams; // @synthesize animationParams=_animationParams;
@property(copy, nonatomic) NSString *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;
- (id)initLd6Y28E:(id)arg1;

@end

