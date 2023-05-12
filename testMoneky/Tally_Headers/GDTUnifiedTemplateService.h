//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTAdService.h"

@interface GDTUnifiedTemplateService : GDTAdService
{
}

+ (id)fakeAdModel:(id)arg1;
+ (_Bool)isInterstitialAdType:(long long)arg1;
+ (id)requestBaseData:(id)arg1;
+ (id)parseAdResultWithAdArray:(id)arg1 dataDic:(id)arg2 modelType:(long long)arg3 requestData:(id)arg4;
+ (void)handleResponse:(id)arg1 data:(id)arg2 modelType:(long long)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 dicArray:(id)arg6 dataDict:(id)arg7 hitLocalCache:(_Bool)arg8;
+ (void)preloadInterstitialAdWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)fetchUnifiedTemplateAdModelWithParams:(id)arg1 modelType:(long long)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)fetchInterstitialAdModelWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)fetchExpressAdModelWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)fetchBannerAdModelWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

