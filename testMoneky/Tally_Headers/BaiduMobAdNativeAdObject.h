//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdInstance, BaiduMobAdNativeReporter, BaiduMobAdTracker, NSArray, NSDictionary, NSNumber, NSString, UIViewController;
@protocol BaiduMobAdNativeAdDelegate, BaiduMobAdNativeInterationDelegate;

@interface BaiduMobAdNativeAdObject : NSObject
{
    int _actType;
    int _container_width;
    int _container_height;
    int _materialType;
    NSString *_iconImageURLString;
    NSString *_mainImageURLString;
    NSString *_adLogoURLString;
    NSString *_baiduLogoURLString;
    NSString *_text;
    NSString *_title;
    NSArray *_morepics;
    double _adStartTime;
    NSString *_adPlacementId;
    NSString *_videoURLString;
    NSNumber *_videoDuration;
    NSString *_htmlString;
    NSString *_brandName;
    NSNumber *_autoPlay;
    NSNumber *_autoPlayNonWifi;
    NSString *_w;
    NSString *_h;
    NSString *_actButtonString;
    unsigned long long _adSrc;
    NSString *_adProdType;
    NSString *_expressId;
    id <BaiduMobAdNativeInterationDelegate> _interationDelegate;
    BaiduMobAdNativeReporter *_videoReport;
    NSString *_ECPMLevel;
    long long _style_type;
    long long _size_type;
    BaiduMobAdInstance *_adInstance;
    NSString *_app_id;
    NSDictionary *_templateConfig;
    id <BaiduMobAdNativeAdDelegate> _delegate;
    UIViewController *_presentAdViewController;
    BaiduMobAdTracker *_tracker;
    NSString *_appName;
    NSString *_adType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) BaiduMobAdTracker *tracker; // @synthesize tracker=_tracker;
@property(nonatomic) __weak UIViewController *presentAdViewController; // @synthesize presentAdViewController=_presentAdViewController;
@property(nonatomic) __weak id <BaiduMobAdNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
@property int materialType; // @synthesize materialType=_materialType;
@property(retain, nonatomic) NSDictionary *templateConfig; // @synthesize templateConfig=_templateConfig;
@property(copy, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;
@property(retain, nonatomic) BaiduMobAdInstance *adInstance; // @synthesize adInstance=_adInstance;
@property(nonatomic) int container_height; // @synthesize container_height=_container_height;
@property(nonatomic) int container_width; // @synthesize container_width=_container_width;
@property(nonatomic) long long size_type; // @synthesize size_type=_size_type;
@property(nonatomic) long long style_type; // @synthesize style_type=_style_type;
@property(copy, nonatomic) NSString *ECPMLevel; // @synthesize ECPMLevel=_ECPMLevel;
@property(retain, nonatomic) BaiduMobAdNativeReporter *videoReport; // @synthesize videoReport=_videoReport;
@property(nonatomic) __weak id <BaiduMobAdNativeInterationDelegate> interationDelegate; // @synthesize interationDelegate=_interationDelegate;
@property(retain, nonatomic) NSString *expressId; // @synthesize expressId=_expressId;
@property(retain, nonatomic) NSString *adProdType; // @synthesize adProdType=_adProdType;
@property(nonatomic) unsigned long long adSrc; // @synthesize adSrc=_adSrc;
@property(copy, nonatomic) NSString *actButtonString; // @synthesize actButtonString=_actButtonString;
@property(copy, nonatomic) NSString *h; // @synthesize h=_h;
@property(copy, nonatomic) NSString *w; // @synthesize w=_w;
@property(retain, nonatomic) NSNumber *autoPlayNonWifi; // @synthesize autoPlayNonWifi=_autoPlayNonWifi;
@property(copy, nonatomic) NSNumber *autoPlay; // @synthesize autoPlay=_autoPlay;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(nonatomic) int actType; // @synthesize actType=_actType;
@property(copy, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoURLString; // @synthesize videoURLString=_videoURLString;
@property(copy, nonatomic) NSString *adPlacementId; // @synthesize adPlacementId=_adPlacementId;
@property double adStartTime; // @synthesize adStartTime=_adStartTime;
@property(retain, nonatomic) NSArray *morepics; // @synthesize morepics=_morepics;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *baiduLogoURLString; // @synthesize baiduLogoURLString=_baiduLogoURLString;
@property(copy, nonatomic) NSString *adLogoURLString; // @synthesize adLogoURLString=_adLogoURLString;
@property(copy, nonatomic) NSString *mainImageURLString; // @synthesize mainImageURLString=_mainImageURLString;
@property(copy, nonatomic) NSString *iconImageURLString; // @synthesize iconImageURLString=_iconImageURLString;
- (void)nativeShakeViewImpression;
- (void)biddingFail:(id)arg1 winInfo:(id)arg2;
- (void)biddingFail:(id)arg1;
- (void)biddingSuccess:(id)arg1;
- (void)nativeAdsDislikeClick:(id)arg1;
- (id)getECPMLevel;
- (void)baiduLogoClick:(id)arg1 targetUrl:(id)arg2;
- (void)baiduLogoClick:(id)arg1;
- (void)handleClick:(id)arg1;
- (void)trackImpression:(id)arg1;
- (void)trackVideoEvent:(int)arg1 withTrackInfo:(id)arg2;
- (void)trackVideoEvent:(int)arg1 withCurrentTime:(double)arg2;
- (id)curl;
- (_Bool)needTrackImpression;
- (id)adid;
- (id)qk;
- (id)properties;
- (id)nwinLogURLArray;
- (id)winLogURLStr;
- (_Bool)isExpired;
- (id)initWithAdInstance:(id)arg1;

@end

