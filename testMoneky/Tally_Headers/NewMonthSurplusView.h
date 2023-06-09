//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CBAttributedLabel, NSString, NewMonthSurplusData, UILabel, UINavigationController;

@interface NewMonthSurplusView : UIView
{
    CBAttributedLabel *_dateLabel;
    CBAttributedLabel *_expenditureLabel;
    CBAttributedLabel *_incomeLabel;
    CBAttributedLabel *_surplusLabel;
    NSString *_date;
    UINavigationController *_navigationController;
    UILabel *_subtitleLab;
    NewMonthSurplusData *_dataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewMonthSurplusData *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UILabel *subtitleLab; // @synthesize subtitleLab=_subtitleLab;
@property(nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)queryMonthData;
- (void)tallyACMonthDayChangedNotification:(id)arg1;
- (void)tallyDataRefresh;
- (void)tallyDataChange:(id)arg1;
- (void)updateMoneyLabel:(id)arg1 text:(id)arg2;
- (void)updateDateLabel;
- (void)lookAllAction;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

