//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView, UITableViewCell, YMDWeekDatePicker;

@interface ATEndDateController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UITableViewCell *_datePickerCell;
    long long _selectedRow;
    YMDWeekDatePicker *_datePicker;
    double _pickerHeight;
    NSString *_beginDate;
    NSString *_endDate;
    CDUnknownBlockType _saveDateHandle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType saveDateHandle; // @synthesize saveDateHandle=_saveDateHandle;
@property(copy, nonatomic) NSString *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSString *beginDate; // @synthesize beginDate=_beginDate;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setupListView;
- (void)setupDatePickerCell;
- (void)saveDateAction;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

