//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDynamicAbstractView.h"

@class BUTimer, NSArray;

@interface CSJDynamicCarouselView : CSJDynamicAbstractView
{
    NSArray *_carouselSubviews;
    NSArray *_positionsArray;
    BUTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSArray *positionsArray; // @synthesize positionsArray=_positionsArray;
@property(copy, nonatomic) NSArray *carouselSubviews; // @synthesize carouselSubviews=_carouselSubviews;
- (void)updateSubviewsPosition;
- (void)startAnimation;
- (void)applySubviewsToCarouselSubviews;
- (void)timerEvent;
- (void)render;
- (id)initWithGlobalModel:(id)arg1 layoutDictionary:(id)arg2 parentView:(id)arg3 error:(id *)arg4;
- (void)dealloc;

@end

