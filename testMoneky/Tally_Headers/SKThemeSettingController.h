//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SKThemeSettingDataSource, UICollectionView;

@interface SKThemeSettingController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    SKThemeSettingDataSource *_dataSource;
    double _interitemSpace;
    double _lineSpace;
    UICollectionView *_listCollection;
    struct CGSize _itemSize;
    struct UIEdgeInsets _sectionInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *listCollection; // @synthesize listCollection=_listCollection;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) double interitemSpace; // @synthesize interitemSpace=_interitemSpace;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(retain, nonatomic) SKThemeSettingDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)destroyNotification;
- (void)responseNotification:(id)arg1;
- (void)registerNotification;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

