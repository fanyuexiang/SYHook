//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JXCategoryIndicatorProtocol-Protocol.h"

@class NSString, UIColor;

@interface JXCategoryIndicatorComponentView : UIView <JXCategoryIndicatorProtocol>
{
    _Bool _scrollEnabled;
    unsigned long long _componentPosition;
    double _indicatorWidth;
    double _indicatorWidthIncrement;
    double _indicatorHeight;
    double _indicatorCornerRadius;
    UIColor *_indicatorColor;
    double _verticalMargin;
    unsigned long long _scrollStyle;
    double _scrollAnimationDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double scrollAnimationDuration; // @synthesize scrollAnimationDuration=_scrollAnimationDuration;
@property(nonatomic) unsigned long long scrollStyle; // @synthesize scrollStyle=_scrollStyle;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(nonatomic) double indicatorCornerRadius; // @synthesize indicatorCornerRadius=_indicatorCornerRadius;
@property(nonatomic) double indicatorHeight; // @synthesize indicatorHeight=_indicatorHeight;
@property(nonatomic) double indicatorWidthIncrement; // @synthesize indicatorWidthIncrement=_indicatorWidthIncrement;
@property(nonatomic) double indicatorWidth; // @synthesize indicatorWidth=_indicatorWidth;
@property(nonatomic) unsigned long long componentPosition; // @synthesize componentPosition=_componentPosition;
- (void)jx_selectedCell:(id)arg1;
- (void)jx_contentScrollViewDidScroll:(id)arg1;
- (void)jx_refreshState:(id)arg1;
- (double)indicatorCornerRadiusValue:(struct CGRect)arg1;
- (double)indicatorHeightValue:(struct CGRect)arg1;
- (double)indicatorWidthValue:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
