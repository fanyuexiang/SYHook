//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FamilyBudgetModel, FamilyBudgetYearRowView, NSString, UILabel;

@interface FamilyYearBudgetView : UIView
{
    UILabel *_monthLab;
    FamilyBudgetYearRowView *_budgetView;
    FamilyBudgetModel *_budgetModel;
    NSString *_yearAmount;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *yearAmount; // @synthesize yearAmount=_yearAmount;
@property(retain, nonatomic) FamilyBudgetModel *budgetModel; // @synthesize budgetModel=_budgetModel;
- (void)dealloc;
- (void)clearData;
- (void)reloadData;
- (void)updateMonthBudget;
- (void)queryExpend;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

