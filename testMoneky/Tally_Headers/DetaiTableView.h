//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DetailTopView, NSExpressionDescription, NSFetchRequest, NSFetchedResultsController, NSMutableArray, NSString, TallyDetailRefreshFooterView, UIImageView, UIViewController;
@protocol UIScrollViewDelegate;

@interface DetaiTableView : UITableView <UITableViewDelegate, UITableViewDataSource, NSFetchedResultsControllerDelegate, UIScrollViewDelegate>
{
    NSMutableArray *_headerArray;
    NSMutableArray *_amountArray;
    NSFetchRequest *_fetchRequest;
    NSExpressionDescription *_expressionDescription;
    UIImageView *_imageView;
    _Bool _isAnimation;
    _Bool _canEdit;
    NSString *_cellReuserID;
    TallyDetailRefreshFooterView *_footerRefreshView;
    _Bool _canQuickEdit;
    long long _dataSectionType;
    NSFetchedResultsController *_fetchedResultsController;
    NSString *_date;
    NSString *_maxDate;
    NSString *_minDate;
    DetailTopView *_topView;
    UIViewController *_presentController;
    double _remarkContentOffsetY;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    long long _dateLength;
    double _noDataHeight;
    CDUnknownBlockType _dateChangedBlock;
    NSString *_currentDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentDate; // @synthesize currentDate=_currentDate;
@property(copy, nonatomic) CDUnknownBlockType dateChangedBlock; // @synthesize dateChangedBlock=_dateChangedBlock;
@property(nonatomic) _Bool canQuickEdit; // @synthesize canQuickEdit=_canQuickEdit;
@property(nonatomic) double noDataHeight; // @synthesize noDataHeight=_noDataHeight;
@property(nonatomic) long long dateLength; // @synthesize dateLength=_dateLength;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) double remarkContentOffsetY; // @synthesize remarkContentOffsetY=_remarkContentOffsetY;
@property(nonatomic) __weak UIViewController *presentController; // @synthesize presentController=_presentController;
@property(nonatomic) __weak DetailTopView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) NSString *minDate; // @synthesize minDate=_minDate;
@property(copy, nonatomic) NSString *maxDate; // @synthesize maxDate=_maxDate;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(nonatomic) long long dataSectionType; // @synthesize dataSectionType=_dataSectionType;
- (void)recalculateDateWithMax_Min;
- (void)iCloudUpdataAmount;
- (void)updateAmount;
- (id)numberHandler;
- (id)numberFormatter;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)datePredicate;
- (void)tallyDateChange:(id)arg1;
- (id)controller;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)deleteAction:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)contentImageView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tallytypeChanged:(id)arg1;
- (void)showAnimation:(double)arg1;
- (void)tallyACMonthDayChangedNotification:(id)arg1;
- (void)tallyDataAddNotification:(id)arg1;
- (void)tallyDataRefresh;
- (void)userInfoDidChange;
- (void)tallyDataSync;
- (void)tallyDataDeleteNotification;
- (void)queryDateRefreshMaxDate:(_Bool)arg1;
- (id)min_maxData:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 topView:(id)arg3 dataSectionType:(long long)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

