//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class AdjustButton, ChartTableView, ChartView, DateManager, FCXSegmentView, NSString, TallyTypeChooseView, UIButton, UILabel, UISegmentedControl, UIView;

@interface ChartViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _isNeedTallyChartTypeSetting;
    AdjustButton *_titleBtn;
    UIButton *_rightBtn;
    UIView *_topView;
    UISegmentedControl *_segmentControl;
    DateManager *_dateManager;
    FCXSegmentView *_segmentView;
    ChartTableView *_tableView;
    ChartView *_chartView;
    UIView *_pieheaderline;
    UILabel *_typeLabel;
    _Bool _fromMediator;
    double _tabBarHeight;
    _Bool _chartDetail;
    _Bool _isPie;
    NSString *_typeID;
    long long _tallyType;
    long long _dateType;
    NSString *_date;
    NSString *_currentDate;
    double _typeSumAmount;
    NSString *_previousDate;
    TallyTypeChooseView *_typeChooseView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TallyTypeChooseView *typeChooseView; // @synthesize typeChooseView=_typeChooseView;
@property(copy, nonatomic) NSString *previousDate; // @synthesize previousDate=_previousDate;
@property(nonatomic) _Bool isPie; // @synthesize isPie=_isPie;
@property(nonatomic) double typeSumAmount; // @synthesize typeSumAmount=_typeSumAmount;
@property(copy, nonatomic) NSString *currentDate; // @synthesize currentDate=_currentDate;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(nonatomic) long long dateType; // @synthesize dateType=_dateType;
@property(nonatomic) long long tallyType; // @synthesize tallyType=_tallyType;
@property(copy, nonatomic) NSString *typeID; // @synthesize typeID=_typeID;
@property(nonatomic, getter=isChartDetail) _Bool chartDetail; // @synthesize chartDetail=_chartDetail;
@property(nonatomic) _Bool isNeedTallyChartTypeSetting; // @synthesize isNeedTallyChartTypeSetting=_isNeedTallyChartTypeSetting;
- (void)destroyNotification;
- (void)tallyACMonthDayChangedNotification:(id)arg1;
- (void)responseNotification:(id)arg1;
- (void)registerNotification;
- (void)refreshWithTheme;
- (void)adjustSegmentControlSelectIndex:(long long)arg1;
- (void)adjustTallyType:(long long)arg1;
- (void)addChartIncomeShortcuts;
- (void)typeChooseAction;
- (void)dateTypeChange:(id)arg1;
- (void)updateTallyTypeLabel;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshVipStatus;
- (void)viewDidLoad;
- (void)goChartAction:(id)arg1;
- (void)parseParameters:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

