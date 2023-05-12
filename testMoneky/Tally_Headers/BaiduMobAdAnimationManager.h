//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"

@class CABasicAnimation, CAGradientLayer, NSArray, NSMutableArray, NSString;

@interface BaiduMobAdAnimationManager : NSObject <CAAnimationDelegate>
{
    _Bool _endAnimation;
    NSArray *_colors;
    NSMutableArray *_startColors;
    NSMutableArray *_endColors;
    double _colorGradientAnimationDuration;
    CAGradientLayer *_gradient;
    double _progress;
    CABasicAnimation *_animation;
}

+ (void)addLinearSpringAnimation:(id)arg1 durationTime:(double)arg2 repeats:(_Bool)arg3 linearAnimationDuration:(double)arg4 linearDelay:(double)arg5 linearScaleSize:(struct CGSize)arg6 springAnimationDuration:(double)arg7 springDelay:(double)arg8 springWithDamping:(double)arg9 springVelocity:(double)arg10 springScaleSize:(struct CGSize)arg11;
+ (void)addScanLightAnimation:(id)arg1 gradientStartPoint:(struct CGPoint)arg2 gradientEndPoint:(struct CGPoint)arg3 duration:(double)arg4 repeatCount:(double)arg5;
+ (id)addColorGradientAnimation:(id)arg1 frame:(struct CGRect)arg2 gradientColors:(id)arg3 gradientStartPoint:(struct CGPoint)arg4 gradientEndPoint:(struct CGPoint)arg5 duration:(double)arg6;
- (void).cxx_destruct;
@property(nonatomic) _Bool endAnimation; // @synthesize endAnimation=_endAnimation;
@property(retain, nonatomic) CABasicAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) double colorGradientAnimationDuration; // @synthesize colorGradientAnimationDuration=_colorGradientAnimationDuration;
@property(retain, nonatomic) NSMutableArray *endColors; // @synthesize endColors=_endColors;
@property(retain, nonatomic) NSMutableArray *startColors; // @synthesize startColors=_startColors;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void)destoryAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startColorAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

