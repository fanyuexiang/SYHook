//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BuyMiniBaseViewController.h"

@class UILabel, UIScrollView;

@interface CouponMineController : BuyMiniBaseViewController
{
    UIScrollView *_scrollView;
    UILabel *_withdrawLabel;
    UILabel *_settleLabel;
    UILabel *_earningsLabel;
    UILabel *_taobaoAuthorizeLabel;
}

- (void).cxx_destruct;
- (id)arrowImage;
- (void)setupRefreshView;
- (void)recommandSwitchValueChanged:(id)arg1;
- (id)addRecommandViewWithOffsetY:(double)arg1;
- (void)setupHeaderView;
- (void)setupScrollView;
- (void)setupContent:(id)arg1;
- (void)requestData:(id)arg1;
- (void)howCashback;
- (void)listButtonAction:(id)arg1;
- (void)goCashback;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestAmountInfo;
- (void)refreshTaobaoAuthorizeStatus;
- (void)couponAmountChangeNotification;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

