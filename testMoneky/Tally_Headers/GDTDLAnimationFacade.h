//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTDLAnimationFacade : NSObject
{
    struct CGAffineTransform _currentRotateTransform;
    struct CGAffineTransform _currentScaleTransform;
    struct CGAffineTransform _currentTranslateTransform;
}

+ (CDUnknownBlockType)getEasingFunction:(long long)arg1;
@property(nonatomic) struct CGAffineTransform currentTranslateTransform; // @synthesize currentTranslateTransform=_currentTranslateTransform;
@property(nonatomic) struct CGAffineTransform currentScaleTransform; // @synthesize currentScaleTransform=_currentScaleTransform;
@property(nonatomic) struct CGAffineTransform currentRotateTransform; // @synthesize currentRotateTransform=_currentRotateTransform;
- (id)GDTfunctionf5W0vU:(id)arg1 progress:(double)arg2;
- (void)GDTfunctionm54HvP:(id)arg1;
- (void)GDTfunctionk8Spus:(id)arg1;
- (CDUnknownBlockType)GDTfunctiont2hRsC:(id)arg1 targetView:(id)arg2 borderParams:(id)arg3;
- (void)stopAnimation:(long long)arg1;
- (long long)GDTfunctiont3pviX:(id)arg1 param:(id)arg2 viewBorderParams:(id)arg3;
- (id)init;

@end

