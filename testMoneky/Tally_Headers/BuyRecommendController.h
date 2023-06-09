//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BuyMiniBaseViewController.h"

#import "TYCyclePagerViewDataSource-Protocol.h"
#import "TYCyclePagerViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class AFHTTPSessionManager, BuyBoutiqueRecommendView, BuyCategorySelectView, BuyDiallelCollectionView, BuySearchListTableView, BuySearchMarqueeView, FCXRefreshBaseView, NSArray, NSDictionary, NSMutableArray, NSString, TYCyclePagerView, UIButton, UIImage, UIPageControl, UIScrollView, UISearchBar, UIView;

@interface BuyRecommendController : BuyMiniBaseViewController <TYCyclePagerViewDelegate, TYCyclePagerViewDataSource, UIGestureRecognizerDelegate, UIScrollViewDelegate, UISearchBarDelegate>
{
    UIScrollView *_topBgView;
    UIView *_topPlatformBgView;
    TYCyclePagerView *_bannerView;
    NSArray *_bannerList;
    NSMutableArray *_listViewArray;
    UIView *_topTypeSelectBgView;
    UIView *_topSectionSeparateColorView;
    _Bool _showPlatform;
    UISearchBar *_searchBar;
    UIPageControl *_pageControl;
    NSDictionary *_bottomBarInfo;
    UIButton *_bottomBarBtn;
    UIScrollView *_scrollView;
    UIButton *_topBtn;
    double _lastOffsetY;
    double _currentCollectionViewOffsetY;
    BuyCategorySelectView *_categorySelectView;
    BuyDiallelCollectionView *_currentCollectionView;
    BuySearchListTableView *_tableView;
    FCXRefreshBaseView *_footerRefreshView;
    BuyBoutiqueRecommendView *_recommendView;
    BuySearchMarqueeView *_marqueeView;
    CDUnknownBlockType _scrollViewDidScrollHandle;
    AFHTTPSessionManager *_sessionManager;
    UIImage *_navBarImage;
    _Bool _forbitPopGesture;
    NSDictionary *_dataDic;
    NSDictionary *_parameters;
    NSString *_toptip;
    NSMutableArray *_listArray;
    long long _page;
    NSString *_skaPageName;
}

+ (void)presentCouponWithController:(id)arg1 parameters:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *skaPageName; // @synthesize skaPageName=_skaPageName;
@property(nonatomic) _Bool forbitPopGesture; // @synthesize forbitPopGesture=_forbitPopGesture;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) UIButton *topBtn; // @synthesize topBtn=_topBtn;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
@property(retain, nonatomic) NSString *toptip; // @synthesize toptip=_toptip;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
- (void)dealloc;
- (id)gradientColor;
- (id)createGradientRectImageWithBounds:(struct CGRect)arg1 cgColors:(id)arg2 GradientType:(int)arg3;
- (id)navBarImage;
- (_Bool)appleLoginNoBind;
- (_Bool)noLogin;
- (void)showPopup:(id)arg1;
- (void)requestPopup;
- (void)tableviewToTop;
- (void)adjustCurrentCollectionViewTopView;
- (void)preLoadListData:(long long)arg1;
- (void)addRecommendViewWithFrame:(struct CGRect)arg1 title:(id)arg2 offsetY:(double)arg3;
- (void)sectionHeaderButtonAction:(id)arg1;
- (void)bottomBarAction;
- (void)closeBottomView;
- (void)addBottomBarView;
- (void)addTopBannerView;
- (void)addListView:(double)arg1;
- (void)addContentView:(double)arg1;
- (void)addCategorySelectViewToSuperView:(id)arg1;
- (void)addSectionHeaderViewWithOffsetY:(double)arg1;
- (void)refreshTopPlatformContent;
- (void)handleRequestWithResponseObject:(id)arg1 error:(id)arg2 isRefresh:(_Bool)arg3 refreshView:(id)arg4;
- (void)requestRecommendList:(id)arg1 isRefresh:(_Bool)arg2;
- (void)adjustTopButtonViewHidden;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)goCourse;
- (void)guessLikeGoods:(id)arg1 platformType:(long long)arg2;
- (void)adjustMarqueeViewFrame;
- (void)refreshMarqueeView;
- (void)requestHotKeywoardDidSuccess;
- (void)recommandStatusDidChangeNotification;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)handlerPopupView;
- (_Bool)handlerDelivery;
- (void)viewDidLoad;
- (void)luckyAction;
- (void)setupLuckyWithInfo:(id)arg1 image:(id)arg2;
- (void)setupLuckyWithInfo:(id)arg1;
- (void)jumpActionWithInfo:(id)arg1 eventID:(id)arg2 source:(id)arg3;
- (void)pagerView:(id)arg1 didSelectedItemCell:(id)arg2 atIndex:(long long)arg3;
- (void)pagerView:(id)arg1 didScrollFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (id)pagerView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (id)layoutForPagerView:(id)arg1;
- (long long)numberOfItemsInPagerView:(id)arg1;
- (void)addPageControl;
- (void)setupBannerWithInfo:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)goNewFirstOrderList;
- (void)pangestureAction:(id)arg1;
- (void)setupFirstOrderReturnInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

