//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TallyLedgerBudgetModel, TallyLedgerBudgetRowView, UILabel;

@interface TallyLedgerMonthBudgetView : UIView
{
    UILabel *_monthLab;
    TallyLedgerBudgetRowView *_budgetView;
    TallyLedgerBudgetModel *_monthBudgetModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TallyLedgerBudgetModel *monthBudgetModel; // @synthesize monthBudgetModel=_monthBudgetModel;
- (void)dealloc;
- (void)reloadData;
- (void)tallyACMonthDayChangedNotification:(id)arg1;
- (void)updateMonthBudget;
- (void)queryExpend;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

