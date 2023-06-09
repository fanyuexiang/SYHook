//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CSJDynamicAnimationModel : NSObject
{
    NSDictionary *_originDictionary;
    NSString *_animationType;
    double _animationBorderWidth;
    double _animationEffectWidth;
    double _animationDuration;
    double _animationScaleX;
    double _animationScaleY;
    double _animationTranslateX;
    double _animationTranslateY;
    NSString *_animationRippleBackgroundColor;
    NSString *_animationTimeFunction;
    double _animationDelay;
    long long _animationIterationCount;
    NSString *_animationDirection;
    double _animationInterval;
    double _animationSwing;
    double _animationFadeStart;
    double _animationFadeEnd;
    NSString *_animationScaleDirection;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *animationScaleDirection; // @synthesize animationScaleDirection=_animationScaleDirection;
@property(nonatomic) double animationFadeEnd; // @synthesize animationFadeEnd=_animationFadeEnd;
@property(nonatomic) double animationFadeStart; // @synthesize animationFadeStart=_animationFadeStart;
@property(nonatomic) double animationSwing; // @synthesize animationSwing=_animationSwing;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
@property(copy, nonatomic) NSString *animationDirection; // @synthesize animationDirection=_animationDirection;
@property(nonatomic) long long animationIterationCount; // @synthesize animationIterationCount=_animationIterationCount;
@property(nonatomic) double animationDelay; // @synthesize animationDelay=_animationDelay;
@property(copy, nonatomic) NSString *animationTimeFunction; // @synthesize animationTimeFunction=_animationTimeFunction;
@property(copy, nonatomic) NSString *animationRippleBackgroundColor; // @synthesize animationRippleBackgroundColor=_animationRippleBackgroundColor;
@property(nonatomic) double animationTranslateY; // @synthesize animationTranslateY=_animationTranslateY;
@property(nonatomic) double animationTranslateX; // @synthesize animationTranslateX=_animationTranslateX;
@property(nonatomic) double animationScaleY; // @synthesize animationScaleY=_animationScaleY;
@property(nonatomic) double animationScaleX; // @synthesize animationScaleX=_animationScaleX;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double animationEffectWidth; // @synthesize animationEffectWidth=_animationEffectWidth;
@property(nonatomic) double animationBorderWidth; // @synthesize animationBorderWidth=_animationBorderWidth;
@property(copy, nonatomic) NSString *animationType; // @synthesize animationType=_animationType;
@property(copy, nonatomic) NSDictionary *originDictionary; // @synthesize originDictionary=_originDictionary;
- (id)dictionaryValue;
- (id)timingFunction;
- (long long)dynamicAnimationScaleDirection;
- (long long)dynamicAnimationDirection;
- (long long)dynamicAnimationType;
- (id)initWithDictionary:(id)arg1;

@end

