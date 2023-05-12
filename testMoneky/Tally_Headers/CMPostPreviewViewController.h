//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SKAlbumListController, UIButton, UICollectionView, UIView;

@interface CMPostPreviewViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_originalCollection;
    UICollectionView *_selectCollection;
    UIView *_topinfoView;
    UIView *_bottominfoView;
    UIButton *_rightBtn;
    UIButton *_chooseBtn;
    NSMutableArray *_originalArray;
    NSMutableArray *_selectArray;
    long long _currentPage;
    SKAlbumListController *_albumList;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SKAlbumListController *albumList; // @synthesize albumList=_albumList;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *selectArray; // @synthesize selectArray=_selectArray;
@property(retain, nonatomic) NSMutableArray *originalArray; // @synthesize originalArray=_originalArray;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupInfoView;
- (void)chooseEvent;
- (void)doneAction;
- (void)setupCollection;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

