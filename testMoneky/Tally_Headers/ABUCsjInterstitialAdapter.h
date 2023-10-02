//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUMCustomInterstitialAdapter-Protocol.h"

@class NSString;
@protocol BUMCustomConfigAdapter, BUMCustomInterstitialAdapterBridge;

@interface ABUCsjInterstitialAdapter : NSObject <BUMCustomInterstitialAdapter>
{
}

- (CDStruct_2ec95fd7)mediatedAdStatus;
- (_Bool)showAdFromRootViewController:(id)arg1 parameter:(id)arg2;
- (id)serverBiddingTokenWithParams:(id)arg1 error:(id *)arg2;
- (void)loadInterstitialAdWithSlotID:(id)arg1 andSize:(struct CGSize)arg2 parameter:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <BUMCustomInterstitialAdapterBridge> bridge;
@property(retain, nonatomic) id <BUMCustomConfigAdapter> configAdapter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCustomAdapter;
@property(readonly) Class superclass;

@end

