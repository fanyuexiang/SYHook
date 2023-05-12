//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JXCategoryBaseView.h"

@class NSArray, UIColor;

@interface JXCategoryIndicatorView : JXCategoryBaseView
{
    _Bool _cellBackgroundColorGradientEnabled;
    _Bool _separatorLineShowEnabled;
    NSArray *_indicators;
    UIColor *_cellBackgroundUnselectedColor;
    UIColor *_cellBackgroundSelectedColor;
    UIColor *_separatorLineColor;
    struct CGSize _separatorLineSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize separatorLineSize; // @synthesize separatorLineSize=_separatorLineSize;
@property(retain, nonatomic) UIColor *separatorLineColor; // @synthesize separatorLineColor=_separatorLineColor;
@property(nonatomic, getter=isSeparatorLineShowEnabled) _Bool separatorLineShowEnabled; // @synthesize separatorLineShowEnabled=_separatorLineShowEnabled;
@property(retain, nonatomic) UIColor *cellBackgroundSelectedColor; // @synthesize cellBackgroundSelectedColor=_cellBackgroundSelectedColor;
@property(retain, nonatomic) UIColor *cellBackgroundUnselectedColor; // @synthesize cellBackgroundUnselectedColor=_cellBackgroundUnselectedColor;
@property(nonatomic, getter=isCellBackgroundColorGradientEnabled) _Bool cellBackgroundColorGradientEnabled; // @synthesize cellBackgroundColorGradientEnabled=_cellBackgroundColorGradientEnabled;
@property(retain, nonatomic) NSArray *indicators; // @synthesize indicators=_indicators;
- (_Bool)selectCellAtIndex:(long long)arg1 selectedType:(unsigned long long)arg2;
- (void)contentOffsetOfContentScrollViewDidChanged:(struct CGPoint)arg1;
- (void)refreshSelectedCellModel:(id)arg1 unselectedCellModel:(id)arg2;
- (void)refreshState;
- (void)initializeViews;
- (void)initializeData;
- (void)refreshLeftCellModel:(id)arg1 rightCellModel:(id)arg2 ratio:(double)arg3;

@end

