//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJDislikeButton, CSJNativeAd, CSJVideoAdView, UIImageView, UILabel, UIViewController;
@protocol CSJDislikeReportorDelegate, CSJVideoAdReportor;

@interface CSJNativeAdRelatedView : NSObject
{
    id <CSJVideoAdReportor> _videoAdReportor;
    CSJDislikeButton *_dislikeButton;
    UILabel *_adLabel;
    UIImageView *_logoImageView;
    UIImageView *_logoADImageView;
    CSJVideoAdView *_videoAdView;
    CSJNativeAd *_nativeAd;
    UIViewController *_rootViewController;
    id <CSJDislikeReportorDelegate> _dislikeReportor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CSJDislikeReportorDelegate> dislikeReportor; // @synthesize dislikeReportor=_dislikeReportor;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak CSJNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
@property(retain, nonatomic) CSJVideoAdView *videoAdView; // @synthesize videoAdView=_videoAdView;
@property(retain, nonatomic) UIImageView *logoADImageView; // @synthesize logoADImageView=_logoADImageView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) CSJDislikeButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(readonly, nonatomic) id <CSJVideoAdReportor> videoAdReportor; // @synthesize videoAdReportor=_videoAdReportor;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)_isVideoAdView;
- (void)tapAdLogo;
- (void)dislikeAction:(id)arg1;
- (void)refreshData:(id)arg1;
- (void)dealloc;

@end

