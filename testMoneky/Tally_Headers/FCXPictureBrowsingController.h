//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UICollectionView, UIImageView, UIPageControl;

@interface FCXPictureBrowsingController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>
{
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    CDUnknownBlockType _dismissHandle;
    UIImageView *_imgView;
    NSArray *_dataArray;
    long long _currentPage;
    UIButton *_currentBtn;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *currentBtn; // @synthesize currentBtn=_currentBtn;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (id)pageControl;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)saveImage;
- (void)longPressAction:(id)arg1;
- (void)setupCollectionView;
- (void)dismissAnimation;
- (void)showAnimation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

