//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdAnimatorNode.h"

@class BaiduMobAdNumberInterpolator, BaiduMobAdPointInterpolator;

@interface BaiduMobAdPolystarAnimator : BaiduMobAdAnimatorNode
{
    BaiduMobAdNumberInterpolator *_outerRadiusInterpolator;
    BaiduMobAdNumberInterpolator *_innerRadiusInterpolator;
    BaiduMobAdNumberInterpolator *_outerRoundnessInterpolator;
    BaiduMobAdNumberInterpolator *_innerRoundnessInterpolator;
    BaiduMobAdPointInterpolator *_positionInterpolator;
    BaiduMobAdNumberInterpolator *_pointsInterpolator;
    BaiduMobAdNumberInterpolator *_rotationInterpolator;
}

- (void).cxx_destruct;
- (void)performLocalUpdate;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg1 shapeStar:(id)arg2;

@end

