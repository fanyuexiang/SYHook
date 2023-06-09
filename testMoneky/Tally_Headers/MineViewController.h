//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BudgetView, FCXTabBar, MineCommonView, MineHeaderView, MineKCView, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface MineViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    NSMutableArray *_placeHolderArray;
    NSMutableArray *_dataArray;
    UITableView *_tableView;
    BudgetView *_budgetView;
    UIView *_redDot;
    UILabel *_messageCountLabel;
    UILabel *_getPointsLabel;
    MineKCView *_kcView;
    MineCommonView *_mcView;
    UILabel *_inviteTipLabel;
    _Bool _fromMediator;
    double _bottomSpace;
    FCXTabBar *_tabBar;
    UIView *_navView;
    MineHeaderView *_headerView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)skinchanged;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clickTabbarManyTimesAction;
- (void)clickTabbarSingleTimeAction;
- (void)scrollsToTop;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSectio:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addTableView;
- (void)refreshList;
- (void)removeRemindDot;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)userInfoDidChangeNotification;
- (void)refreshMineHeader;
- (void)refreshMessageCount;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupNetworkConfig;
- (void)viewDidLoad;
- (void)parseParameters:(id)arg1;
- (void)goRating;
- (void)goFeedback;
- (void)goHelp;
- (void)goAbout;
- (void)noADAction;
- (void)sectionGoSettings;
- (void)goFamilyBillsSetting;
- (void)goTallyLedgerListSetting;
- (void)goKonwledgeClass;
- (void)setupBudget;
- (void)goMonthBill;
- (void)goMyPoints;
- (void)bottomGoSettings;
- (void)topGoSettings;
- (void)goSettingsWithLabel:(id)arg1;
- (void)goInviteFriend;
- (void)goCategorySetting;
- (void)goMineBadge;
- (void)goMessage;
- (void)goNewVipActivity;
- (void)goVIPActivityCalendar;
- (void)goMineVIP;
- (void)goPersonInfo;
- (void)goSigninShare;
- (_Bool)refreshInviteFriends:(id)arg1 btn:(id)arg2;
- (void)refreshSectionData;
- (id)setupSection4;
- (id)sectionCellView:(id)arg1 title:(id)arg2 selector:(SEL)arg3;
- (id)section3;
- (id)section2;
- (id)section1;
- (void)setupSectionData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

