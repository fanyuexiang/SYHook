//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ABURitInfo : NSObject
{
    NSString *_adnName;
    NSString *_customAdnName;
    NSString *_slotID;
    NSString *_levelTag;
    NSString *_ecpm;
    long long _biddingType;
    NSString *_errorMsg;
    NSString *_requestID;
    NSString *_adRitType;
    NSNumber *_segmentId;
    NSNumber *_abtestId;
    NSString *_channel;
    NSString *_sub_channel;
    NSString *_scenarioId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *scenarioId; // @synthesize scenarioId=_scenarioId;
@property(readonly, copy, nonatomic) NSString *sub_channel; // @synthesize sub_channel=_sub_channel;
@property(readonly, copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) NSNumber *abtestId; // @synthesize abtestId=_abtestId;
@property(readonly, nonatomic) NSNumber *segmentId; // @synthesize segmentId=_segmentId;
@property(readonly, copy, nonatomic) NSString *adRitType; // @synthesize adRitType=_adRitType;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(readonly, nonatomic) long long biddingType; // @synthesize biddingType=_biddingType;
@property(readonly, copy, nonatomic) NSString *ecpm; // @synthesize ecpm=_ecpm;
@property(readonly, copy, nonatomic) NSString *levelTag; // @synthesize levelTag=_levelTag;
@property(readonly, copy, nonatomic) NSString *slotID; // @synthesize slotID=_slotID;
@property(readonly, copy, nonatomic) NSString *customAdnName; // @synthesize customAdnName=_customAdnName;
@property(readonly, copy, nonatomic) NSString *adnName; // @synthesize adnName=_adnName;
- (void)updateRitInfoWithPackage:(id)arg1 withAd:(id)arg2;
- (id)initWithShowPackage:(id)arg1 withAd:(id)arg2;
- (id)initWithAdPackage:(id)arg1 withAd:(id)arg2 withLoadPrice:(id)arg3;

@end

