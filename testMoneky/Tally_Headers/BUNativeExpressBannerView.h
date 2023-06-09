//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseView.h"

#import "BUAdClientBiddingProtocol-Protocol.h"
#import "BUMopubAdMarkUpDelegate-Protocol.h"

@class NSDictionary, NSString;
@protocol BUNativeExpressBannerViewDelegate;

@interface BUNativeExpressBannerView : BUInterfaceBaseView <BUMopubAdMarkUpDelegate, BUAdClientBiddingProtocol>
{
    id <BUNativeExpressBannerViewDelegate> _delegate;
    long long _interval;
    NSDictionary *_mediaExt;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt; // @synthesize mediaExt=_mediaExt;
@property(readonly, nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) __weak id <BUNativeExpressBannerViewDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

