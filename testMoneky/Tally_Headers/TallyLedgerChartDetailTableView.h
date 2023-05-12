//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TallyLedgerChartTableView.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSMutableArray, NSNumber, NSString, UIView;

@interface TallyLedgerChartDetailTableView : TallyLedgerChartTableView <NSFetchedResultsControllerDelegate>
{
    double _maxAmount;
    _Bool _moreExpended;
    long long _tallyType;
    long long _dateType;
    NSString *_date;
    double _typeSumAmount;
    NSNumber *_cID;
    long long _sortType;
    NSFetchedResultsController *_fetchedResultsController;
    UIView *_sortView;
    NSString *_cName;
    NSString *_cIconName;
    NSMutableArray *_labels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(copy, nonatomic) NSString *cIconName; // @synthesize cIconName=_cIconName;
@property(copy, nonatomic) NSString *cName; // @synthesize cName=_cName;
@property(nonatomic) _Bool moreExpended; // @synthesize moreExpended=_moreExpended;
@property(nonatomic) __weak UIView *sortView; // @synthesize sortView=_sortView;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) NSNumber *cID; // @synthesize cID=_cID;
- (void)setTypeSumAmount:(double)arg1;
- (double)typeSumAmount;
- (id)date;
- (void)setDateType:(long long)arg1;
- (long long)dateType;
- (void)setTallyType:(long long)arg1;
- (long long)tallyType;
- (void)jumpTallyLabelSearchActionWithDateType:(long long)arg1 tallyType:(long long)arg2 label:(id)arg3;
- (id)currentDateTypeEndDateStringWithDateType:(long long)arg1;
- (id)currentDateTypeBeginDateStringWithDateType:(long long)arg1;
- (void)loadTallyLabelsData;
- (_Bool)hasLabelData;
- (_Bool)hasMoreData;
- (void)dealloc;
- (void)controllerDidChangeContent:(id)arg1;
- (void)tallyDataChange:(id)arg1;
- (void)getTypeData:(id)arg1;
- (void)bindTallyType:(long long)arg1 dateType:(long long)arg2 date:(id)arg3;
- (id)controller;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
