//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSNumber, NSString, TallyLabelListDataSource, UISegmentedControl, UITableView, UIView;

@interface TallyLabelListController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    _Bool _needJudgeVIP;
    _Bool _isTallyLedger;
    TallyLabelListDataSource *_dataSource;
    NSNumber *_bookID;
    long long _tallyType;
    NSMutableArray *_incomesType;
    NSMutableArray *_expendsType;
    UIView *_topView;
    UISegmentedControl *_segmentControl;
    UITableView *_listTable;
    NSMutableArray *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UITableView *listTable; // @synthesize listTable=_listTable;
@property(retain, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSMutableArray *expendsType; // @synthesize expendsType=_expendsType;
@property(retain, nonatomic) NSMutableArray *incomesType; // @synthesize incomesType=_incomesType;
@property(nonatomic) long long tallyType; // @synthesize tallyType=_tallyType;
@property(retain, nonatomic) NSNumber *bookID; // @synthesize bookID=_bookID;
@property(nonatomic) _Bool isTallyLedger; // @synthesize isTallyLedger=_isTallyLedger;
@property(nonatomic) _Bool needJudgeVIP; // @synthesize needJudgeVIP=_needJudgeVIP;
@property(retain, nonatomic) TallyLabelListDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)settingAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)reloadData;
- (void)tallyLabelChangedNotification:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshTypeArray;
- (void)tallyTypeChange:(id)arg1;
- (void)backAction;
- (void)resetNavigationBar;
- (void)loadDataWithBookID:(id)arg1 tallyType:(long long)arg2 incomesType:(id)arg3 expendsType:(id)arg4;
- (void)goLabelRecommendSet;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

