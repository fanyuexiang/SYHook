//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTLoadAdParams, GDTUnifiedNativeAd, GDTUnifiedNativeAdDataObject, NSDictionary, NSString;
@protocol GDTUnifiedNativeAdDelegate;

@protocol GDTUnifiedNativeAdImpProtocol <NSObject>
@property(retain, nonatomic) NSDictionary *mediationExtDict;
@property(copy, nonatomic) NSString *vastClassName;
@property(nonatomic) long long minVideoDuration;
@property(nonatomic) long long maxVideoDuration;
@property(nonatomic) unsigned long long videoRenderType;
@property(nonatomic) unsigned long long videoPlayPolicy;
@property(copy, nonatomic) NSString *adNetworkName;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
@property(nonatomic) __weak id <GDTUnifiedNativeAdDelegate> delegate;
@property(nonatomic) __weak GDTUnifiedNativeAd *unifiedNativeAd;
- (void)loadAdWithAdCount:(long long)arg1;
- (void)loadAd;
- (id)initWithPlacementId:(NSString *)arg1 serverType:(long long)arg2;
- (id)initWithPlacementId:(NSString *)arg1;

@optional
- (void)GDTfunctionb8eaf1:(GDTUnifiedNativeAdDataObject *)arg1;
@end

