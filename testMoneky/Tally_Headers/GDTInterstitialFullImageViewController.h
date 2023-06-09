//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GDTAdViewClickWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTAdViewExposureWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTClickFacadeDelegate-Protocol.h"
#import "GDTExpressViewDelegate-Protocol.h"

@class GDTAdBaseModel, GDTAdParams, GDTAdViewClickWithAntiSpamChecker, GDTAdViewExposureWithAntiSpamChecker, GDTAntiSpamBusinessData, GDTAntiSpamClickData, GDTClickFacade, GDTCountDownNoticeLabel, GDTExpressView, GDTExtensionButton, GDTLogoView, GDTVideoLandingPageView, NSString, NSTimer, UIImageView, UILabel, UIView;
@protocol GDTInterstitialFullScreenViewControllerDelegate;

@interface GDTInterstitialFullImageViewController : UIViewController <GDTAdViewExposureWithAntiSpamCheckerDelegate, GDTClickFacadeDelegate, GDTExpressViewDelegate, GDTAdViewClickWithAntiSpamCheckerDelegate>
{
    _Bool _viewVisible;
    _Bool _hasStartCountDown;
    _Bool _stopCountDown;
    _Bool _hasAutoSlide;
    _Bool _hasRotateExpressContainer;
    float _pressForce;
    float _pressRadius;
    id <GDTInterstitialFullScreenViewControllerDelegate> _delegate;
    long long _initialOrientation;
    NSString *_placementId;
    GDTAdBaseModel *_adModel;
    GDTAdViewExposureWithAntiSpamChecker *_viewExposureChecker;
    double _playBeginTime;
    GDTAntiSpamBusinessData *_antiSpamBusinessData;
    GDTVideoLandingPageView *_landingPageView;
    UIView *_rotateContainerView;
    GDTExpressView *_expressView;
    GDTAdParams *_adParams;
    NSString *_url;
    long long _timeout;
    UIImageView *_nativeImageView;
    GDTClickFacade *_clickFacade;
    GDTClickFacade *_clickOnlyReportFacade;
    NSTimer *_countDownTimer;
    GDTCountDownNoticeLabel *_countDownLabel;
    GDTExtensionButton *_closeButton;
    long long _watchedSeconds;
    long long _totalShowTime;
    long long _autoSlideTime;
    GDTAntiSpamClickData *_clickData;
    UIView *_animationView;
    UIView *_gradientView;
    UIImageView *_arrowView;
    UILabel *_tipLabel;
    GDTLogoView *_logoView;
    long long _expressViewRenderState;
    long long _nativeImageLoadState;
    GDTAdViewClickWithAntiSpamChecker *_clickChecker;
    struct CGPoint _beganPoint;
    struct CGPoint _endPoint;
}

@property(retain, nonatomic) GDTAdViewClickWithAntiSpamChecker *clickChecker; // @synthesize clickChecker=_clickChecker;
@property(nonatomic) long long nativeImageLoadState; // @synthesize nativeImageLoadState=_nativeImageLoadState;
@property(nonatomic) long long expressViewRenderState; // @synthesize expressViewRenderState=_expressViewRenderState;
@property(retain, nonatomic) GDTLogoView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) _Bool hasRotateExpressContainer; // @synthesize hasRotateExpressContainer=_hasRotateExpressContainer;
@property(retain, nonatomic) GDTAntiSpamClickData *clickData; // @synthesize clickData=_clickData;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint beganPoint; // @synthesize beganPoint=_beganPoint;
@property(nonatomic) _Bool hasAutoSlide; // @synthesize hasAutoSlide=_hasAutoSlide;
@property(nonatomic) long long autoSlideTime; // @synthesize autoSlideTime=_autoSlideTime;
@property(nonatomic) long long totalShowTime; // @synthesize totalShowTime=_totalShowTime;
@property(nonatomic) long long watchedSeconds; // @synthesize watchedSeconds=_watchedSeconds;
@property(nonatomic) _Bool stopCountDown; // @synthesize stopCountDown=_stopCountDown;
@property(nonatomic) _Bool hasStartCountDown; // @synthesize hasStartCountDown=_hasStartCountDown;
@property(retain, nonatomic) GDTExtensionButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) GDTCountDownNoticeLabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) GDTClickFacade *clickOnlyReportFacade; // @synthesize clickOnlyReportFacade=_clickOnlyReportFacade;
@property(retain, nonatomic) GDTClickFacade *clickFacade; // @synthesize clickFacade=_clickFacade;
@property(retain, nonatomic) UIImageView *nativeImageView; // @synthesize nativeImageView=_nativeImageView;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) float pressRadius; // @synthesize pressRadius=_pressRadius;
@property(nonatomic) float pressForce; // @synthesize pressForce=_pressForce;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) GDTAdParams *adParams; // @synthesize adParams=_adParams;
@property(retain, nonatomic) GDTExpressView *expressView; // @synthesize expressView=_expressView;
@property(retain, nonatomic) UIView *rotateContainerView; // @synthesize rotateContainerView=_rotateContainerView;
@property(retain, nonatomic) GDTVideoLandingPageView *landingPageView; // @synthesize landingPageView=_landingPageView;
@property(retain, nonatomic) GDTAntiSpamBusinessData *antiSpamBusinessData; // @synthesize antiSpamBusinessData=_antiSpamBusinessData;
@property(nonatomic) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic) double playBeginTime; // @synthesize playBeginTime=_playBeginTime;
@property(retain, nonatomic) GDTAdViewExposureWithAntiSpamChecker *viewExposureChecker; // @synthesize viewExposureChecker=_viewExposureChecker;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(nonatomic) long long initialOrientation; // @synthesize initialOrientation=_initialOrientation;
@property(nonatomic) __weak id <GDTInterstitialFullScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)businessSetting;
- (void)GDTfunctionf1KIgS:(id)arg1;
- (void)GDTfunctiono6BMDa:(id)arg1 clickParamsFromH5:(id)arg2 CTAType:(long long)arg3;
- (void)GDTfunctionc2RUGZ:(id)arg1 finalAdSize:(struct CGSize)arg2 playerFrame:(struct CGRect)arg3;
- (void)GDTfunctionc4Rxrz:(id)arg1 error:(unsigned long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)GDTfunctiona3U30I;
- (void)GDTfunctionr1pGyp;
- (void)GDTfunctions4VuM4;
- (void)GDTfunctionl0jnur;
- (void)GDTfunctionm3ITfn;
- (void)GDTfunctiont0kxK0;
- (void)GDTfunctionm8YMDS;
- (void)GDTfunctionj3X5fC;
- (void)GDTfunctionv8jVM4;
- (void)GDTfunctiont8VkMo;
- (void)GDTfunctionk7HWOp;
- (void)GDTfunctiong3Goz4:(id)arg1 didClickWithClickData:(id)arg2;
- (void)GDTfunctionq7aEX9:(id)arg1 clickArea:(long long)arg2;
- (void)GDTfunctionf9FpGH;
- (void)GDTfunctiona5niFi:(id)arg1;
- (void)GDTfunctioni5Q9Nc;
- (void)GDTfunctionx4GChy:(id)arg1;
- (void)GDTfunctionc1ufc8;
- (void)GDTfunctionj25P4J;
- (void)GDTfunctionv1OpAb;
- (void)GDTfunctionv0qXHt;
- (void)GDTfunctioni7u5Qz:(id)arg1;
- (void)GDTfunctionk1m2hH:(id)arg1;
- (void)GDTfunctions7BFht:(id)arg1;
- (void)GDTfunctiont1omPF;
- (void)GDTfunctiont2TjKb;
- (void)GDTfunctionc2KuxD;
- (void)GDTfunctionz2TPnS;
- (void)GDTfunctioni3f7aH;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initLk0QkxC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

