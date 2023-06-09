//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJAppStorePreloadList, NSMutableArray;

@interface CSJAppStoreManager : NSObject
{
    _Bool _preloadOnlyWIFI;
    _Bool _isReusePreload;
    _Bool _isPresentAnimated;
    unsigned long long _maxPreloadCount;
    double _appStore_top;
    CSJAppStorePreloadList *_preloadList;
    NSMutableArray *_presentingItemList;
}

+ (_Bool)isAppStoreURL:(id)arg1;
+ (id)appIDInURL:(id)arg1;
+ (id)duplicatedControllerWithAppID:(id)arg1 dismiassAnimated:(_Bool)arg2;
+ (void)clearPreloadCacheBySKController:(id)arg1;
+ (void)clearPreloadCacheByAppID:(id)arg1;
+ (_Bool)hasControllerPreloadedByAppID:(id)arg1;
+ (id)controllerPreloadedByAppID:(id)arg1;
+ (long long)openAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 adModel:(id)arg3 byController:(id)arg4 presentCompletion:(CDUnknownBlockType)arg5 dismissCompletion:(CDUnknownBlockType)arg6;
+ (long long)openAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 downloadUrl:(id)arg3 adModel:(id)arg4 byController:(id)arg5 presentCompletion:(CDUnknownBlockType)arg6 dismissCompletion:(CDUnknownBlockType)arg7;
+ (long long)openAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 byController:(id)arg3 presentCompletion:(CDUnknownBlockType)arg4 dismissCompletion:(CDUnknownBlockType)arg5;
+ (long long)openAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 byController:(id)arg3;
+ (void)preloadAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 adModel:(id)arg3 isDuplicate:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)preloadAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 adModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)preloadAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)preloadAppStoreControllerWithAppID:(id)arg1 param:(id)arg2;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *presentingItemList; // @synthesize presentingItemList=_presentingItemList;
@property(retain, nonatomic) CSJAppStorePreloadList *preloadList; // @synthesize preloadList=_preloadList;
@property(nonatomic) double appStore_top; // @synthesize appStore_top=_appStore_top;
@property(nonatomic) _Bool isPresentAnimated; // @synthesize isPresentAnimated=_isPresentAnimated;
@property(nonatomic) _Bool isReusePreload; // @synthesize isReusePreload=_isReusePreload;
@property(nonatomic) unsigned long long maxPreloadCount; // @synthesize maxPreloadCount=_maxPreloadCount;
@property(nonatomic) _Bool preloadOnlyWIFI; // @synthesize preloadOnlyWIFI=_preloadOnlyWIFI;
- (id)currentPresentingItemList;
- (_Bool)isPresenting;
@property(readonly, nonatomic) long long supportPreloadType;
- (void)clearPreloadCache;
- (void)clearPreloadCacheBySKController:(id)arg1;
- (void)clearPreloadCacheByAppID:(id)arg1;
- (long long)openAppStoreOpenTypeWithAppID:(id)arg1 downloadUrl:(id)arg2;
- (long long)openAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 downloadUrl:(id)arg3 adModel:(id)arg4 byController:(id)arg5 presentCompletion:(CDUnknownBlockType)arg6 dismissCompletion:(CDUnknownBlockType)arg7;
- (long long)openAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 adModel:(id)arg3 byController:(id)arg4 presentCompletion:(CDUnknownBlockType)arg5 dismissCompletion:(CDUnknownBlockType)arg6;
- (_Bool)hasControllerPreloadedByAppID:(id)arg1;
- (id)controllerPreloadedByAppID:(id)arg1;
- (void)preloadAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 adModel:(id)arg3 isDuplicate:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)preloadAppStoreControllerWithAppID:(id)arg1 param:(id)arg2 adModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)duplicatedControllerPreloadedByAppID:(id)arg1 dismiassAnimated:(_Bool)arg2;
- (id)init;

@end

