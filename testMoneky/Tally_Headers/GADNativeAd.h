//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADInternalNativeAd, GADMediaContent, GADNativeAdImage, GADObserverCollection, GADResponseInfo, NSArray, NSDecimalNumber, NSDictionary, NSString, UIView, UIViewController;
@protocol GADNativeAdDelegate, GADNativeAdUnconfirmedClickDelegate;

@interface GADNativeAd : NSObject
{
    GADObserverCollection *_adObservers;
    _Bool _mediaContentStatusReported;
    _Bool _mediaContentRendered;
    UIView *_adChoicesContentView;
    _Bool _adMutedReported;
    _Bool _customClickGestureEnabledByPublisher;
    GADResponseInfo *_responseInfo;
    id <GADNativeAdUnconfirmedClickDelegate> _unconfirmedClickDelegate;
    _Bool _customClickGestureEnabled;
    GADMediaContent *_mediaContent;
    id <GADNativeAdDelegate> _delegate;
    UIViewController *_rootViewController;
    CDUnknownBlockType _paidEventHandler;
    GADInternalNativeAd *_internalNativeAd;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GADInternalNativeAd *internalNativeAd; // @synthesize internalNativeAd=_internalNativeAd;
@property(copy, nonatomic) CDUnknownBlockType paidEventHandler; // @synthesize paidEventHandler=_paidEventHandler;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <GADNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GADMediaContent *mediaContent; // @synthesize mediaContent=_mediaContent;
- (_Bool)isCustomClickGestureEnabled;
- (void)recordCustomClickGesture;
- (void)enableCustomClickGestures;
- (void)setUnconfirmedClickDelegate:(id)arg1;
- (id)unconfirmedClickDelegate;
- (void)cancelUnconfirmedClick;
- (void)registerClickConfirmingView:(id)arg1;
- (void)didCancelUnconfirmedClick;
- (void)adIsMuted;
- (void)unregisterAdView;
- (void)updateMediaView:(id)arg1;
- (void)updateAdChoicesView:(id)arg1;
- (void)registerAdView:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3;
- (void)muteThisAdWithReason:(id)arg1;
- (_Bool)recordImpressionWithData:(id)arg1;
- (void)reportTouchEventWithData:(id)arg1;
- (void)performClickWithData:(id)arg1;
- (void)postDidMakeImpressionNotificationWithUserInfo:(id)arg1;
- (void)postDidReceiveUnapprovedClickNotificationWithUserInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *extraAssets;
@property(readonly, nonatomic) UIView *adChoicesContentView;
- (id)internalMediaContent;
- (void)reportIsMediaContentRendered:(_Bool)arg1;
@property(readonly, nonatomic, getter=isCustomMuteThisAdAvailable) _Bool customMuteThisAdAvailable;
@property(readonly, nonatomic) GADNativeAdImage *adChoicesIcon;
@property(readonly, copy, nonatomic) NSDecimalNumber *starRating;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) NSArray *muteThisAdReasons;
@property(readonly, copy, nonatomic) NSString *advertiser;
@property(readonly, copy, nonatomic) NSString *price;
@property(readonly, copy, nonatomic) NSString *store;
@property(readonly, copy, nonatomic) NSString *body;
@property(readonly, nonatomic) GADNativeAdImage *icon;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, copy, nonatomic) NSString *headline;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
- (void)dealloc;
- (id)initWithInternalNativeAd:(id)arg1 responseInfo:(id)arg2;

@end

