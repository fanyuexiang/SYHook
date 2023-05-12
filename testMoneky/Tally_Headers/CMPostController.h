//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDragDelegate-Protocol.h"

@class CMPostTopickButton, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UITextView;

@interface CMPostController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDragDelegate>
{
    UITextView *_textView;
    double _photoSpace;
    long long _minLength;
    CMPostTopickButton *_topickBtn;
    UICollectionView *_collectionView;
    UIButton *_addBtn;
    NSString *_topicID;
    NSString *_topicName;
    NSMutableDictionary *_tagInfos;
    NSMutableArray *_imagesModelArray;
}

+ (void)selectPhotoWidthController:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *imagesModelArray; // @synthesize imagesModelArray=_imagesModelArray;
@property(retain, nonatomic) NSMutableDictionary *tagInfos; // @synthesize tagInfos=_tagInfos;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
- (void)longPressAction:(id)arg1;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)gotoPreview:(long long)arg1;
- (void)dealloc;
- (void)doneAction;
- (void)dismissAction;
- (void)deletePhoto:(id)arg1;
- (void)addPhoto:(id)arg1;
- (void)addPhoto;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tapGesture;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
