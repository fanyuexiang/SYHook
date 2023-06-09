//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUMediatedNativeAdViewCreator-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;
@protocol ABUCsj_BUNativeAd, ABUCsj_BUNativeAdRelatedView, ABUCsj_BUVideoAdReportor;

@interface ABUCsjNativeAdViewCreator : NSObject <ABUMediatedNativeAdViewCreator>
{
    id <ABUCsj_BUNativeAd> _ad;
    id <ABUCsj_BUNativeAdRelatedView> _adRelatedView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ABUCsj_BUNativeAdRelatedView> adRelatedView; // @synthesize adRelatedView=_adRelatedView;
@property(retain, nonatomic) id <ABUCsj_BUNativeAd> ad; // @synthesize ad=_ad;
@property(readonly, nonatomic) id <ABUCsj_BUVideoAdReportor> videoAdReportor;
@property(readonly, nonatomic) UIView *adLogoView;
@property(readonly, nonatomic) UIImageView *iconImageView;
@property(readonly, nonatomic) UIButton *dislikeBtn;
@property(readonly, nonatomic) UIView *mediaView;
- (id)initWithAd:(id)arg1 videoViewDelegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) UIView *advertiserView;
@property(readonly, nonatomic) UIButton *callToActionBtn;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) UILabel *descLabel;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasSupportActionBtn;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImageView *imageView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UILabel *titleLabel;

@end

