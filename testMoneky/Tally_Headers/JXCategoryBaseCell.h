//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JXCategoryBaseCellModel, JXCategoryViewAnimator, NSMutableArray;

@interface JXCategoryBaseCell : UICollectionViewCell
{
    JXCategoryBaseCellModel *_cellModel;
    JXCategoryViewAnimator *_animator;
    NSMutableArray *_animationBlockArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *animationBlockArray; // @synthesize animationBlockArray=_animationBlockArray;
@property(retain, nonatomic) JXCategoryViewAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) JXCategoryBaseCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void)startSelectedAnimationIfNeeded:(id)arg1;
- (void)addSelectedAnimationBlock:(CDUnknownBlockType)arg1;
- (_Bool)checkCanStartSelectedAnimation:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)initializeViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)dealloc;

@end

