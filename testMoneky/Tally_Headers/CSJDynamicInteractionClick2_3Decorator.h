//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDynamicInteractionAbstractDecorator.h"

@class CSJDynamicInteractionClick2_3View, CSJDynamicInteractionMaskView;

@interface CSJDynamicInteractionClick2_3Decorator : CSJDynamicInteractionAbstractDecorator
{
    CSJDynamicInteractionClick2_3View *_interactionClick2_3View;
    CSJDynamicInteractionMaskView *_maskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJDynamicInteractionMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CSJDynamicInteractionClick2_3View *interactionClick2_3View; // @synthesize interactionClick2_3View=_interactionClick2_3View;
- (void)interactionGestureAction:(id)arg1;
- (void)clickHiddenInteractionAnimaiton;
- (void)interactionViewDidShow;
- (void)hiddenInteractionAnimaiton;
- (void)showInteractionAnimation;
- (void)clickActionWithConverType:(long long)arg1;
- (void)render;

@end

