//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADAdContent.h"

@class GADNativeAdContext, GADNativeAdFeatures, GADNativeAdImage, GADNativeAssetViewTracker, GADObserverCollection, GADOverlayView, NSObject, NSString, NSURL, UIView;
@protocol GADNativeAdAssetsDataSource, OS_dispatch_queue;

@interface GADInternalNativeAd : GADAdContent
{
    GADObserverCollection *_clickConfirmingViewObservers;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    // Error parsing type: AB, name: _viewAwareAPIUsed
    // Error parsing type: AB, name: _customMuteThisAdRequested
    // Error parsing type: AB, name: _customOnePointFiveClickImplementedByPublisher
    _Bool _clickConfirmationRequired;
    double _unconfirmedClickTimestamp;
    NSString *_unconfirmedClickIdentifier;
    // Error parsing type: AB, name: _customClickGestureEnabledByPublisher
    NSString *_adConfigurationAdType;
    Class _publicAdClass;
    GADOverlayView *_overlayView;
    GADNativeAssetViewTracker *_assetViewTracker;
    GADNativeAdContext *_nativeAdContext;
    GADNativeAdFeatures *_nativeAdFeatures;
    long long _preferredAdChoicesPosition;
    NSString *_customFormatID;
    GADNativeAdImage *_adChoicesIcon;
    long long _mediaType;
    UIView *_clickConfirmingView;
    NSURL *_nativeAdValidatorURL;
    UIView *_watermarkView;
    id <GADNativeAdAssetsDataSource> _assets;
}

+ (id)adTypeFromSingleNativeAdConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <GADNativeAdAssetsDataSource> assets; // @synthesize assets=_assets;
@property(retain, nonatomic) UIView *watermarkView; // @synthesize watermarkView=_watermarkView;
@property(copy, nonatomic) NSURL *nativeAdValidatorURL; // @synthesize nativeAdValidatorURL=_nativeAdValidatorURL;
@property(nonatomic) __weak UIView *clickConfirmingView; // @synthesize clickConfirmingView=_clickConfirmingView;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) GADNativeAdImage *adChoicesIcon; // @synthesize adChoicesIcon=_adChoicesIcon;
@property(copy, nonatomic) NSString *customFormatID; // @synthesize customFormatID=_customFormatID;
@property(nonatomic) long long preferredAdChoicesPosition; // @synthesize preferredAdChoicesPosition=_preferredAdChoicesPosition;
@property(readonly, nonatomic) GADNativeAdFeatures *nativeAdFeatures; // @synthesize nativeAdFeatures=_nativeAdFeatures;
@property(retain, nonatomic) GADNativeAdContext *nativeAdContext; // @synthesize nativeAdContext=_nativeAdContext;
@property(retain, nonatomic) GADNativeAssetViewTracker *assetViewTracker; // @synthesize assetViewTracker=_assetViewTracker;
@property(retain, nonatomic) GADOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) Class publicAdClass; // @synthesize publicAdClass=_publicAdClass;
@property(readonly, nonatomic) NSString *adConfigurationAdType; // @synthesize adConfigurationAdType=_adConfigurationAdType;
- (double)confirmationClickTimeInterval;
- (void)resetUnconfirmedClick;
- (void)handleAssociatedNativeAd:(id)arg1;
- (void)unregisterClickConfirmingView;
- (void)registerClickConfirmingView:(id)arg1;
@property(readonly, nonatomic, getter=isCustomClickGestureEnabled) _Bool customClickGestureEnabled;
@property(nonatomic) _Bool customClickGestureEnabledByPublisher;
@property(copy, nonatomic) NSString *unconfirmedClickIdentifier;
@property(nonatomic) double unconfirmedClickTimestamp;
@property(nonatomic) _Bool clickConfirmationRequired;
@property(readonly, nonatomic, getter=isCustomOnePointFiveClickEnabled) _Bool customOnePointFiveClickEnabled;
@property(nonatomic) _Bool customOnePointFiveClickImplementedByPublisher;
@property(nonatomic) _Bool customMuteThisAdRequested;
@property(readonly, nonatomic) _Bool customMuteThisAdAvailable;
@property(nonatomic) _Bool viewAwareAPIUsed;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 adType:(id)arg2 nativeAdFeatures:(id)arg3;

@end

