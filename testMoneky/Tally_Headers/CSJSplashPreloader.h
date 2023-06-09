//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJAdSlot, CSJMaterialMeta, NSDateFormatter, NSError, NSMutableArray, NSMutableDictionary, NSNumber;
@protocol CSJAd;

@interface CSJSplashPreloader : NSObject
{
    double _timeout;
    CSJMaterialMeta<CSJAd> *_materialMeta;
    CSJAdSlot *_slot;
    NSError *_error;
    NSNumber *_is_cache;
    NSMutableArray *_bu_slotidAry;
    NSMutableDictionary *_downloadTokens;
    NSDateFormatter *_mmDateFormatter;
}

+ (id)defaultPersistence;
+ (id)sharedPreloader;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *mmDateFormatter; // @synthesize mmDateFormatter=_mmDateFormatter;
@property(retain, nonatomic) NSMutableDictionary *downloadTokens; // @synthesize downloadTokens=_downloadTokens;
@property(retain, nonatomic) NSMutableArray *bu_slotidAry; // @synthesize bu_slotidAry=_bu_slotidAry;
@property(retain, nonatomic) NSNumber *is_cache; // @synthesize is_cache=_is_cache;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CSJAdSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) CSJMaterialMeta<CSJAd> *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)p_saveMaterialToDisk:(id)arg1 slot:(id)arg2;
- (void)preLoadMaterialMetaFromNetwork:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)recursivePreLoadMaterialMetaFromNetwork:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)p_preloadBrandVideoWithMaterialMeta:(id)arg1 videoModels:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)p_downLoadVideoWithMaterial:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)p_needPrecacheBrandVideo:(id)arg1;
- (_Bool)p_needCachedVideo:(id)arg1;
- (void)p_updateResourceImageHTTPHeaderWihtURL:(id)arg1 durationModel:(id)arg2;
- (void)p_downSplashZoomOutImage:(id)arg1;
- (void)p_downloadImageWithSlot:(id)arg1 materailMeta:(id)arg2 imageModel:(id)arg3 durationModel:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)p_loadImages:(id)arg1 slot:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)p_downLoadResourcesVideoFirst:(id)arg1 slot:(id)arg2 loadState:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)p_downLoadResourcesImageFirst:(id)arg1 slot:(id)arg2 loadState:(id)arg3 materialSucess:(CDUnknownBlockType)arg4 materialFailure:(CDUnknownBlockType)arg5;
- (void)p_loadResourceWithSlot:(id)arg1 materialMeta:(id)arg2 loadState:(id)arg3 materialSucess:(CDUnknownBlockType)arg4 materialFailure:(CDUnknownBlockType)arg5;
- (id)p_materialMetaFromCache:(id)arg1;
- (void)p_serverCheckMaterialMetaValid:(id)arg1 checkVaild:(CDUnknownBlockType)arg2;
- (void)p_loadMaterialFromCacheWithSlot:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)p_getMaterialMetaFromNetwork:(id)arg1 loadTimeInterval:(double)arg2 sucess:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)p_loadMaterialFromNetWorkWithSlot:(id)arg1 loadTimeInterval:(double)arg2 loadState:(id)arg3 materialSucess:(CDUnknownBlockType)arg4 materialFailure:(CDUnknownBlockType)arg5;
- (void)p_materialMetaForSplashBase:(id)arg1 loadTimeInterval:(double)arg2 sucess:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)deleteSplashDiskData;
- (void)materialMetaForSplash:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

@end

