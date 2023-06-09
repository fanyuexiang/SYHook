//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GDTAdViewExposureWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTSplashViewControllerDelegate-Protocol.h"
#import "GDTSplashViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class GDTAdViewExposureWithAntiSpamChecker, GDTAntiSpamBusinessData, GDTSplashAdModel, GDTSplashMediator, NSString, UIView;
@protocol GDTSplashViewDelegate><GDTSplashViewControllerDelegate, UIViewControllerAnimatedTransitioning;

@interface GDTSplashViewController : UIViewController <GDTAdViewExposureWithAntiSpamCheckerDelegate, GDTSplashViewDelegate, UIViewControllerTransitioningDelegate, GDTSplashViewControllerDelegate>
{
    _Bool _interationSlideTriggered;
    GDTSplashMediator *_mediator;
    id <GDTSplashViewDelegate><GDTSplashViewControllerDelegate> _delegate;
    GDTSplashAdModel *_adModel;
    UIView *_adProviderView;
    GDTAdViewExposureWithAntiSpamChecker *_viewExposureChecker;
    GDTAntiSpamBusinessData *_antiSpamBusinessData;
    double _vcPresentedTime;
    id <UIViewControllerAnimatedTransitioning> _animatedTransition;
}

+ (id)splashViewControllerWithAdModel:(id)arg1 apProviderView:(id)arg2;
@property(nonatomic) _Bool interationSlideTriggered; // @synthesize interationSlideTriggered=_interationSlideTriggered;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animatedTransition; // @synthesize animatedTransition=_animatedTransition;
@property(nonatomic) double vcPresentedTime; // @synthesize vcPresentedTime=_vcPresentedTime;
@property(retain, nonatomic) GDTAntiSpamBusinessData *antiSpamBusinessData; // @synthesize antiSpamBusinessData=_antiSpamBusinessData;
@property(retain, nonatomic) GDTAdViewExposureWithAntiSpamChecker *viewExposureChecker; // @synthesize viewExposureChecker=_viewExposureChecker;
@property(retain, nonatomic) UIView *adProviderView; // @synthesize adProviderView=_adProviderView;
@property(retain, nonatomic) GDTSplashAdModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) __weak id <GDTSplashViewDelegate><GDTSplashViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GDTSplashMediator *mediator; // @synthesize mediator=_mediator;
- (void).cxx_destruct;
- (void)GDTfunctiont3b0XM;
- (id)GDTfunctiong1iSqL;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)GDTfunctionw5TeHU:(id)arg1 didTickWithTimeLeft:(unsigned long long)arg2;
- (void)GDTfunctionw5TeHU:(id)arg1 didClickWithType:(unsigned long long)arg2 clickData:(id)arg3;
- (void)GDTfunctiona5niFi:(id)arg1;
- (void)GDTfunctiont8VkMo;
- (void)GDTfunctioni5Q9Nc;
- (void)GDTfunctionz5bNdb;
- (void)GDTfunctiont3OyWy;
- (void)GDTfunctionf4fv4f;
- (void)GDTfunctionh7jYym;
- (void)GDTfunctiong99nEC;
- (id)GDTfunctionm57DPq:(id)arg1 clickType:(unsigned long long)arg2;
- (_Bool)GDTfunctiona3Tifo:(_Bool)arg1 forbidZoomOut:(_Bool)arg2 zoomOutView:(id)arg3;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initLk0QkxC:(id)arg1 adProviderView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

