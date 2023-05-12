//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTAdService : NSObject
{
}

+ (id)addRenderTypeOnExposureUrl:(id)arg1 exposureUrl:(id)arg2;
+ (void)recordS2SWithoutTokenErrorWithPlacementId:(id)arg1 adType:(long long)arg2;
+ (void)recordS2SRequestIfNeededWithData:(id)arg1;
+ (void)recordS2SRequestResultIfNeededWithData:(id)arg1 ret:(long long)arg2;
+ (void)addExposurePriceToAdModel:(id)arg1 price:(long long)arg2;
+ (id)winPriceBaseInfo;
+ (void)reportNOJoinBidding:(id)arg1 errorCode:(long long)arg2 winPrice:(long long)arg3;
+ (void)setupMsdkBiddingAdModel:(id)arg1 info:(id)arg2;
+ (_Bool)devtoolMockData:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)baseUrlWithServerType:(long long)arg1 isFromS2S:(_Bool)arg2;
+ (void)fetchAdWithRequestData:(id)arg1 threadId:(id)arg2 retryTimes:(long long)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (void)innerFetchAdWithRequestData:(id)arg1 threadId:(id)arg2 retryTimes:(long long)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (void)exposureVideoAdWithURL:(id)arg1 viewId:(id)arg2 videoInfoDict:(id)arg3 threadId:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (void)exposureAdWithURL:(id)arg1 threadId:(id)arg2 paramsHeader:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)reportThirdPartyUrlWithList:(id)arg1 replacementData:(id)arg2 reportType:(long long)arg3;
+ (void)reportVastEventWithAdModel:(id)arg1 eventType:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)exposureAdWithAdModel:(id)arg1 replacementData:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)exposureAdWithAdModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)exposureAdTraceIdSet;
+ (void)sendIPv4WithAdModel:(id)arg1;
+ (void)sendEmptyOrderWithAdModel:(id)arg1;
+ (void)checkSettingUpdateWithSeq:(long long)arg1;
+ (id)logoUrlWithAdModel:(id)arg1 type:(long long)arg2;
+ (id)logoUrlWithAdModel:(id)arg1;
+ (long long)convertAdTypefromString:(id)arg1;
+ (_Bool)isPlacementIdOffline:(id)arg1;

@end

