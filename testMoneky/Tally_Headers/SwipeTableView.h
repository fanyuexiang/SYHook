//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "STHeaderViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, UIScrollView;
@protocol SwipeTableViewDataSource, SwipeTableViewDelegate;

@interface SwipeTableView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, STHeaderViewDelegate>
{
    _Bool _alwaysBounceHorizontal;
    _Bool _shouldAdjustContentSize;
    _Bool _swipeHeaderBarScrollDisabled;
    _Bool _scrollEnabled;
    _Bool _switchPageWithoutAnimation;
    _Bool _isAdjustingcontentSize;
    _Bool _contentOffsetKVODisabled;
    id <SwipeTableViewDelegate> _delegate;
    id <SwipeTableViewDataSource> _dataSource;
    UICollectionView *_contentView;
    UIView *_swipeHeaderView;
    UIView *_swipeHeaderBar;
    double _swipeHeaderTopInset;
    long long _currentItemIndex;
    UIScrollView *_currentItemView;
    UICollectionViewFlowLayout *_layout;
    double _headerInset;
    double _barInset;
    NSIndexPath *_cunrrentItemIndexpath;
    long long _shouldVisibleItemIndex;
    UIScrollView *_shouldVisibleItemView;
    NSMutableDictionary *_contentOffsetQuene;
    NSMutableDictionary *_contentSizeQuene;
    NSMutableDictionary *_contentMinSizeQuene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool contentOffsetKVODisabled; // @synthesize contentOffsetKVODisabled=_contentOffsetKVODisabled;
@property(nonatomic) _Bool isAdjustingcontentSize; // @synthesize isAdjustingcontentSize=_isAdjustingcontentSize;
@property(nonatomic) _Bool switchPageWithoutAnimation; // @synthesize switchPageWithoutAnimation=_switchPageWithoutAnimation;
@property(retain, nonatomic) NSMutableDictionary *contentMinSizeQuene; // @synthesize contentMinSizeQuene=_contentMinSizeQuene;
@property(retain, nonatomic) NSMutableDictionary *contentSizeQuene; // @synthesize contentSizeQuene=_contentSizeQuene;
@property(retain, nonatomic) NSMutableDictionary *contentOffsetQuene; // @synthesize contentOffsetQuene=_contentOffsetQuene;
@property(retain, nonatomic) UIScrollView *shouldVisibleItemView; // @synthesize shouldVisibleItemView=_shouldVisibleItemView;
@property(nonatomic) long long shouldVisibleItemIndex; // @synthesize shouldVisibleItemIndex=_shouldVisibleItemIndex;
@property(nonatomic) NSIndexPath *cunrrentItemIndexpath; // @synthesize cunrrentItemIndexpath=_cunrrentItemIndexpath;
@property(nonatomic) double barInset; // @synthesize barInset=_barInset;
@property(nonatomic) double headerInset; // @synthesize headerInset=_headerInset;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool swipeHeaderBarScrollDisabled; // @synthesize swipeHeaderBarScrollDisabled=_swipeHeaderBarScrollDisabled;
@property(nonatomic) _Bool shouldAdjustContentSize; // @synthesize shouldAdjustContentSize=_shouldAdjustContentSize;
@property(nonatomic) _Bool alwaysBounceHorizontal; // @synthesize alwaysBounceHorizontal=_alwaysBounceHorizontal;
@property(retain, nonatomic) UIScrollView *currentItemView; // @synthesize currentItemView=_currentItemView;
@property(nonatomic) long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(nonatomic) double swipeHeaderTopInset; // @synthesize swipeHeaderTopInset=_swipeHeaderTopInset;
@property(retain, nonatomic) UIView *swipeHeaderBar; // @synthesize swipeHeaderBar=_swipeHeaderBar;
@property(retain, nonatomic) UIView *swipeHeaderView; // @synthesize swipeHeaderView=_swipeHeaderView;
@property(retain, nonatomic) UICollectionView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <SwipeTableViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SwipeTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)st_runAtDealloc:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)headerView:(id)arg1 didPan:(id)arg2;
- (void)headerViewDidFrameChanged:(id)arg1;
- (struct CGPoint)maxHeaderViewFrameOrgin;
- (struct CGPoint)minHeaderViewFrameOrgin;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)adjustItemViewContentSize:(id)arg1 atIndex:(long long)arg2;
- (void)adjustItemViewContentOffset:(id)arg1 atIndex:(long long)arg2 fromLastItemView:(id)arg3 lastIndex:(long long)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollToItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

