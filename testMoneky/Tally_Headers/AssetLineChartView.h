//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AssetLinePopView, NSArray, NSMutableArray, UIButton, UILabel, UIScrollView;

@interface AssetLineChartView : UIView
{
    double _leftSpace;
    double _topSpace;
    double _bottomSpace;
    NSMutableArray *_percentArray;
    AssetLinePopView *_popView;
    long long _style;
    double _noDataY;
    UIButton *_dateBtn;
    UILabel *_assetLabel;
    NSArray *_dataArray;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UILabel *assetLabel; // @synthesize assetLabel=_assetLabel;
@property(retain, nonatomic) UIButton *dateBtn; // @synthesize dateBtn=_dateBtn;
- (void)showPopView:(double)arg1;
- (void)panGestureAction:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

