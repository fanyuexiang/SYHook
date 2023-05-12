//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BuyMiniBaseViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class BuySearchKeysTableView, BuySearchKeysView, NSMutableArray, NSString, UIButton, UISearchBar, UIView;

@interface BuySearchViewController : BuyMiniBaseViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate>
{
    UISearchBar *_searchBar;
    _Bool _shouldShowSearchResults;
    BuySearchKeysView *_historyHotView;
    BuySearchKeysTableView *_searchAssociateTableview;
    _Bool _shouldSearch;
    long long _page;
    NSString *_sortString;
    NSString *_hasCoupon;
    UIButton *_cancelBtn;
    UIButton *_lastTypeSelectBtn;
    UIView *_typeBottomLine;
    NSMutableArray *_typeButtonArray;
    long long _selectedPlatformType;
    NSString *_searchString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) long long selectedPlatformType; // @synthesize selectedPlatformType=_selectedPlatformType;
- (void)adjustSelectPlatformType:(long long)arg1;
- (void)searchWith:(id)arg1 canCacheHistoryKey:(_Bool)arg2;
- (void)reqeustKeyWords;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)closedSearchbar;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)typeButtonSitchAction:(id)arg1;
- (id)addTypeSwitchButtonWithFrame:(struct CGRect)arg1 tag:(long long)arg2 title:(id)arg3 superView:(id)arg4;
- (id)addTypeSwitchViewWithFrame:(struct CGRect)arg1;
- (void)guessLikeGoods:(id)arg1 platformType:(long long)arg2;
- (void)searchGoods:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

