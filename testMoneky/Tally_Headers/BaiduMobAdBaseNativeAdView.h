//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BaiduMobAdActionComposerDelegate-Protocol.h"

@class BaiduMobAdBaseNativeAdObject, BaiduMobAdImageDownloadQueue, BaiduMobAdNativeVideoBaseView, BaiduMobAdNativeWebView, BaiduMobAdRendererHelper, BaiduMobAdSpamViewValidator, NSString, NSTimer, UIImageView, UILabel, UITapGestureRecognizer, UIViewController;
@protocol BaiduMobAdBaseNativeAdDelegate;

@interface BaiduMobAdBaseNativeAdView : UIView <BaiduMobAdActionComposerDelegate>
{
    _Bool _needSendImpressLog;
    _Bool _isChecking;
    int _checkVisibleCount;
    int _lastVisibility;
    UIImageView *_iconImageView;
    UIImageView *_mainImageView;
    UIImageView *_adLogoImageView;
    UIImageView *_baiduLogoImageView;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UILabel *_brandLabel;
    BaiduMobAdNativeVideoBaseView *_videoView;
    BaiduMobAdNativeWebView *_webView;
    UIViewController *_presentAdViewController;
    UITapGestureRecognizer *_tapGesture;
    BaiduMobAdImageDownloadQueue *_imageDownloadQueue;
    BaiduMobAdSpamViewValidator *_validater;
    NSString *_uniqueId;
    NSString *_showRecord;
    NSString *_forcecurl;
    BaiduMobAdBaseNativeAdObject *_object;
    id <BaiduMobAdBaseNativeAdDelegate> _delegate;
    BaiduMobAdRendererHelper *_rendererHelper;
    NSTimer *_countTimer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isChecking; // @synthesize isChecking=_isChecking;
@property(retain, nonatomic) NSTimer *countTimer; // @synthesize countTimer=_countTimer;
@property(retain, nonatomic) BaiduMobAdRendererHelper *rendererHelper; // @synthesize rendererHelper=_rendererHelper;
@property(nonatomic) __weak id <BaiduMobAdBaseNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BaiduMobAdBaseNativeAdObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *forcecurl; // @synthesize forcecurl=_forcecurl;
@property(copy, nonatomic) NSString *showRecord; // @synthesize showRecord=_showRecord;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) _Bool needSendImpressLog; // @synthesize needSendImpressLog=_needSendImpressLog;
@property(retain, nonatomic) BaiduMobAdSpamViewValidator *validater; // @synthesize validater=_validater;
@property(nonatomic) int lastVisibility; // @synthesize lastVisibility=_lastVisibility;
@property(nonatomic) int checkVisibleCount; // @synthesize checkVisibleCount=_checkVisibleCount;
@property(retain, nonatomic) BaiduMobAdImageDownloadQueue *imageDownloadQueue; // @synthesize imageDownloadQueue=_imageDownloadQueue;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak UIViewController *presentAdViewController; // @synthesize presentAdViewController=_presentAdViewController;
@property(retain, nonatomic) BaiduMobAdNativeWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) BaiduMobAdNativeVideoBaseView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *baiduLogoImageView; // @synthesize baiduLogoImageView=_baiduLogoImageView;
@property(retain, nonatomic) UIImageView *adLogoImageView; // @synthesize adLogoImageView=_adLogoImageView;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)dealloc;
- (void)clearAds;
- (void)didFinishWithResult:(id)arg1;
- (void)trackVideoEvent:(int)arg1 withCurrentTime:(double)arg2;
- (void)callbackAdClick;
- (void)clickAd;
- (_Bool)locationInVideo:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)safeMainQueueSetImage:(id)arg1 intoImageView:(id)arg2;
- (void)loadImageForURL:(id)arg1 intoImageView:(id)arg2;
- (void)loadImageForURLString:(id)arg1 intoImageView:(id)arg2;
- (void)display:(id)arg1;
- (void)loadAndDisplayNativeAdWithObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isVisible;
- (void)sendLog:(int)arg1 withtype:(long long)arg2;
- (id)generateUniqueId;
- (void)checkVisible;
- (void)trackImpression;
- (id)initWithFrame:(struct CGRect)arg1 webview:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 brandName:(id)arg2 title:(id)arg3 text:(id)arg4 icon:(id)arg5 mainImage:(id)arg6 videoView:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1 brandName:(id)arg2 title:(id)arg3 text:(id)arg4 icon:(id)arg5 mainImage:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 text:(id)arg3 icon:(id)arg4 mainImage:(id)arg5 videoView:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 text:(id)arg3 icon:(id)arg4 mainImage:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 object:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

