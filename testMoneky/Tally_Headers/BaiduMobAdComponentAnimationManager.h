//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdComponentAnimationModel, BaiduMobAdComponentBaseAnimation, BaiduMobAdComponentModelingAnimation, UIView;

@interface BaiduMobAdComponentAnimationManager : NSObject
{
    BaiduMobAdComponentAnimationModel *_model;
    BaiduMobAdComponentModelingAnimation *_modelingAnimation;
    BaiduMobAdComponentBaseAnimation *_baseAnimation;
    UIView *_animationView;
    UIView *_superview;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *superview; // @synthesize superview=_superview;
@property(nonatomic) __weak UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) BaiduMobAdComponentBaseAnimation *baseAnimation; // @synthesize baseAnimation=_baseAnimation;
@property(retain, nonatomic) BaiduMobAdComponentModelingAnimation *modelingAnimation; // @synthesize modelingAnimation=_modelingAnimation;
@property(retain, nonatomic) BaiduMobAdComponentAnimationModel *model; // @synthesize model=_model;
- (void)removeAnimation;
- (void)addModelingAnimation;
- (void)addExitAnimation;
- (void)addEnterAnimationCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimationGroup;
- (void)startAnimationCompletion:(CDUnknownBlockType)arg1;
- (void)startAnimation;
- (id)initWithModel:(id)arg1 animationView:(id)arg2 superView:(id)arg3;

@end

