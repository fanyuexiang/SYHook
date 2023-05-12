//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTShapeGestureVector, NSMutableArray;

@interface GDTShapeGestureSet : NSObject
{
    _Bool _isStandardized;
    GDTShapeGestureVector *_vector;
    NSMutableArray *_pointArray;
}

+ (id)gestureSet;
+ (id)gestureSetWithPoints:(id)arg1;
@property(retain, nonatomic) NSMutableArray *pointArray; // @synthesize pointArray=_pointArray;
@property(retain, nonatomic) GDTShapeGestureVector *vector; // @synthesize vector=_vector;
@property(readonly, nonatomic) _Bool isStandardized; // @synthesize isStandardized=_isStandardized;
- (void).cxx_destruct;
- (id)getVector;
- (id)GDTfunctiony9H3CR;
- (void)setPoint:(id)arg1 atIndex:(long long)arg2;
- (id)pointAtIndex:(long long)arg1;
- (long long)GDTfunctionj1OouN;
- (void)GDTfunctionb3fPo8;
- (void)GDTfunctiona01KK3:(id)arg1;
- (id)init;

@end
