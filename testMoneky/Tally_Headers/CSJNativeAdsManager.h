//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJMopubAdMarkUpDelegate-Protocol.h"
#import "CSJNativeExpressAdConverterDelegate-Protocol.h"

@class CSJAdSlot, CSJNativeExpressAdConverter, NSArray, NSMutableArray, NSString;
@protocol CSJNativeAdsManagerDelegate, CSJNativeExpressAdViewDelegate;

@interface CSJNativeAdsManager : NSObject <CSJNativeExpressAdConverterDelegate, CSJMopubAdMarkUpDelegate>
{
    _Bool _didSetADM;
    CSJAdSlot *_adslot;
    NSArray *_data;
    id <CSJNativeAdsManagerDelegate> _delegate;
    id <CSJNativeExpressAdViewDelegate> _nativeExpressAdViewDelegate;
    NSMutableArray *_adData;
    CSJNativeExpressAdConverter *_nativeExpressAdConverter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didSetADM; // @synthesize didSetADM=_didSetADM;
@property(retain, nonatomic) CSJNativeExpressAdConverter *nativeExpressAdConverter; // @synthesize nativeExpressAdConverter=_nativeExpressAdConverter;
@property(retain, nonatomic) NSMutableArray *adData; // @synthesize adData=_adData;
@property(nonatomic) __weak id <CSJNativeExpressAdViewDelegate> nativeExpressAdViewDelegate; // @synthesize nativeExpressAdViewDelegate=_nativeExpressAdViewDelegate;
@property(nonatomic) __weak id <CSJNativeAdsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) CSJAdSlot *adslot; // @synthesize adslot=_adslot;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
@property(nonatomic) struct CGSize adSize;
- (void)safeDelegate_nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
- (void)nativeExpressAdConverter:(id)arg1 nativeExpressAdViewArray:(id)arg2;
- (id)expressAdViewDismissDelegateInNativeExpressAdConverter:(id)arg1;
- (id)expressAdViewDelegateInNativeExpressAdConverter:(id)arg1;
- (void)safeDelegate_nativeAdsManager:(id)arg1 didFailWithError:(id)arg2;
- (void)safeDelegate_nativeAdsManagerSuccessToLoad:(id)arg1 nativeAds:(id)arg2 isMopub:(_Bool)arg3;
- (void)reportReceiveUnionPlatformMaterialsTimeTracker;
- (id)assemblyNativeADWithMaterials:(id)arg1 auctionPrice:(id)arg2;
- (id)assemblyNativeADWithMaterials:(id)arg1;
- (void)pbu_handleAdmMaterial:(id)arg1 successLoadVideo:(CDUnknownBlockType)arg2;
- (_Bool)pbu_markupAsyncPackageAdm:(id)arg1 successLoadVideo:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (_Bool)pbu_markupPreFetchAdm:(id)arg1 successLoadVideo:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (_Bool)pbu_markupPreCacheAdm:(id)arg1 successLoadVideo:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)pbu_markupAdm:(id)arg1 successLoadVideo:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setMopubAdMarkUp:(id)arg1 successLoadVideo:(CDUnknownBlockType)arg2;
- (id)biddingToken;
- (void)setMopubAdMarkUp:(id)arg1;
- (void)setAdMarkup:(id)arg1;
- (void)preloadImages;
- (void)preLoadMiddlePage;
- (void)preLoadVideoData;
- (void)fetchAdDataWithTimes:(long long)arg1;
- (void)preLoadMiddlePageWithAd:(id)arg1;
- (void)loadAdDataWithCount:(long long)arg1 invokeByPublisher:(_Bool)arg2;
- (void)loadAdDataWithCount:(long long)arg1;
- (id)init;
- (id)initWithSlot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

