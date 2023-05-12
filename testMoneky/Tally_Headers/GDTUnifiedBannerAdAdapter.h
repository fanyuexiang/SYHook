//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseAdAdapter.h"

#import "GDTUnifiedBannerAdNetworkAdapterProtocol-Protocol.h"
#import "GDTUnifiedBannerViewDelegate-Protocol.h"

@class GDTUnifiedBannerAdMediator, GDTUnifiedBannerView, GDTUnifiedBannerViewImp, NSString;

@interface GDTUnifiedBannerAdAdapter : GDTBaseAdAdapter <GDTUnifiedBannerViewDelegate, GDTUnifiedBannerAdNetworkAdapterProtocol>
{
    GDTUnifiedBannerAdMediator *_connector;
    GDTUnifiedBannerViewImp *_unifiedBannerViewImp;
    NSString *_placementId;
    GDTUnifiedBannerView *_gdtBannerView;
}

+ (void)updateAppId:(id)arg1 extStr:(id)arg2;
@property(nonatomic) __weak GDTUnifiedBannerView *gdtBannerView; // @synthesize gdtBannerView=_gdtBannerView;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(retain, nonatomic) GDTUnifiedBannerViewImp *unifiedBannerViewImp; // @synthesize unifiedBannerViewImp=_unifiedBannerViewImp;
@property(nonatomic) __weak GDTUnifiedBannerAdMediator *connector; // @synthesize connector=_connector;
- (void).cxx_destruct;
- (void)gdtAdComplainSuccess:(id)arg1;
- (void)unifiedBannerViewWillClose:(id)arg1;
- (void)unifiedBannerViewWillLeaveApplication:(id)arg1;
- (void)unifiedBannerViewDidDismissFullScreenModal:(id)arg1;
- (void)unifiedBannerViewWillDismissFullScreenModal:(id)arg1;
- (void)unifiedBannerViewDidPresentFullScreenModal:(id)arg1;
- (void)unifiedBannerViewWillPresentFullScreenModal:(id)arg1;
- (void)unifiedBannerViewClicked:(id)arg1;
- (void)unifiedBannerViewWillExpose:(id)arg1;
- (void)unifiedBannerViewFailedToLoad:(id)arg1 error:(id)arg2;
- (void)unifiedBannerViewDidLoad:(id)arg1;
- (id)adImp;
- (id)eCPMLevel;
- (long long)eCPM;
- (void)showBannerAd;
- (void)loadAdOnBannerView:(id)arg1 currentViewController:(id)arg2;
- (id)initWithAdNetworkConnector:(id)arg1 posId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
