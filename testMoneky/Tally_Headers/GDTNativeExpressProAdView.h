//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTAdProtocol-Protocol.h"
#import "GDTAdViewExposureWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTBizVideoPlayerViewDelegate-Protocol.h"
#import "GDTClickFacadeDelegate-Protocol.h"
#import "GDTExpressViewDelegate-Protocol.h"
#import "GDTTemplateViewProtocol-Protocol.h"
#import "GDTVideoStoreViewControllerDelegate-Protocol.h"

@class GDTAdParams, GDTAdViewExposureWithAntiSpamChecker, GDTBizFeedVideoPlayerView, GDTClickFacade, GDTExpressView, GDTNegativeFeedbackAlertController, GDTUnifiedTemplateModel, GDTVideoEndCardView, NSString, UIViewController;
@protocol GDTNativeExpressProAdViewDelegate;

@interface GDTNativeExpressProAdView : UIView <GDTTemplateViewProtocol, GDTBizVideoPlayerViewDelegate, GDTVideoStoreViewControllerDelegate, GDTExpressViewDelegate, GDTClickFacadeDelegate, GDTAdViewExposureWithAntiSpamCheckerDelegate, GDTAdProtocol>
{
    _Bool _isVideoAd;
    _Bool _viewable;
    _Bool _renderFinished;
    float _pressForce;
    float _pressRadius;
    id <GDTNativeExpressProAdViewDelegate> _delegate;
    UIViewController *_controller;
    GDTUnifiedTemplateModel *_adModel;
    GDTAdParams *_adParams;
    GDTBizFeedVideoPlayerView *_videoPlayerView;
    GDTAdViewExposureWithAntiSpamChecker *_viewExposureChecker;
    GDTClickFacade *_clickFacade;
    GDTClickFacade *_clickCTAFacade;
    GDTExpressView *_expressView;
    GDTVideoEndCardView *_endcardView;
}

@property(nonatomic) float pressRadius; // @synthesize pressRadius=_pressRadius;
@property(nonatomic) float pressForce; // @synthesize pressForce=_pressForce;
@property(nonatomic) _Bool renderFinished; // @synthesize renderFinished=_renderFinished;
@property(nonatomic) _Bool viewable; // @synthesize viewable=_viewable;
@property(retain, nonatomic) GDTVideoEndCardView *endcardView; // @synthesize endcardView=_endcardView;
@property(retain, nonatomic) GDTExpressView *expressView; // @synthesize expressView=_expressView;
@property(retain, nonatomic) GDTClickFacade *clickCTAFacade; // @synthesize clickCTAFacade=_clickCTAFacade;
@property(retain, nonatomic) GDTClickFacade *clickFacade; // @synthesize clickFacade=_clickFacade;
@property(retain, nonatomic) GDTAdViewExposureWithAntiSpamChecker *viewExposureChecker; // @synthesize viewExposureChecker=_viewExposureChecker;
@property(retain, nonatomic) GDTBizFeedVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) GDTAdParams *adParams; // @synthesize adParams=_adParams;
@property(retain, nonatomic) GDTUnifiedTemplateModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) _Bool isVideoAd; // @synthesize isVideoAd=_isVideoAd;
@property(nonatomic) __weak id <GDTNativeExpressProAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initLs28pmb;
- (id)extraInfo;
- (void)GDTfunctionr1pGyp;
- (void)GDTfunctions4VuM4;
- (void)GDTfunctionl0jnur;
- (void)GDTfunctionm3ITfn;
- (void)GDTfunctiona3U30I;
- (void)GDTfunctionf9FpGH;
- (void)GDTfunctiona5niFi:(id)arg1;
- (void)GDTfunctionf1KIgS:(id)arg1;
- (void)GDTfunctiono8hPyC:(id)arg1 finalAdSize:(struct CGSize)arg2 playerFrame:(struct CGRect)arg3;
- (void)GDTfunctionn9TW1q:(id)arg1 forceCloseAd:(_Bool)arg2;
- (void)GDTfunctiono6BMDa:(id)arg1 clickParamsFromH5:(id)arg2 CTAType:(long long)arg3;
- (void)GDTfunctionc4Rxrz:(id)arg1 error:(unsigned long long)arg2;
- (void)GDTfunctions14Ftc:(id)arg1 createVideoCorners:(unsigned long long)arg2 radius:(double)arg3;
- (void)GDTfunctionc2RUGZ:(id)arg1 finalAdSize:(struct CGSize)arg2 playerFrame:(struct CGRect)arg3;
- (void)GDTfunctionf23lmy;
- (void)GDTfunctionx0UB6q:(id)arg1;
- (void)click:(id)arg1;
- (void)GDTfunctioni3pn1r:(id)arg1;
- (void)GDTfunctioni5Q9Nc;
- (id)eCPMLevel;
- (long long)eCPM;
- (double)videoPlayTime;
- (double)videoDuration;
@property(readonly, nonatomic) _Bool isReady;
- (void)render;
- (void)dealloc;
- (void)GDTfunctiont2R4FX;
- (id)initLk0QkxC:(id)arg1 adParams:(id)arg2;
- (void)GDTfunctionv4FeYI:(id)arg1;
@property(retain, nonatomic) GDTNegativeFeedbackAlertController *alertController;
- (id)GDTfunctionr4QnpW;
- (void)GDTfunctionp9d2zs:(_Bool)arg1;
- (void)GDTfunctiono9bMRi:(_Bool)arg1;
- (void)GDTfunctiony8yZtW:(_Bool)arg1;
- (void)inner_render;
- (void)GDTfunctionn5EuIc:(id)arg1;
- (double)GDTfunctionr2d2N8;
- (double)GDTfunctionn6WgVx;
- (_Bool)GDTfunctionq7W8Md;
- (void)GDTfunctionl7tQCa;
- (void)GDTfunctiony2gpoy;
- (void)GDTfunctionp1B2XM:(unsigned long long)arg1 duration:(long long)arg2;
- (void)GDTfunctionn6Fh0k;
- (_Bool)supportNativeEndcard;
- (long long)GDTfunctionx5PECv;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)GDTfunctionm6tGQG;
- (id)player;
- (void)GDTfunctiono6lUvv;
- (void)autoPlay;
- (_Bool)GDTfunctiont3meok:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

