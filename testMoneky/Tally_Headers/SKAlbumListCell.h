//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, SKPhotoModel, UIButton, UIImageView, UILabel;

@interface SKAlbumListCell : UICollectionViewCell
{
    int _requestID;
    UIImageView *_imageView;
    CALayer *_noSelectLayer;
    UILabel *_indexLabel;
    UIButton *_selectBtn;
    SKPhotoModel *_model;
    CDUnknownBlockType _selectHandle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectHandle; // @synthesize selectHandle=_selectHandle;
@property(retain, nonatomic) SKPhotoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) CALayer *noSelectLayer; // @synthesize noSelectLayer=_noSelectLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)dealloc;
- (void)didSelectClick:(id)arg1;
- (void)setShowNoSelectStatus:(_Bool)arg1;
- (void)refreshSelectedIndex;
- (void)changeSelectedStatus;
- (void)cancelRequest;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

