//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TallyLedgerEntranceSettingDataSource, TallyLedgerEntranceSettingViewManager, UITableView;

@interface TallyLedgerEntranceSettingController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _fromTallyLedgerEntrance;
    TallyLedgerEntranceSettingDataSource *_dataSource;
    TallyLedgerEntranceSettingViewManager *_viewManager;
    UITableView *_listTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *listTable; // @synthesize listTable=_listTable;
@property(nonatomic) _Bool fromTallyLedgerEntrance; // @synthesize fromTallyLedgerEntrance=_fromTallyLedgerEntrance;
@property(retain, nonatomic) TallyLedgerEntranceSettingViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) TallyLedgerEntranceSettingDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)tallyLedgerEntranceSwitchClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)backAction;
- (void)resetNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

