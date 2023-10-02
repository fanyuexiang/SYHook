//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJBaseLoadingPageView.h"

@class CALayer, CSJMaterialMeta, CSJNumerAnimationLabel, UIImageView, UILabel, UIView;

@interface CSJProgressLoadingPageView : CSJBaseLoadingPageView
{
    _Bool _isPortrait;
    _Bool _hasIcon;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_loadingLabel;
    CSJNumerAnimationLabel *_progressLabel;
    UILabel *_percentLabel;
    CALayer *_Rect_R0Loss;
    UIView *_Mod_FontMap;
    CSJMaterialMeta *_materialMeta;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) _Bool hasIcon; // @synthesize hasIcon=_hasIcon;
@property(retain, nonatomic) UIView *Mod_FontMap; // @synthesize Mod_FontMap=_Mod_FontMap;
@property(retain, nonatomic) CALayer *Rect_R0Loss; // @synthesize Rect_R0Loss=_Rect_R0Loss;
@property(retain, nonatomic) UILabel *percentLabel; // @synthesize percentLabel=_percentLabel;
@property(retain, nonatomic) CSJNumerAnimationLabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (_Bool)isPortrait;
- (void)Levi_A2Y1;
- (void)startLoading;
- (void)setIsPortrait:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

