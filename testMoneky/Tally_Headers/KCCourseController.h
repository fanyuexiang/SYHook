//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KCBaseController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KCModel, KCWebContentController, NSMutableArray, NSNumber, NSString, UIButton, UIImageView, UITableView, UIView;

@interface KCCourseController : KCBaseController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    NSMutableArray *_dataArray;
    UITableView *_courseTableView;
    UIButton *_lookAllBtn;
    UIView *_bottomView;
    KCModel *_courseModel;
    UIButton *_sortBtn;
    long long _sortType;
    KCWebContentController *_contentDetailController;
    UIView *_navBarView;
    UIImageView *_topBgImgView;
    UIView *_topBgCoverView;
    double _widthScale;
    UIButton *_backBtn;
    UIView *_navRightBgView;
    UIView *_navRightMidLine;
    UIButton *_navDotBtn;
    UIButton *_navCloseBtn;
    double _topImgViewHeight;
    double _moveHeight;
    NSNumber *_courseID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *courseID; // @synthesize courseID=_courseID;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)setupNavigationBar;
- (void)viewCourseDetailText:(id)arg1;
- (void)listenWithCurrentModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 voiceCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 textCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)listenAction;
- (void)balanceAction;
- (void)shareAction;
- (void)sortAction:(id)arg1;
- (id)addFooterSectionView:(double)arg1 title:(id)arg2 content:(id)arg3;
- (void)setupFooterView:(id)arg1;
- (void)setupHeaderView:(id)arg1;
- (void)setupTableView:(id)arg1;
- (void)lookAllAction;
- (void)requestCourseDetailData;
- (void)refreshData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)parseParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

