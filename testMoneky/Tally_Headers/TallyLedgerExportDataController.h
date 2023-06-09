//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TallyLedgerViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CBBillDatePicker, NSCalendar, NSDateFormatter, NSString, TallyLedgerInfo, UITableView, UITableViewCell, UITextField, UIView;

@interface TallyLedgerExportDataController : TallyLedgerViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITextField *_startTextField;
    UITextField *_endTextField;
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
    TallyLedgerInfo *_model;
    UITableViewCell *_startCell;
    UITableViewCell *_endCell;
    CBBillDatePicker *_datePicker;
    UITextField *_currentTextField;
    UITableView *_listTable;
    UIView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *listTable; // @synthesize listTable=_listTable;
@property(retain, nonatomic) UITextField *currentTextField; // @synthesize currentTextField=_currentTextField;
@property(retain, nonatomic) CBBillDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UITableViewCell *endCell; // @synthesize endCell=_endCell;
@property(retain, nonatomic) UITableViewCell *startCell; // @synthesize startCell=_startCell;
@property(retain, nonatomic) TallyLedgerInfo *model; // @synthesize model=_model;
- (void)dateAction:(id)arg1;
- (_Bool)dateIsCorrect;
- (void)exportAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

