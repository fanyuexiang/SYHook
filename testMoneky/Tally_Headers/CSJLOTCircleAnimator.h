//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJLOTAnimatorNode.h"

@class CSJLOTPointInterpolator;

@interface CSJLOTCircleAnimator : CSJLOTAnimatorNode
{
    CSJLOTPointInterpolator *_centerInterpolator;
    CSJLOTPointInterpolator *_sizeInterpolator;
    _Bool _reversed;
}

- (void).cxx_destruct;
- (void)performLocalUpdate;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg1 shapeCircle:(id)arg2;

@end

