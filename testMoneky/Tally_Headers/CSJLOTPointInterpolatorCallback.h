//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJLOTPointValueDelegate-Protocol.h"

@class NSString;

@interface CSJLOTPointInterpolatorCallback : NSObject <CSJLOTPointValueDelegate>
{
    double _currentProgress;
    struct CGPoint _fromPoint;
    struct CGPoint _toPoint;
}

+ (id)withFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) struct CGPoint toPoint; // @synthesize toPoint=_toPoint;
@property(nonatomic) struct CGPoint fromPoint; // @synthesize fromPoint=_fromPoint;
- (struct CGPoint)pointForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startPoint:(struct CGPoint)arg5 endPoint:(struct CGPoint)arg6 currentPoint:(struct CGPoint)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

