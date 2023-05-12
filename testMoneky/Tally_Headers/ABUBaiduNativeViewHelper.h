//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUMediatedNativeAdData-Protocol.h"
#import "ABUMediatedNativeAdViewCreator-Protocol.h"

@class ABUImage, NSArray, NSDictionary, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol ABUBaidu_BaiduMobAdNativeAdObject;

@interface ABUBaiduNativeViewHelper : NSObject <ABUMediatedNativeAdViewCreator, ABUMediatedNativeAdData>
{
    UIView *_view;
    UILabel *_brandLabel;
    UILabel *_headlineView;
    UILabel *_bodyView;
    UIImageView *_iconView;
    UIImageView *_imageView;
    UIView *_mediaView;
    UIImageView *_adLogoView;
    NSObject<ABUBaidu_BaiduMobAdNativeAdObject> *_objc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<ABUBaidu_BaiduMobAdNativeAdObject> *objc; // @synthesize objc=_objc;
@property(retain, nonatomic) UIImageView *adLogoView; // @synthesize adLogoView=_adLogoView;
@property(retain, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UILabel *headlineView; // @synthesize headlineView=_headlineView;
@property(retain, nonatomic) UILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) UIView *advertiserView;
- (id)starRatingView;
- (id)priceView;
- (id)descView;
- (id)titleView;
- (id)callToActionView;
@property(readonly, copy, nonatomic) NSString *brandName;
@property(readonly, copy, nonatomic) NSString *advertiser;
@property(readonly, nonatomic) NSString *appPrice;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt;
@property(readonly, nonatomic) double videoAspectRatio;
@property(readonly, copy, nonatomic) NSString *videoUrl;
@property(readonly, nonatomic) long long videoDuration;
@property(readonly, nonatomic) long long appSize;
@property(readonly, nonatomic) long long commentNum;
@property(readonly, nonatomic) long long score;
@property(readonly, nonatomic) long long imageMode;
@property(readonly, copy, nonatomic) NSString *buttonText;
@property(readonly, nonatomic) ABUImage *icon;
@property(readonly, copy, nonatomic) NSString *source;
@property(readonly, copy, nonatomic) NSString *adDescription;
@property(readonly, copy, nonatomic) NSString *adTitle;
@property(readonly, nonatomic) ABUImage *adLogo;
@property(readonly, copy, nonatomic) NSArray *imageList;
@property(readonly, nonatomic) long long callToType;
@property(readonly, nonatomic) _Bool hasSupportActionBtn;
@property(readonly, nonatomic) UIImageView *iconImageView;
@property(readonly, nonatomic) UILabel *descLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)_createVideoWithFrame:(struct CGRect)arg1 andObjc:(id)arg2;
- (id)_createNormalWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andObjc:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIButton *callToActionBtn;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIButton *dislikeBtn;
@property(readonly, copy, nonatomic) NSArray *dislikeReasons;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

