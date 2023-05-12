//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUMediaSlotConfigInfo-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface ABUMediaSlotConfig : NSObject <ABUMediaSlotConfigInfo>
{
    _Bool _ifReuseAds;
    _Bool _ifIsReady;
    _Bool _ifPreRequest;
    NSString *_adnName;
    NSString *_customAdnName;
    NSString *_adnSlotId;
    long long _adSubType;
    NSString *_slotEcpm;
    NSString *_exchangeRate;
    long long _reqBiddingType;
    long long _loadSort;
    long long _showSort;
    double _adExpiredTime;
    long long _originType;
    NSString *_customerAdapterJson;
    NSDictionary *_multilevelSlotCpm;
    long long _mediaTimingMode;
    long long _mediaShowRulesVersion;
    NSArray *_mediaShowFreqctlRules;
    NSArray *_mediaShowPacingRules;
    long long _weight;
    NSString *_adnLogName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *adnLogName; // @synthesize adnLogName=_adnLogName;
@property(readonly, nonatomic) long long weight; // @synthesize weight=_weight;
@property(readonly, copy, nonatomic) NSArray *mediaShowPacingRules; // @synthesize mediaShowPacingRules=_mediaShowPacingRules;
@property(readonly, copy, nonatomic) NSArray *mediaShowFreqctlRules; // @synthesize mediaShowFreqctlRules=_mediaShowFreqctlRules;
@property(readonly, nonatomic) long long mediaShowRulesVersion; // @synthesize mediaShowRulesVersion=_mediaShowRulesVersion;
@property(readonly, nonatomic) long long mediaTimingMode; // @synthesize mediaTimingMode=_mediaTimingMode;
@property(copy, nonatomic) NSDictionary *multilevelSlotCpm; // @synthesize multilevelSlotCpm=_multilevelSlotCpm;
@property(readonly, copy, nonatomic) NSString *customerAdapterJson; // @synthesize customerAdapterJson=_customerAdapterJson;
@property(readonly, nonatomic) _Bool ifPreRequest; // @synthesize ifPreRequest=_ifPreRequest;
@property(readonly, nonatomic) _Bool ifIsReady; // @synthesize ifIsReady=_ifIsReady;
@property(readonly, nonatomic) long long originType; // @synthesize originType=_originType;
@property(readonly, nonatomic) _Bool ifReuseAds; // @synthesize ifReuseAds=_ifReuseAds;
@property(readonly, nonatomic) double adExpiredTime; // @synthesize adExpiredTime=_adExpiredTime;
@property(readonly, nonatomic) long long showSort; // @synthesize showSort=_showSort;
@property(readonly, nonatomic) long long loadSort; // @synthesize loadSort=_loadSort;
@property(readonly, nonatomic) long long reqBiddingType; // @synthesize reqBiddingType=_reqBiddingType;
@property(readonly, copy, nonatomic) NSString *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property(readonly, copy, nonatomic) NSString *slotEcpm; // @synthesize slotEcpm=_slotEcpm;
@property(readonly, nonatomic) long long adSubType; // @synthesize adSubType=_adSubType;
@property(readonly, copy, nonatomic) NSString *adnSlotId; // @synthesize adnSlotId=_adnSlotId;
@property(readonly, copy, nonatomic) NSString *customAdnName; // @synthesize customAdnName=_customAdnName;
@property(readonly, copy, nonatomic) NSString *adnName; // @synthesize adnName=_adnName;
- (void)_setupLocalProperties;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSplashMediaRit:(id)arg1 andName:(id)arg2;
- (id)init;
- (id)extension;
- (id)mediaSlotConfigWithMediationSlotID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

