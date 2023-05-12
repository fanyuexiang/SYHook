//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdBaseNativeAdView, BaiduMobAdInstance, NSArray, NSNumber, NSString;
@protocol BaiduMobAdBaseNativeAdDelegate;

@interface BaiduMobAdBaseNativeAdObject : NSObject
{
    int _actType;
    int _materialType;
    NSString *_iconImageURLString;
    NSString *_mainImageURLString;
    NSString *_adLogoURLString;
    NSString *_baiduLogoURLString;
    NSString *_text;
    NSString *_title;
    BaiduMobAdBaseNativeAdView *_associatedView;
    NSArray *_morepics;
    double _adStartTime;
    NSString *_adPlacementId;
    NSString *_videoURLString;
    NSNumber *_videoDuration;
    NSString *_htmlString;
    NSString *_brandName;
    id <BaiduMobAdBaseNativeAdDelegate> _delegate;
    BaiduMobAdInstance *_adInstance;
    NSString *_appName;
    NSString *_adType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) BaiduMobAdInstance *adInstance; // @synthesize adInstance=_adInstance;
@property(nonatomic) __weak id <BaiduMobAdBaseNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
@property int materialType; // @synthesize materialType=_materialType;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(nonatomic) int actType; // @synthesize actType=_actType;
@property(copy, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoURLString; // @synthesize videoURLString=_videoURLString;
@property(copy, nonatomic) NSString *adPlacementId; // @synthesize adPlacementId=_adPlacementId;
@property double adStartTime; // @synthesize adStartTime=_adStartTime;
@property(retain, nonatomic) NSArray *morepics; // @synthesize morepics=_morepics;
@property(nonatomic) __weak BaiduMobAdBaseNativeAdView *associatedView; // @synthesize associatedView=_associatedView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *baiduLogoURLString; // @synthesize baiduLogoURLString=_baiduLogoURLString;
@property(copy, nonatomic) NSString *adLogoURLString; // @synthesize adLogoURLString=_adLogoURLString;
@property(copy, nonatomic) NSString *mainImageURLString; // @synthesize mainImageURLString=_mainImageURLString;
@property(copy, nonatomic) NSString *iconImageURLString; // @synthesize iconImageURLString=_iconImageURLString;
- (id)curl;
- (void)trackVideoEvent:(int)arg1 withCurrentTime:(double)arg2;
- (_Bool)needTrackImpression;
- (id)adid;
- (id)qk;
- (id)properties;
- (id)nwinLogURLArray;
- (id)winLogURLStr;
- (_Bool)isExpired;
- (id)initWithAdInstance:(id)arg1;

@end

