//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

@class BUSize, NSDictionary, NSMutableArray, NSString;

@interface BUAdSlot : BUInterfaceBaseObject
{
    BUAdSlot *_iteration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUAdSlot *iteration; // @synthesize iteration=_iteration;
- (id)init;

// Remaining properties
@property(nonatomic) long long AdType; // @dynamic AdType;
@property(copy, nonatomic) NSString *ID; // @dynamic ID;
@property(nonatomic) long long adLoadType; // @dynamic adLoadType;
@property(nonatomic) struct CGSize adSize; // @dynamic adSize;
@property(nonatomic) long long adloadSeq; // @dynamic adloadSeq;
@property(copy, nonatomic) NSDictionary *ext; // @dynamic ext;
@property(retain, nonatomic) BUSize *iconSize; // @dynamic iconSize;
@property(retain, nonatomic) BUSize *imgSize; // @dynamic imgSize;
@property(retain, nonatomic) NSMutableArray *imgSizeArray; // @dynamic imgSizeArray;
@property(nonatomic) _Bool isOriginAd; // @dynamic isOriginAd;
@property(nonatomic) _Bool isSupportDeepLink; // @dynamic isSupportDeepLink;
@property(nonatomic) long long position; // @dynamic position;
@property(copy, nonatomic) NSString *previewAdID; // @dynamic previewAdID;
@property(copy, nonatomic) NSString *previewCreativeID; // @dynamic previewCreativeID;
@property(copy, nonatomic) NSString *primeRit; // @dynamic primeRit;
@property(nonatomic) _Bool supportRenderControl; // @dynamic supportRenderControl;
@property(copy, nonatomic) NSString *userData; // @dynamic userData;

@end

