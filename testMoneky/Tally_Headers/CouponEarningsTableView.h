//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FCXRefreshBaseView, NSMutableArray, NSString, UILabel;

@interface CouponEarningsTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_dataArray;
    FCXRefreshBaseView *_footerRefreshView;
    long long _offset;
    UILabel *_earningsLabel;
}

- (void).cxx_destruct;
- (void)updateEarings;
- (id)headerView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestListData:(id)arg1 isRefresh:(_Bool)arg2;
- (void)requestListData;
- (void)addHeaderFooterRefreshView;
- (void)setupContent;
- (void)couponAmountChangeNotification;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

