//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TallyLedgerViewController.h"

@class DetailTopView, MarqueeView, NSCalendar, NSDateFormatter, NSMutableDictionary, NSString, SAImagePickerManager, TallyLedgerDetailTableView, TallyLedgerDetailsHandleEvent, TallyLedgerDetailsHeaderView, TallyLedgerModel, TallyLedgerWidgetGuideTipView;

@interface TallyLedgerDetailsController : TallyLedgerViewController
{
    DetailTopView *_topView;
    NSDateFormatter *_dateFormatter;
    NSString *_monthBillYear;
    NSString *_monthBillMonth;
    NSCalendar *_calendar;
    SAImagePickerManager *_imagePicker;
    _Bool _isSyncData;
    MarqueeView *_marqueeView;
    NSMutableDictionary *_marqueeDict;
    NSMutableDictionary *_operationDict;
    TallyLedgerDetailsHeaderView *_headerView;
    TallyLedgerDetailsHandleEvent *_handleEvent;
    TallyLedgerModel *_imageTallyModel;
    long long _networkStatus;
    TallyLedgerDetailTableView *_tableView;
    TallyLedgerWidgetGuideTipView *_widgetGuideTipView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TallyLedgerWidgetGuideTipView *widgetGuideTipView; // @synthesize widgetGuideTipView=_widgetGuideTipView;
@property(retain, nonatomic) TallyLedgerDetailTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) TallyLedgerModel *imageTallyModel; // @synthesize imageTallyModel=_imageTallyModel;
@property(retain, nonatomic) TallyLedgerDetailsHandleEvent *handleEvent; // @synthesize handleEvent=_handleEvent;
@property(retain, nonatomic) TallyLedgerDetailsHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)responseNotification:(id)arg1;
- (void)userInfoDidChange;
- (void)themeChangedNotification:(id)arg1;
- (void)adjustMarqueeViewHidden:(_Bool)arg1;
- (void)marqueeRightButtonAction;
- (void)marqueeAction;
- (void)showMarqueeView:(id)arg1 contentWidth:(double)arg2;
- (void)refreshMarqueeView;
- (void)checkNetworkStatus:(id)arg1;
- (void)refreshDetailBarData;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateAccountInfo;
- (void)userAccountDidChange;
- (void)showWidgetGuideTip;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tallyEntranceAction;
- (id)imagePicker;
- (void)goImagePicker:(long long)arg1;
- (void)goChooseImage;
- (void)goTallyAddImage:(id)arg1;

@end
