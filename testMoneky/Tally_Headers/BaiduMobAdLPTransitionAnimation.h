//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface BaiduMobAdLPTransitionAnimation : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _isPresentAnimation;
    _Bool _isCancel;
    _Bool _isFinish;
    id <UIViewControllerContextTransitioning> _transitionContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property _Bool isFinish; // @synthesize isFinish=_isFinish;
@property _Bool isCancel; // @synthesize isCancel=_isCancel;
@property _Bool isPresentAnimation; // @synthesize isPresentAnimation=_isPresentAnimation;
- (void)cancel;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

