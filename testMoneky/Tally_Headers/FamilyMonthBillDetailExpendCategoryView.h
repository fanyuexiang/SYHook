//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FamilyTallyDetailsPieChartView, NSMutableArray;

@interface FamilyMonthBillDetailExpendCategoryView : UIView
{
    UIView *_bottomView;
    FamilyTallyDetailsPieChartView *_conView;
    NSMutableArray *_expends;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *expends; // @synthesize expends=_expends;
@property(retain, nonatomic) FamilyTallyDetailsPieChartView *conView; // @synthesize conView=_conView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (void)reloadData;
- (void)loadDataWithExpend:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
