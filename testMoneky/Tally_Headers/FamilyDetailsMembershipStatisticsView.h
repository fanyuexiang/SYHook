//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FamilyTallyDetailsPieChartView, NSMutableArray, SKSortSwitchView, UILabel;

@interface FamilyDetailsMembershipStatisticsView : UIView
{
    CDUnknownBlockType _refreshLayoutBlock;
    CDUnknownBlockType _clickItemBlock;
    UIView *_headerView;
    UILabel *_titleLab;
    SKSortSwitchView *_switchView;
    UIView *_bottomView;
    UILabel *_noneDataLab;
    FamilyTallyDetailsPieChartView *_conView;
    long long _index;
    NSMutableArray *_incomes;
    NSMutableArray *_expends;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *expends; // @synthesize expends=_expends;
@property(retain, nonatomic) NSMutableArray *incomes; // @synthesize incomes=_incomes;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) FamilyTallyDetailsPieChartView *conView; // @synthesize conView=_conView;
@property(retain, nonatomic) UILabel *noneDataLab; // @synthesize noneDataLab=_noneDataLab;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) SKSortSwitchView *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType clickItemBlock; // @synthesize clickItemBlock=_clickItemBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshLayoutBlock; // @synthesize refreshLayoutBlock=_refreshLayoutBlock;
- (_Bool)currentShowIsIncome;
- (void)reloadData;
- (void)loadDataWithIncomes:(id)arg1 expends:(id)arg2;
- (void)loadDataWithResetExpendStyle;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

