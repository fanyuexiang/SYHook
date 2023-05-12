//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseAdAdapter.h"

#import "GDTNativeExpressAdImpDelegate-Protocol.h"
#import "GDTNativeExpressAdNetworkAdapterProtocol-Protocol.h"

@class GDTNativeExpressAdImp, GDTNativeExpressAdMediator, NSArray, NSString;

@interface GDTNativeExpressAdAdapter : GDTBaseAdAdapter <GDTNativeExpressAdImpDelegate, GDTNativeExpressAdNetworkAdapterProtocol>
{
    GDTNativeExpressAdMediator *_connector;
    GDTNativeExpressAdImp *_nativeExpressImp;
    NSArray *_viewArray;
    struct CGSize _adSize;
}

+ (void)updateAppId:(id)arg1 extStr:(id)arg2;
@property(retain, nonatomic) NSArray *viewArray; // @synthesize viewArray=_viewArray;
@property(retain, nonatomic) GDTNativeExpressAdImp *nativeExpressImp; // @synthesize nativeExpressImp=_nativeExpressImp;
@property(nonatomic) __weak GDTNativeExpressAdMediator *connector; // @synthesize connector=_connector;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
- (void).cxx_destruct;
- (void)GDTfunctionp00uap:(id)arg1;
- (void)GDTfunctionl88N4F:(id)arg1;
- (void)GDTfunctionp91mCA:(id)arg1;
- (void)GDTfunctionb4fDts:(id)arg1;
- (void)GDTfunctiond7nfbe:(id)arg1;
- (void)GDTfunctionx53CJS:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)GDTfunctiong8a987:(id)arg1;
- (void)GDTfunctionn2lOJv:(id)arg1;
- (void)GDTfunctionn70u2u:(id)arg1;
- (void)GDTfunctionn8sNaC:(id)arg1;
- (void)GDTfunctiond6x62y:(id)arg1;
- (void)GDTfunctionm5ab8r:(id)arg1;
- (void)GDTfunctionn8dNAG:(id)arg1;
- (void)GDTfunctionu0Onii:(id)arg1;
- (void)GDTfunctiono0Bpjo:(id)arg1;
- (void)GDTfunctionh7YFV4:(id)arg1;
- (void)GDTfunctionp87Zkt:(id)arg1 error:(id)arg2;
- (void)GDTfunctionb3Ifq3:(id)arg1 views:(id)arg2;
- (void)loadAdWithCount:(long long)arg1;
- (id)extraInfo;
- (id)adImp;
- (long long)eCPM;
- (id)initWithAdNetworkConnector:(id)arg1 posId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool detailPageVideoMuted;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long maxVideoDuration;
@property(nonatomic) long long minVideoDuration;
@property(readonly) Class superclass;
@property(nonatomic) _Bool videoAutoPlayOnWWAN;
@property(nonatomic) _Bool videoMuted;

@end

