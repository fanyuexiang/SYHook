//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDynamicInteractionAbstractDecorator.h"

@class CSJDynamicInteractionClickAnimationView, UITapGestureRecognizer;

@interface CSJDynamicInteractionClickButtonDecorator : CSJDynamicInteractionAbstractDecorator
{
    CSJDynamicInteractionClickAnimationView *_interactionClickAnimationView;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) CSJDynamicInteractionClickAnimationView *interactionClickAnimationView; // @synthesize interactionClickAnimationView=_interactionClickAnimationView;
- (void)interactionGestureAction:(id)arg1;
- (void)interactionViewDidShow;
- (void)hiddenInteractionAnimaiton;
- (void)showInteractionAnimation;
- (void)render;

@end

