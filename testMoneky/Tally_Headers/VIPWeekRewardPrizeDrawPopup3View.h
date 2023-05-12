//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface VIPWeekRewardPrizeDrawPopup3View : UIView
{
    UIView *_maskView;
    UIView *_contentView;
    UIView *_topBgView;
    UIView *_bottomBgView;
    UILabel *_titleLab;
    UIImageView *_img1View;
    UIButton *_closeBtn;
    UIButton *_receiveBtn;
    id _extra;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _receiveBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType receiveBlock; // @synthesize receiveBlock=_receiveBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) id extra; // @synthesize extra=_extra;
@property(retain, nonatomic) UIButton *receiveBtn; // @synthesize receiveBtn=_receiveBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *img1View; // @synthesize img1View=_img1View;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *bottomBgView; // @synthesize bottomBgView=_bottomBgView;
@property(retain, nonatomic) UIView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)show;
- (void)clickButtonAction:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

