//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABUAdLoader.h"

#import "ABUCustomDrawAdapterBridge-Protocol.h"

@class NSString;

@interface ABUDrawAdLoader : ABUAdLoader <ABUCustomDrawAdapterBridge>
{
}

- (void)drawAd:(id)arg1 didLoadFailWithError:(id)arg2;
- (void)drawAd:(id)arg1 didLoadWithDrawAds:(id)arg2 exts:(id)arg3;
- (void)loadMediaAdWithAdapter:(id)arg1 mediaSlotConfig:(id)arg2 params:(id)arg3;
- (void)willLoadMediaAdUsingRules:(id)arg1 withMediaSlotConfig:(id)arg2;
- (_Bool)isValidAdapter:(id)arg1 mediaSlotConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

