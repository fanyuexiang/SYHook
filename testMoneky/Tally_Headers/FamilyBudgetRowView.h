//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PieChartView, UILabel;

@interface FamilyBudgetRowView : UIView
{
    PieChartView *_pieView;
    UILabel *_leftSurplusLabel;
    UILabel *_leftAllBudgetLabel;
    UILabel *_leftExpendLabel;
    UILabel *_leftBalanceLabel;
    UILabel *_surplusLabel;
    UILabel *_allBudgetLabel;
    UILabel *_expendLabel;
    UILabel *_balanceLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UILabel *expendLabel; // @synthesize expendLabel=_expendLabel;
@property(retain, nonatomic) UILabel *allBudgetLabel; // @synthesize allBudgetLabel=_allBudgetLabel;
@property(retain, nonatomic) UILabel *surplusLabel; // @synthesize surplusLabel=_surplusLabel;
@property(retain, nonatomic) UILabel *leftBalanceLabel; // @synthesize leftBalanceLabel=_leftBalanceLabel;
@property(retain, nonatomic) UILabel *leftExpendLabel; // @synthesize leftExpendLabel=_leftExpendLabel;
@property(retain, nonatomic) UILabel *leftAllBudgetLabel; // @synthesize leftAllBudgetLabel=_leftAllBudgetLabel;
@property(retain, nonatomic) UILabel *leftSurplusLabel; // @synthesize leftSurplusLabel=_leftSurplusLabel;
@property(retain, nonatomic) PieChartView *pieView; // @synthesize pieView=_pieView;
- (void)updateBudgetInfo:(id)arg1;
- (void)setupContentWithRadius:(double)arg1 borderWidth:(double)arg2 rightTextArray:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 radius:(double)arg2 borderWidth:(double)arg3 rightTextArray:(id)arg4;

@end
