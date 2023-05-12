//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BuySearchChooseViewDelegate-Protocol.h"

@class BuySearchChooseView, BuySearchListTableView, NSArray, NSString;

@interface BuySearchResultView : UIView <BuySearchChooseViewDelegate>
{
    BuySearchChooseView *_chooseHeader;
    BuySearchListTableView *_tableView;
    long long _page;
    NSString *_sortString;
    NSString *_hasCoupon;
    NSString *_searchURLPath;
    NSArray *_specialKeys;
    NSString *_listID;
    _Bool _canCacheHistoryKey;
    long long _platformType;
    NSString *_searchString;
    CDUnknownBlockType _pddAuthorizationHandler;
}

- (void).cxx_destruct;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(copy, nonatomic) CDUnknownBlockType pddAuthorizationHandler; // @synthesize pddAuthorizationHandler=_pddAuthorizationHandler;
@property(nonatomic) _Bool canCacheHistoryKey; // @synthesize canCacheHistoryKey=_canCacheHistoryKey;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
- (void)clickBtn:(id)arg1 withCoupon:(id)arg2;
- (void)adjustTopButtonHiddenStatus;
- (void)scrollToTop;
- (void)requestSearchResult;
- (void)searchText:(id)arg1;
- (void)setupContentWithPresentController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 platformType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
