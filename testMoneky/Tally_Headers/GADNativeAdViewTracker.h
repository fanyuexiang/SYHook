//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface GADNativeAdViewTracker : NSObject
{
    NSMapTable *_adViewToAdMap;
    NSMapTable *_adToAdViewMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)adViewForNativeAd:(id)arg1;
- (void)removeAdViewForNativeAd:(id)arg1;
- (void)registerAdViewInternal:(id)arg1 assetViewTracker:(id)arg2 forNativeAd:(id)arg3;
- (void)registerAdView:(id)arg1 assetViewTracker:(id)arg2 forNativeAd:(id)arg3;
- (id)init;

@end

