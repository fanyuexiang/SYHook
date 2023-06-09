//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTBottomCardAppearance-Protocol.h"

@class GDTAdBaseModel, GDTRoundedLabel, NSString, UIButton, UIColor, UIImageView, UILabel;

@interface GDTDPACardView : UIView <GDTBottomCardAppearance>
{
    GDTAdBaseModel *_adModel;
    UIImageView *_iconImageView;
    UILabel *_appNameLabel;
    UIImageView *_productImageView;
    UILabel *_productNameLabel;
    UILabel *_priceLabel;
    GDTRoundedLabel *_tagLabel1;
    GDTRoundedLabel *_tagLabel2;
    GDTRoundedLabel *_discountLabel;
    UIButton *_button;
    UIImageView *_adLogoImageView;
    UIColor *_CTAButtonColor;
}

@property(retain, nonatomic) UIColor *CTAButtonColor; // @synthesize CTAButtonColor=_CTAButtonColor;
@property(retain, nonatomic) UIImageView *adLogoImageView; // @synthesize adLogoImageView=_adLogoImageView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) GDTRoundedLabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) GDTRoundedLabel *tagLabel2; // @synthesize tagLabel2=_tagLabel2;
@property(retain, nonatomic) GDTRoundedLabel *tagLabel1; // @synthesize tagLabel1=_tagLabel1;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *productNameLabel; // @synthesize productNameLabel=_productNameLabel;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (id)GDTfunctionu73ccl;
- (void)GDTfunctions8QI2E:(long long)arg1;
- (id)GDTfunctioni9TIvU;
- (void)layoutSubviews;
- (void)GDTfunctioni0dvvY;
- (id)initLi8P9LT:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

