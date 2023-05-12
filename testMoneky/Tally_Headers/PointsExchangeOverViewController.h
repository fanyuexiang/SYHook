//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, PointsExchangeTableView, UIButton, UIScrollView, UIView;

@interface PointsExchangeOverViewController : UIViewController <UIScrollViewDelegate>
{
    UIButton *_usedBtn;
    UIButton *_expiredBtn;
    UIView *_bottomlineView;
    UIScrollView *_scrollView;
    PointsExchangeTableView *_usedTableView;
    PointsExchangeTableView *_expiredTableView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshData;
- (void)adjustSelectType;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupContentView;
- (void)switchTypeAction:(id)arg1;
- (void)setupSegementView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
