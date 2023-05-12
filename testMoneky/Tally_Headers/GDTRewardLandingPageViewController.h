//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GDTAdViewClickWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTWebViewDelegate-Protocol.h"

@class GDTAdBaseModel, GDTAdViewClickWithAntiSpamChecker, GDTEdgeSwipeBackWebview, GDTExtensionButton, NSArray, NSString, NSTimer, UIImageView, UILabel;
@protocol GDTRewardLandingPageViewControllerDelegate;

@interface GDTRewardLandingPageViewController : UIViewController <GDTWebViewDelegate, GDTAdViewClickWithAntiSpamCheckerDelegate>
{
    _Bool _stopCountDown;
    _Bool _hasStartCountDown;
    _Bool _hasLoadFinished;
    id <GDTRewardLandingPageViewControllerDelegate> _delegate;
    NSString *_landingPage;
    GDTAdBaseModel *_adModel;
    long long _initialOrientation;
    UIImageView *_rewardIcon;
    NSString *_rewardIconUrl;
    UILabel *_noticeLabel;
    GDTExtensionButton *_closeButton;
    GDTEdgeSwipeBackWebview *_contentView;
    UIImageView *_loadingImageView;
    NSTimer *_countDownTimer;
    long long _countDownTime;
    long long _effectiveTime;
    NSString *_rewardText;
    NSTimer *_exposureCheckerTimer;
    double _realBrowseDuration;
    NSTimer *_realBrowseTimer;
    GDTAdViewClickWithAntiSpamChecker *_clickChecker;
}

@property(retain, nonatomic) GDTAdViewClickWithAntiSpamChecker *clickChecker; // @synthesize clickChecker=_clickChecker;
@property(nonatomic) _Bool hasLoadFinished; // @synthesize hasLoadFinished=_hasLoadFinished;
@property(retain, nonatomic) NSTimer *realBrowseTimer; // @synthesize realBrowseTimer=_realBrowseTimer;
@property(nonatomic) double realBrowseDuration; // @synthesize realBrowseDuration=_realBrowseDuration;
@property(retain, nonatomic) NSTimer *exposureCheckerTimer; // @synthesize exposureCheckerTimer=_exposureCheckerTimer;
@property(copy, nonatomic) NSString *rewardText; // @synthesize rewardText=_rewardText;
@property(nonatomic) long long effectiveTime; // @synthesize effectiveTime=_effectiveTime;
@property(nonatomic) long long countDownTime; // @synthesize countDownTime=_countDownTime;
@property(nonatomic) _Bool hasStartCountDown; // @synthesize hasStartCountDown=_hasStartCountDown;
@property(nonatomic) _Bool stopCountDown; // @synthesize stopCountDown=_stopCountDown;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) GDTEdgeSwipeBackWebview *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) GDTExtensionButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(copy, nonatomic) NSString *rewardIconUrl; // @synthesize rewardIconUrl=_rewardIconUrl;
@property(retain, nonatomic) UIImageView *rewardIcon; // @synthesize rewardIcon=_rewardIcon;
@property(nonatomic) long long initialOrientation; // @synthesize initialOrientation=_initialOrientation;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(copy, nonatomic) NSString *landingPage; // @synthesize landingPage=_landingPage;
@property(nonatomic) __weak id <GDTRewardLandingPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (struct CGRect)GDTfunctionz29iyU;
- (void)GDTfunctiong3Goz4:(id)arg1 didClickWithClickData:(id)arg2;
- (void)GDTfunctionr9fuTN;
- (id)GDTfunctionw8CBtL;
- (id)GDTfunctionl3GyrH;
- (void)GDTfunctiono8LcAk;
- (void)GDTfunctiona5O7zP;
- (void)GDTfunctiong1b5UD;
- (void)GDTfunctionv0n2sS;
- (void)GDTfunctionu0YEyR;
- (void)GDTfunctiona3rzhU;
- (void)GDTfunctionh2OAPZ;
- (void)countDown;
- (void)GDTfunctiony7CnHt;
- (void)GDTfunctiont7Rcv6;
- (void)GDTfunctionb35RHW;
- (void)GDTfunctiont4pqNq;
- (void)GDTfunctionn5mhwc;
- (void)GDTfunctionj477nC:(id)arg1 didFinishNavigation:(id)arg2;
- (void)GDTfunctiont2TjKb;
- (void)GDTfunctionc2KuxD;
- (void)GDTfunctionz2TPnS;
- (void)initLl9dWA7;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSArray *customProtocolWhiteList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool prohibitCustomProtocol;
@property(readonly) Class superclass;

@end

