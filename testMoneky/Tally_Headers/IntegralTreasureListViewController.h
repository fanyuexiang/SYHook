//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FCXRefreshBaseView, NSMutableArray, NSString, UILabel, UIScrollView, UITableView, UIView;

@interface IntegralTreasureListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_dataArray;
    UIScrollView *_contentScroll;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UITableView *_tableView;
    FCXRefreshBaseView *_refreshView;
    UIView *_emptyView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
- (void)recordEvent;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupUI;
- (void)requestData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)goRule;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

