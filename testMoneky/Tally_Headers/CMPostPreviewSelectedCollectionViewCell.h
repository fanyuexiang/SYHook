//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SKPhotoModel, UIImageView, UIView;

@interface CMPostPreviewSelectedCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    SKPhotoModel *_model;
    UIView *_selectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(copy, nonatomic) SKPhotoModel *model; // @synthesize model=_model;
- (void)selectedChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

