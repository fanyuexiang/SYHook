//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BudgetBaseController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AdjustButton, BudgetTypeChooseView, NSMutableArray, NSString, UIButton, UILabel, UITableView, UIView;

@interface BudgetHomeController : BudgetBaseController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_dataArray;
    UITableView *_tableView;
    UIView *_categorySectionHeaderView;
    UILabel *_categoryTitleLab;
    _Bool _needShowYearBudget;
    _Bool _requestFalse;
    long long _budgetType;
    NSString *_yearAmount;
    AdjustButton *_titleBtn;
    BudgetTypeChooseView *_typeChooseView;
    UIButton *_addBtn;
    UIView *_loadFailedView;
    UIView *_loadNoDataView;
    UIView *_loadNoCategoryView;
}

+ (void)newRequestBudgetListWithConfig:(CDUnknownBlockType)arg1;
+ (void)newRequestBudgetList:(CDUnknownBlockType)arg1;
+ (_Bool)hasYearAmount;
+ (_Bool)hasMonthAmount;
+ (_Bool)hasCacheFile;
+ (void)clearOldCacheData;
+ (void)mergeOldCacheDataToNewCache;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *loadNoCategoryView; // @synthesize loadNoCategoryView=_loadNoCategoryView;
@property(nonatomic) __weak UIView *loadNoDataView; // @synthesize loadNoDataView=_loadNoDataView;
@property(nonatomic) __weak UIView *loadFailedView; // @synthesize loadFailedView=_loadFailedView;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) BudgetTypeChooseView *typeChooseView; // @synthesize typeChooseView=_typeChooseView;
@property(retain, nonatomic) AdjustButton *titleBtn; // @synthesize titleBtn=_titleBtn;
@property(nonatomic) _Bool requestFalse; // @synthesize requestFalse=_requestFalse;
@property(nonatomic) _Bool needShowYearBudget; // @synthesize needShowYearBudget=_needShowYearBudget;
@property(copy, nonatomic) NSString *yearAmount; // @synthesize yearAmount=_yearAmount;
@property(nonatomic) long long budgetType; // @synthesize budgetType=_budgetType;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)autoShowMonthBudgetInput;
- (void)requestBudgetListAction:(_Bool)arg1;
- (void)reloadData;
- (void)showLoadNoCategoryDataView;
- (void)showLoadNoDataView;
- (void)showLoadFailedView;
- (void)clearAlertView;
- (void)showBuyVIP;
- (_Bool)needBuyVIP;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)titleBtnChooseAction:(id)arg1;
- (void)refreshTitleBtn;
- (void)showOverMonthBudget;
- (void)addCategoryBudgetFinish:(id)arg1;
- (void)addTallyType;
- (void)setupBottomView;
- (void)setupTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)parseParameters:(id)arg1;
- (void)clearBudgetCache;
- (void)saveYearBudgetAmount:(id)arg1;
- (void)loadYearBudgetList;
- (void)loadMonthBudgetList;
- (void)loadBudgetList;
- (void)saveCategoryBudgetEdit:(long long)arg1 info:(id)arg2 isDelete:(_Bool)arg3;
- (void)editCategoryBudget:(long long)arg1 model:(id)arg2 isDelete:(_Bool)arg3;
- (void)clearCategoryBudget:(id)arg1 row:(long long)arg2;
- (void)saveCategoryBudget:(id)arg1 model:(id)arg2 row:(long long)arg3 finish:(CDUnknownBlockType)arg4;
- (void)showCategoryBudgetInput:(id)arg1 row:(long long)arg2;
- (void)showCategoryBudgetEdit:(id)arg1 row:(long long)arg2;
- (void)saveMonthBudget:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)showMonthBudgetInput:(id)arg1;
- (void)showClearMonthBudgetTip;
- (void)showMonthBudgetEdit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

