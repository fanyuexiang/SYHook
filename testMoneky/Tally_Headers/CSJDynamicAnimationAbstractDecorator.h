//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDynamicAbstractDecorator.h"

@class CSJDynamicAnimationModel;

@interface CSJDynamicAnimationAbstractDecorator : CSJDynamicAbstractDecorator
{
    CSJDynamicAnimationModel *_animationModel;
}

+ (id)animationDecoratorWithAnimationModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CSJDynamicAnimationModel *animationModel; // @synthesize animationModel=_animationModel;
- (id)dynamicAnimationLayer;
- (id)dynamicAnimation;
- (void)render;
- (long long)animationStyle;

@end
