//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUConfigActionListener-Protocol.h"
#import "ABUCustomAdapterBridgeExtension-Protocol.h"
#import "ABUMediationWaterfallDelegate-Protocol.h"

@class ABUAdLoadConfig, ABUAdPackage, NSArray, NSDictionary, NSMutableDictionary, NSString, UIViewController;
@protocol ABUMediationWaterfall;

@interface ABUBaseAd : NSObject <ABUConfigActionListener, ABUCustomAdapterBridgeExtension, ABUMediationWaterfallDelegate>
{
    _Bool _bidNotify;
    _Bool _didDownloadVideo;
    long long _requestType;
    unsigned long long _expectAdCount;
    NSString *_rit;
    NSString *_scenarioID;
    double _mediationFillTimestamp;
    NSMutableDictionary *_adapterToAdPackage;
    ABUAdLoadConfig *_loadConfig;
    unsigned long long _controlStatus;
    UIViewController *_viewController;
    CDUnknownBlockType _completeCallback;
    NSMutableDictionary *_params;
    NSDictionary *_preloadInfo;
}

+ (void)removeFromHandleShowPoolForView:(id)arg1;
+ (id)adHandleShowPool;
+ (id)adHandleLoadPool;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *preloadInfo; // @synthesize preloadInfo=_preloadInfo;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType completeCallback; // @synthesize completeCallback=_completeCallback;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) unsigned long long controlStatus; // @synthesize controlStatus=_controlStatus;
@property(retain, nonatomic) ABUAdLoadConfig *loadConfig; // @synthesize loadConfig=_loadConfig;
@property(retain, nonatomic) NSMutableDictionary *adapterToAdPackage; // @synthesize adapterToAdPackage=_adapterToAdPackage;
@property(nonatomic) double mediationFillTimestamp; // @synthesize mediationFillTimestamp=_mediationFillTimestamp;
@property(nonatomic) _Bool didDownloadVideo; // @synthesize didDownloadVideo=_didDownloadVideo;
@property(nonatomic) _Bool bidNotify; // @synthesize bidNotify=_bidNotify;
@property(copy, nonatomic) NSString *scenarioID; // @synthesize scenarioID=_scenarioID;
@property(readonly, copy, nonatomic) NSString *rit; // @synthesize rit=_rit;
@property(nonatomic) unsigned long long expectAdCount; // @synthesize expectAdCount=_expectAdCount;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (long long)isRepeatClickWithAd:(id)arg1;
- (long long)isRepeatShowWithAd:(id)arg1;
- (void)_trackMediaClickListenWithMediaSlotConfig:(id)arg1 andPackage:(id)arg2;
- (void)_trackMediaShowFailListenWithAdPackage:(id)arg1 andAdState:(unsigned long long)arg2 andError:(id)arg3;
- (void)_trackMediaShowListenWithMediaSlotConfig:(id)arg1 andPackage:(id)arg2 isMock:(_Bool)arg3;
- (void)_trackMediaShowWithMediaSlotConfig:(id)arg1 andPackage:(id)arg2 isMock:(_Bool)arg3;
- (void)_trackMediaShowFailWithInfo:(id)arg1 andError:(id)arg2;
- (void)_trackMediaShowIsReadyWithAllLoadedAdInfo:(id)arg1 andReadyShowAd:(id)arg2;
- (void)trackMediaShowIsReadyWithAllLoadedAdInfo:(id)arg1 andReadyShowAd:(id)arg2;
- (void)_trackMediaWillShow:(id)arg1;
- (void)_trackBiddingAdmCacheWithMediaSlotConfig:(id)arg1 package:(id)arg2;
- (void)_trackMediaCacheSuccessWithMediaSlotConfig:(id)arg1 package:(id)arg2 isMock:(_Bool)arg3;
- (void)trackMediaCacheSuccessWithPackage:(id)arg1 isMock:(_Bool)arg2;
- (unsigned long long)mediationReqTypeWithError:(id)arg1;
- (void)_trackTotalLoadFail:(id)arg1 andNextLinkID:(id)arg2;
- (void)_trackMediationRequestWithError:(id)arg1 andNextLinkID:(id)arg2;
- (void)_trackGetConfigError:(id)arg1 backup:(_Bool)arg2;
- (void)configPreviewAdInfos:(id)arg1;
- (void)_dealBaseActionWhenAdShowListenCalling:(id)arg1;
- (void)_dealBaseActionWhenAdShowCalling:(id)arg1;
- (void)setConfigSuccessCallback:(CDUnknownBlockType)arg1;
- (_Bool)hasAdConfig;
- (id)getAdLoadInfoList;
- (id)waterfallFillFailMessages;
- (_Bool)didFinishPreloadCache;
- (void)setDidFinishPreloadCache:(_Bool)arg1;
@property(retain, nonatomic) ABUAdPackage *showAdPackage;
@property(retain, nonatomic) NSObject<ABUMediationWaterfall> *waterfall;
@property(readonly, nonatomic) _Bool preloadCacheMode;
@property(readonly) NSObject<ABUMediationWaterfall> *currentWaterfall;
- (id)_adReuseIdentifier;
- (id)preloadAdWithType:(long long)arg1;
- (void)_adLoadDidSuccess;
- (_Bool)_enablePreload;
- (_Bool)_enablePreloadCache:(long long)arg1;
- (id)viewControllerForPresentingModalView;
- (void)adViewDidClick:(id)arg1;
- (void)adViewDidDownloadVideoWithAdPackage:(id)arg1;
- (void)adViewDidClose:(id)arg1;
- (_Bool)isAdnPreloadWithAd:(id)arg1;
- (void)adViewCallAdnShowFailListenWithAd:(id)arg1 andAdState:(unsigned long long)arg2 andError:(id)arg3;
- (void)adViewDidShow:(id)arg1;
- (void)adViewCallAdnShow:(id)arg1;
- (void)adViewShowFailWithInfo:(id)arg1 andError:(id)arg2;
- (void)adViewWillShow:(id)arg1;
- (_Bool)enableSetCountForPlatform;
- (_Bool)enableReload;
- (int)logType;
- (long long)adType;
- (_Bool)enableCurrentAdnPreload;
- (_Bool)enablePreloadCache;
- (id)createWaterfallFailedWithLoadConfig:(id)arg1;
- (unsigned long long)moduleControl;
@property(readonly, copy, nonatomic) NSArray *reuseIdentifierFactors;
- (void)videoCacheDidTimeout;
@property(readonly, nonatomic) _Bool needHandleCacheTimeout;
- (void)adnAdDidFinishLoad:(id)arg1 error:(id)arg2;
- (void)adCustomTokensInfoDidCollected:(id)arg1 andResumeHandler:(CDUnknownBlockType)arg2;
- (void)adLoadDidFailedWithError:(id)arg1;
- (void)adLoadDidSuccess;
- (id)adPackageWithAdapter:(id)arg1;
- (void)waterfall:(id)arg1 loadFailedMediaAdWithError:(id)arg2;
- (void)waterfall:(id)arg1 didLoadMediaAd:(id)arg2 withAdapter:(id)arg3;
- (void)waterfall:(id)arg1 willStartLoadWithParams:(id)arg2 error:(id)arg3;
- (void)waterfall:(id)arg1 didCollectedAdsTokens:(id)arg2 andResumeHandler:(CDUnknownBlockType)arg3;
- (void)waterfall:(id)arg1 loadFailedWithError:(id)arg2;
- (void)waterfallDidLoadSuccess:(id)arg1;
- (id)cacheRitList;
- (id)multiBiddingEcpmInfos;
- (id)getCBE;
- (id)loadPriceOfTargetPackage:(id)arg1;
- (id)targetPackage;
- (id)getCurrentBestEcpmInfo;
- (id)getMediaExtraInfo;
- (id)extraDataWithPackage:(id)arg1;
- (id)getShowEcpmInfo;
- (id)getAdNetworkRitId;
- (id)getPreEcpm;
- (id)getAdNetworkPlatformName;
- (void)configLoadForLocalDidFailed_V2;
- (void)configLoadForLocalDidSuccess_V2;
@property(readonly, copy, nonatomic) NSString *linkID;
@property(readonly, nonatomic) _Bool isLoading;
- (_Bool)shouldStartLoadAd:(id *)arg1;
- (void)addParam:(id)arg1 withKey:(id)arg2;
- (void)loadAdDataWithConfig:(id)arg1;
- (void)bindLinkID;
- (void)loadAdDataWithMediaSlotConfigIDs:(id)arg1 sign:(long long)arg2;
- (void)preloadByUser;
- (void)loadAdData;
- (id)initWithMediationRit:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeFromHandleShowPool;
- (void)addToHandleShowPoolForView:(id)arg1;
- (void)addToHandleLoadPool;
- (void)removeFromHandleLoadPool;
- (void)_removeFromHandleLoadPool;
- (_Bool)allowAdapterCallbackShow;
- (void)detectAdDelegate;
- (void)ex_loadAdData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
