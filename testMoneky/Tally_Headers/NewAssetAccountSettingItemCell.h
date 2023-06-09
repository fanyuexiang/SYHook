//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AssetAccountModel, UIButton, UIImageView, UILabel;

@interface NewAssetAccountSettingItemCell : UITableViewCell
{
    AssetAccountModel *_model;
    CDUnknownBlockType _leftEventBlock;
    UIButton *_leftEventBtn;
    UIImageView *_imgView;
    UILabel *_nameLab;
    UILabel *_symbleLab;
    UILabel *_remarkLab;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *remarkLab; // @synthesize remarkLab=_remarkLab;
@property(retain, nonatomic) UILabel *symbleLab; // @synthesize symbleLab=_symbleLab;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UIButton *leftEventBtn; // @synthesize leftEventBtn=_leftEventBtn;
@property(copy, nonatomic) CDUnknownBlockType leftEventBlock; // @synthesize leftEventBlock=_leftEventBlock;
@property(retain, nonatomic) AssetAccountModel *model; // @synthesize model=_model;
- (void)resetLeftEventImage:(id)arg1;
- (void)reloadData;
- (void)clearData;
- (void)leftEventAction:(id)arg1;
- (void)setupViews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)changeEditeIcon;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

