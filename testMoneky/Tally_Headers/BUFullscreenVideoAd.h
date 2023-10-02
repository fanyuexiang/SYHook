//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

#import "BUAdClientBiddingProtocol-Protocol.h"
#import "BUMopubAdMarkUpDelegate-Protocol.h"

@class NSDictionary, NSString;
@protocol BUFullscreenVideoAdDelegate;

@interface BUFullscreenVideoAd : BUInterfaceBaseObject <BUMopubAdMarkUpDelegate, BUAdClientBiddingProtocol>
{
    id <BUFullscreenVideoAdDelegate> _delegate;
    BUFullscreenVideoAd *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUFullscreenVideoAd *iteration; // @synthesize iteration=_iteration;
@property(nonatomic) __weak id <BUFullscreenVideoAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fullscreenVideoAdCallback:(id)arg1 withType:(unsigned long long)arg2;
- (void)fullscreenVideoAdDidClickSkip:(id)arg1;
- (void)fullscreenVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)fullscreenVideoAdDidClose:(id)arg1;
- (void)fullscreenVideoAdWillClose:(id)arg1;
- (void)fullscreenVideoAdDidClick:(id)arg1;
- (void)fullscreenVideoAdDidVisible:(id)arg1;
- (void)fullscreenVideoAdWillVisible:(id)arg1;
- (void)fullscreenVideoAdVideoDataDidLoad:(id)arg1;
- (void)fullscreenVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)fullscreenVideoMaterialMetaAdDidLoad:(id)arg1;
- (id)initWithSlot:(id)arg1;
- (id)initWithSlotID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double expireTimestamp; // @dynamic expireTimestamp;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool materialMetaIsFromPreload; // @dynamic materialMetaIsFromPreload;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt; // @dynamic mediaExt;
@property(readonly) Class superclass;

@end

