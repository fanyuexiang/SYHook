//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MoreFuncDataSource, MoreFuncHandleEvent, NSString, UIButton, UICollectionView;

@interface MoreFuncController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _handleModuleWithNeedLogin;
    MoreFuncDataSource *_dataSource;
    MoreFuncHandleEvent *_handleEvent;
    NSString *_handleModule;
    UIButton *_backBtn;
    UICollectionView *_listCollection;
    double _itemSpace;
    struct CGSize _itemSize;
}

- (void).cxx_destruct;
@property(nonatomic) double itemSpace; // @synthesize itemSpace=_itemSpace;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(retain, nonatomic) UICollectionView *listCollection; // @synthesize listCollection=_listCollection;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic) _Bool handleModuleWithNeedLogin; // @synthesize handleModuleWithNeedLogin=_handleModuleWithNeedLogin;
@property(copy, nonatomic) NSString *handleModule; // @synthesize handleModule=_handleModule;
@property(retain, nonatomic) MoreFuncHandleEvent *handleEvent; // @synthesize handleEvent=_handleEvent;
@property(retain, nonatomic) MoreFuncDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)customHandleEventActionWithFamillyBills;
- (void)userAccountDidChangedNotification:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)refreshBackBtn;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

