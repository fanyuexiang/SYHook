//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface DetailInterstitialAdGuideContentView : UIView
{
    UIButton *_allBtn;
    UIButton *_closeBtn;
    UILabel *_titleLab;
    UILabel *_subtitleLab;
    UIButton *_submitBtn;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _submitBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) UILabel *subtitleLab; // @synthesize subtitleLab=_subtitleLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *allBtn; // @synthesize allBtn=_allBtn;
- (void)submitBtnAction;
- (void)closeBtnAction;
- (void)allBtnAction;
- (void)loadData;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

