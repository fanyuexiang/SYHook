//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

@class NSDictionary, NSString;

@interface BUMMediaBidResult : BUInterfaceBaseObject
{
    _Bool _win;
    long long _winnerPrice;
    NSString *_lossDescription;
    NSString *_winnerAdnID;
    NSDictionary *_ext;
    id _originNativeAdData;
    BUMMediaBidResult *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUMMediaBidResult *iteration; // @synthesize iteration=_iteration;
@property(readonly, nonatomic) id originNativeAdData; // @synthesize originNativeAdData=_originNativeAdData;
@property(readonly, copy, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(readonly, copy, nonatomic) NSString *winnerAdnID; // @synthesize winnerAdnID=_winnerAdnID;
@property(readonly, copy, nonatomic) NSString *lossDescription; // @synthesize lossDescription=_lossDescription;
@property(readonly, nonatomic) long long winnerPrice; // @synthesize winnerPrice=_winnerPrice;
@property(readonly, nonatomic) _Bool win; // @synthesize win=_win;
- (id)init;

@end
