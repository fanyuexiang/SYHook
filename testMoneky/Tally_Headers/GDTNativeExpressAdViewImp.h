//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdContentViewDelegate-Protocol.h"
#import "GDTAdViewExposureWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTBizVideoPlayerViewDelegate-Protocol.h"
#import "GDTClickFacadeDelegate-Protocol.h"
#import "GDTNativeExpressAdViewAdapterProtocol-Protocol.h"
#import "GDTNativeExpressProAdViewDelegate-Protocol.h"
#import "GDTUnifiedTemplateViewDelegate-Protocol.h"

@class GDTADActiveInformation, GDTADConfiguration, GDTAdViewExposureWithAntiSpamChecker, GDTClickFacade, GDTNativeExpressAdView, GDTNativeExpressProAdModel, GDTNegativeFeedbackAlertController, GDTVideoConfig, NSString, UIView, UIViewController;
@protocol GDTNativeExpressAdDelegete, GDTTemplateViewProtocol;

@interface GDTNativeExpressAdViewImp : NSObject <GDTNativeExpressProAdViewDelegate, GDTUnifiedTemplateViewDelegate, GDTAdContentViewDelegate, GDTBizVideoPlayerViewDelegate, GDTAdViewExposureWithAntiSpamCheckerDelegate, GDTClickFacadeDelegate, GDTNativeExpressAdViewAdapterProtocol>
{
    _Bool _isReady;
    _Bool _isVideoAd;
    _Bool _videoAutoPlayOnWWAN;
    _Bool _videoMuted;
    _Bool _detailPageVideoMuted;
    UIViewController *_controller;
    GDTNativeExpressAdView *_gdtExpressAdView;
    id <GDTNativeExpressAdDelegete> _delegate;
    GDTNativeExpressProAdModel *_adModel;
    GDTVideoConfig *_videoConfig;
    long long _renderType;
    UIView<GDTTemplateViewProtocol> *_innerTemplateView;
    GDTAdViewExposureWithAntiSpamChecker *_viewExposureChecker;
    GDTClickFacade *_clickFacade;
    GDTNegativeFeedbackAlertController *_alertController;
    GDTADActiveInformation *_adInfomation;
    GDTADConfiguration *_adConfiguration;
    struct CGSize _adSize;
}

@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(retain, nonatomic) GDTADConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(retain, nonatomic) GDTADActiveInformation *adInfomation; // @synthesize adInfomation=_adInfomation;
@property(retain, nonatomic) GDTNegativeFeedbackAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) GDTClickFacade *clickFacade; // @synthesize clickFacade=_clickFacade;
@property(retain, nonatomic) GDTAdViewExposureWithAntiSpamChecker *viewExposureChecker; // @synthesize viewExposureChecker=_viewExposureChecker;
@property(retain, nonatomic) UIView<GDTTemplateViewProtocol> *innerTemplateView; // @synthesize innerTemplateView=_innerTemplateView;
@property(nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(retain, nonatomic) GDTVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(retain, nonatomic) GDTNativeExpressProAdModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) _Bool detailPageVideoMuted; // @synthesize detailPageVideoMuted=_detailPageVideoMuted;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(nonatomic) _Bool videoAutoPlayOnWWAN; // @synthesize videoAutoPlayOnWWAN=_videoAutoPlayOnWWAN;
@property(nonatomic) __weak id <GDTNativeExpressAdDelegete> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GDTNativeExpressAdView *gdtExpressAdView; // @synthesize gdtExpressAdView=_gdtExpressAdView;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (_Bool)supportNativeEndcard;
- (long long)GDTfunctionx5PECv;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)GDTfunctionm6tGQG;
- (id)player;
- (void)GDTfunctiono6lUvv;
- (void)autoPlay;
- (void)GDTfunctionf9FpGH;
- (void)GDTfunctiona5niFi:(id)arg1;
- (void)GDTfunctionr1pGyp;
- (void)GDTfunctions4VuM4;
- (void)GDTfunctionl0jnur;
- (void)GDTfunctionm3ITfn;
- (void)GDTfunctiona3U30I;
- (void)GDTfunctionl0t5ti;
- (void)GDTfunctionx0UB6q:(id)arg1;
- (void)click:(id)arg1;
- (void)GDTfunctioni3pn1r:(id)arg1;
- (void)GDTfunctioni5Q9Nc;
- (void)GDTfunctionb6kpsI:(long long)arg1 clickParam:(id)arg2;
- (void)GDTfunctionu27moL;
- (void)GDTfunctionh4ml4D;
- (void)GDTfunctiond4aylv:(unsigned long long)arg1;
- (void)GDTfunctionn3fevB;
- (void)GDTfunctionp8Tvoh;
- (void)GDTfunctione11sT4;
- (void)GDTfunctionk4Jvwk;
- (void)GDTfunctionb3G1wo;
- (void)GDTfunctionw3OHHh;
- (void)GDTfunctionz6y2AE;
- (void)GDTfunctionq6Ney7;
- (void)GDTfunctionq6GGaM;
- (void)GDTfunctions33OsF;
- (void)GDTfunctionx9HsUc;
- (void)renderFailCallback;
- (void)renderSuccessCallback;
- (id)extraInfo;
- (_Bool)isAdValid;
@property(readonly, nonatomic) _Bool isVideoAd; // @synthesize isVideoAd=_isVideoAd;
@property(readonly, nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (double)videoPlayTime;
- (double)videoDuration;
- (void)render;
- (id)eCPMLevel;
- (long long)eCPM;
- (id)adView;
- (void)GDTfunctions4QhtW:(id)arg1 adSize:(struct CGSize)arg2;
- (void)GDTfunctiony7WUZK:(id)arg1 adSize:(struct CGSize)arg2;
- (void)GDTfunctiont1omPF:(id)arg1 adSize:(struct CGSize)arg2;
- (void)GDTfunctionh5aDT6;
- (_Bool)GDTfunctiong6HVQu:(id)arg1 adSize:(struct CGSize)arg2;
- (_Bool)GDTfunctiona0q83P:(id)arg1 size:(struct CGSize)arg2;
- (void)dealloc;
- (void)GDTfunctionp1B2XM:(unsigned long long)arg1 duration:(long long)arg2;
- (void)GDTfunctionl8Hjls:(id)arg1 error:(id)arg2;
- (void)GDTfunctiona840DO:(id)arg1;
- (void)GDTfunctiont3GlxH:(id)arg1;
- (void)GDTfunctiont4rrjb:(id)arg1 forceCloseAd:(_Bool)arg2;
- (void)GDTfunctiono39swv:(id)arg1 clickParam:(id)arg2 clickArea:(long long)arg3;
- (void)GDTfunctiond9bx68:(id)arg1;
- (void)gdt_NativeExpressProAdView:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)gdt_NativeExpressProAdViewApplicationWillEnterBackground:(id)arg1;
- (void)gdt_NativeExpressProAdViewVideoDidFinished:(id)arg1;
- (void)gdt_NativeExpressProAdViewClosed:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidDismissVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillDismissVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidDissmissScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillDissmissScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewClicked:(id)arg1;
- (void)gdt_NativeExpressProAdViewExposure:(id)arg1;
- (void)gdt_NativeExpressProAdViewRenderFail:(id)arg1;
- (void)gdt_NativeExpressProAdViewRenderSuccess:(id)arg1;
- (void)GDTfunctiony9YNrd:(unsigned long long)arg1 duration:(long long)arg2;
- (void)GDTfunctionj6Pb4J:(id)arg1;
- (void)GDTfunctionq41BtC:(id)arg1;
- (void)GDTfunctionl1UNhb:(id)arg1;
- (void)GDTfunctionc1NHF7:(id)arg1;
- (void)GDTfunctiony11u5U:(id)arg1;
- (void)GDTfunctiony0g2kS:(id)arg1;
- (void)GDTfunctionh3dZ3l:(id)arg1;
- (void)GDTfunctionc4apZN:(id)arg1;
- (void)GDTfunctionp8ca71:(id)arg1;
- (void)GDTfunctionz8FiwK:(id)arg1;
- (void)GDTfunctionx3yCR7:(id)arg1;
- (void)GDTfunctionk0rGfB:(id)arg1;
- (void)GDTfunctionj8nqgi:(id)arg1 errorCode:(unsigned long long)arg2 detailCode:(unsigned long long)arg3;
- (void)GDTfunctionu3PqhL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

