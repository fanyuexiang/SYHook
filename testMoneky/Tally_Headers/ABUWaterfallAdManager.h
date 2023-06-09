//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;

@interface ABUWaterfallAdManager : NSObject
{
    _Bool _quickMode;
    long long _expectAdCount;
    NSArray *_bestMediaIDs;
    CDUnknownBlockType _didBiddingDone;
    CDUnknownBlockType _allAdLoadDone;
    CDUnknownBlockType _didTimeOut;
    NSPointerArray *_adList;
    NSPointerArray *_pList;
    NSArray *_notNeedLoadSlotIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *notNeedLoadSlotIDs; // @synthesize notNeedLoadSlotIDs=_notNeedLoadSlotIDs;
@property(retain, nonatomic) NSPointerArray *pList; // @synthesize pList=_pList;
@property(retain, nonatomic) NSPointerArray *adList; // @synthesize adList=_adList;
@property(copy, nonatomic) CDUnknownBlockType didTimeOut; // @synthesize didTimeOut=_didTimeOut;
@property(copy, nonatomic) CDUnknownBlockType allAdLoadDone; // @synthesize allAdLoadDone=_allAdLoadDone;
@property(copy, nonatomic) CDUnknownBlockType didBiddingDone; // @synthesize didBiddingDone=_didBiddingDone;
@property(copy, nonatomic) NSArray *bestMediaIDs; // @synthesize bestMediaIDs=_bestMediaIDs;
@property(nonatomic) _Bool quickMode; // @synthesize quickMode=_quickMode;
@property(nonatomic) long long expectAdCount; // @synthesize expectAdCount=_expectAdCount;
- (void)_clearEmptyFromList:(id)arg1;
- (void)_insertPackage:(id)arg1 toList:(id)arg2 usingLock:(struct _opaque_pthread_mutex_t *)arg3;
- (id)_getPriceTopAdsWithCheckAd:(_Bool)arg1 isBestAd:(_Bool *)arg2 others:(id *)arg3;
- (id)getPriceTopAdsWithCheckAd:(_Bool)arg1 isBestAd:(_Bool *)arg2 others:(id *)arg3;
- (void)serverBiddingRequestDidFinishWithMediaSlotIDs:(id)arg1;
- (void)addPackage:(id)arg1;
- (id)init;

@end

