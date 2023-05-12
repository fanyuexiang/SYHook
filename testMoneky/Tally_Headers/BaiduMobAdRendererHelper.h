//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdActionComposer, BaiduMobAdInstance, BaiduMobAdRequestInfo, BaiduMobAdResponse, NSDictionary, NSMutableArray, NSString, UIView, UIViewController;
@protocol IBaiduMobAdRenderEventDelegate;

@interface BaiduMobAdRendererHelper : NSObject
{
    BaiduMobAdInstance *_adInstance;
    BaiduMobAdRequestInfo *_adRequestInfo;
    BaiduMobAdResponse *_adResponse;
    NSMutableArray *_adInstanceArray;
    id <IBaiduMobAdRenderEventDelegate> _adRenderEventDelegate;
    UIView *_slotBase;
    UIViewController *_slotBaseVC;
    BaiduMobAdActionComposer *_composer;
    NSString *_cpuLoadUrlParam;
    NSDictionary *_bidWinInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *bidWinInfo; // @synthesize bidWinInfo=_bidWinInfo;
@property(retain, nonatomic) NSString *cpuLoadUrlParam; // @synthesize cpuLoadUrlParam=_cpuLoadUrlParam;
@property(retain, nonatomic) BaiduMobAdActionComposer *composer; // @synthesize composer=_composer;
@property(nonatomic) __weak UIViewController *slotBaseVC; // @synthesize slotBaseVC=_slotBaseVC;
@property(nonatomic) __weak UIView *slotBase; // @synthesize slotBase=_slotBase;
@property(nonatomic) __weak id <IBaiduMobAdRenderEventDelegate> adRenderEventDelegate; // @synthesize adRenderEventDelegate=_adRenderEventDelegate;
@property(retain, nonatomic) NSMutableArray *adInstanceArray; // @synthesize adInstanceArray=_adInstanceArray;
@property(retain, nonatomic) BaiduMobAdResponse *adResponse; // @synthesize adResponse=_adResponse;
@property(retain, nonatomic) BaiduMobAdRequestInfo *adRequestInfo; // @synthesize adRequestInfo=_adRequestInfo;
@property(retain, nonatomic) BaiduMobAdInstance *adInstance; // @synthesize adInstance=_adInstance;
- (void)sendMonWinTrackLogFirstStamp:(double)arg1 WithLastStamp:(double)arg2;
- (void)sendActionButtonLogWithInfo:(id)arg1;
- (void)sendBiddingResult:(id)arg1 victory:(_Bool)arg2;
- (void)processEvent:(int)arg1 info:(id)arg2;
- (void)requestTimelinePause;
- (void)requestTimelineResume;
- (id)getPropertyString;
- (id)curl;
- (id)getSN;
- (void)baiduLogoClick:(id)arg1 targetUrl:(id)arg2;
- (void)baiduLogoClick:(id)arg1;
- (void)sendCpuTypeLog:(id)arg1;
- (void)sendFeedsTypeLog:(id)arg1;
- (void)trackVideoEvent:(int)arg1 withTrackInfo:(id)arg2;
- (void)trackVideoEvent:(int)arg1 withCurrentTime:(double)arg2;
- (id)mobVFrozenArr;
- (id)mobVPlayArr;
- (id)mobApoActArr;
- (id)mobVMuteClickArr;
- (id)mobVReadyPlayArr;
- (id)mobVPlayFailArr;
- (id)monVPlayEndArray;
- (id)monVReplayArray;
- (id)monVCacheExpireArray;
- (id)monVCacheFailArray;
- (id)monVCacheSuccessArray;
- (id)monVClickStartCardArray;
- (id)monVClickArray;
- (id)monVFullScreenArray;
- (id)monVCloseArray;
- (id)monVStartArray;
- (id)monShowArray;
- (id)moniterDictionary;
- (id)getParameter:(id)arg1;
- (void)sendCpuClickLog:(id)arg1 isAdLog:(_Bool)arg2;
- (void)sendClickLog;
- (void)sendShowLog;
- (void)sendCPUShowLog;
- (id)apoUrl:(id)arg1;
- (void)interNativeAdClick:(id)arg1 isDownloadDirect:(_Bool)arg2;
- (void)nativeCPUClick:(id)arg1 info:(id)arg2;
- (void)nativeAdClick:(id)arg1;
- (void)nativeAdClickDownloadDirect:(id)arg1;

@end

