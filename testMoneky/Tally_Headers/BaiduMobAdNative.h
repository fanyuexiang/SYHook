//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdFeedRequestParameters, BaiduMobAdFeedSlot, NSMutableArray, NSNumber, NSString, UIViewController;
@protocol BaiduMobAdNativeAdDelegate, BaiduMobAdNativeCacheDelegate;

@interface BaiduMobAdNative : NSObject
{
    _Bool _isCacheVideo;
    _Bool _isExpressNativeAds;
    _Bool _isExpressMode;
    int _adType;
    int _bidFloor;
    NSString *_publisherId;
    NSString *_adUnitTag;
    id <BaiduMobAdNativeAdDelegate> _adDelegate;
    id <BaiduMobAdNativeCacheDelegate> _cacheDelegate;
    NSNumber *_baiduMobAdsHeight;
    NSNumber *_baiduMobAdsWidth;
    UIViewController *_presentAdViewController;
    double _timeout;
    BaiduMobAdFeedRequestParameters *_requestParameters;
    NSString *_adId;
    BaiduMobAdFeedSlot *_slot;
    NSMutableArray *_adViewArray;
    NSMutableArray *_successArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isExpressMode; // @synthesize isExpressMode=_isExpressMode;
@property(retain, nonatomic) NSMutableArray *successArray; // @synthesize successArray=_successArray;
@property(retain, nonatomic) NSMutableArray *adViewArray; // @synthesize adViewArray=_adViewArray;
@property(retain, nonatomic) BaiduMobAdFeedSlot *slot; // @synthesize slot=_slot;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(nonatomic) _Bool isExpressNativeAds; // @synthesize isExpressNativeAds=_isExpressNativeAds;
@property(nonatomic) int bidFloor; // @synthesize bidFloor=_bidFloor;
@property(retain, nonatomic) BaiduMobAdFeedRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(nonatomic) int adType; // @synthesize adType=_adType;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool isCacheVideo; // @synthesize isCacheVideo=_isCacheVideo;
@property(nonatomic) __weak UIViewController *presentAdViewController; // @synthesize presentAdViewController=_presentAdViewController;
@property(retain, nonatomic) NSNumber *baiduMobAdsWidth; // @synthesize baiduMobAdsWidth=_baiduMobAdsWidth;
@property(retain, nonatomic) NSNumber *baiduMobAdsHeight; // @synthesize baiduMobAdsHeight=_baiduMobAdsHeight;
@property(nonatomic) __weak id <BaiduMobAdNativeCacheDelegate> cacheDelegate; // @synthesize cacheDelegate=_cacheDelegate;
@property(nonatomic) __weak id <BaiduMobAdNativeAdDelegate> adDelegate; // @synthesize adDelegate=_adDelegate;
@property(copy, nonatomic) NSString *adUnitTag; // @synthesize adUnitTag=_adUnitTag;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
- (void)preloadVideoMaterial;
- (_Bool)enableLocation;
- (id)getHeight;
- (id)getWidth;
- (id)channelId;
- (id)getAdId;
- (id)getPublisherId;
- (id)buildSlotInfo:(id)arg1;
- (id)AdWithCustomEventInfo:(id)arg1;
- (id)AdSearchWithCustomEventInfo:(id)arg1;
- (void)callbackAdFailCode:(id)arg1 msg:(id)arg2;
- (void)callbackAdObjectsSuccessLoad:(id)arg1;
- (void)buildCallbackBlock;
- (void)loadBiddingAd:(id)arg1;
- (void)setBiddingData:(id)arg1;
- (id)getBiddingToken;
- (void)startWithParameters:(id)arg1;
- (void)requestNativeAdsWithParameters:(id)arg1;
- (void)requestExpressNativeAds;
- (void)requestNativeAds;
- (id)init;

@end

