//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GDTAdViewClickWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTRewardAdPresenterProtocol-Protocol.h"
#import "GDTWebViewDelegate-Protocol.h"

@class GDTAdViewClickWithAntiSpamChecker, GDTAntiSpamClickData, GDTEdgeSwipeBackWebview, GDTExtensionButton, GDTPanGestureRecognizer, GDTRewardVideoAdModel, NSArray, NSString, NSTimer, UIImageView, UILabel;

@interface GDTRewardPageViewController : UIViewController <GDTWebViewDelegate, GDTAdViewClickWithAntiSpamCheckerDelegate, GDTRewardAdPresenterProtocol>
{
    _Bool prohibitCustomProtocol;
    _Bool _stopCountDown;
    _Bool _hasRewarded;
    _Bool _hasStartCountDown;
    _Bool _hasLoadFinished;
    _Bool _hasReportClick;
    _Bool _usePreloadWebView;
    _Bool _hasPlayed;
    _Bool _isRewardPlay;
    _Bool _hasInteracted;
    _Bool _advanceJSPlayCallbackEnable;
    _Bool _hasRecordWebContentTerminate;
    GDTRewardVideoAdModel *adModel;
    CDUnknownBlockType exposedCallback;
    CDUnknownBlockType clickedCallback;
    CDUnknownBlockType closedCallback;
    CDUnknownBlockType finishCallback;
    CDUnknownBlockType rewardEffectiveCallBack;
    CDUnknownBlockType errorCallback;
    CDUnknownBlockType renderSuccessCallback;
    CDUnknownBlockType renderFailCallback;
    NSArray *customProtocolWhiteList;
    CDUnknownBlockType logoClickCallback;
    long long _pageStartTime;
    GDTEdgeSwipeBackWebview *_contentView;
    GDTExtensionButton *_closeButton;
    UILabel *_noticeLabel;
    NSTimer *_countDownTimer;
    NSTimer *_exposureCheckerTimer;
    GDTAdViewClickWithAntiSpamChecker *_clickChecker;
    GDTAntiSpamClickData *_clickData;
    double _playBeginTime;
    long long _closeButtonShowTime;
    UIImageView *_logoImageView;
    long long _initialOrientation;
    double _realBrowseDuration;
    NSTimer *_realBrowseTimer;
    long long _countDownTime;
    long long _effectiveTime;
    GDTPanGestureRecognizer *_panGesture;
}

@property(nonatomic) _Bool hasRecordWebContentTerminate; // @synthesize hasRecordWebContentTerminate=_hasRecordWebContentTerminate;
@property(nonatomic) _Bool advanceJSPlayCallbackEnable; // @synthesize advanceJSPlayCallbackEnable=_advanceJSPlayCallbackEnable;
@property(retain, nonatomic) GDTPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) long long effectiveTime; // @synthesize effectiveTime=_effectiveTime;
@property(nonatomic) long long countDownTime; // @synthesize countDownTime=_countDownTime;
@property(retain, nonatomic) NSTimer *realBrowseTimer; // @synthesize realBrowseTimer=_realBrowseTimer;
@property(nonatomic) double realBrowseDuration; // @synthesize realBrowseDuration=_realBrowseDuration;
@property(nonatomic) _Bool hasInteracted; // @synthesize hasInteracted=_hasInteracted;
@property(nonatomic) _Bool isRewardPlay; // @synthesize isRewardPlay=_isRewardPlay;
@property(nonatomic) _Bool hasPlayed; // @synthesize hasPlayed=_hasPlayed;
@property(nonatomic) _Bool usePreloadWebView; // @synthesize usePreloadWebView=_usePreloadWebView;
@property(nonatomic) _Bool hasReportClick; // @synthesize hasReportClick=_hasReportClick;
@property(nonatomic) long long initialOrientation; // @synthesize initialOrientation=_initialOrientation;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) long long closeButtonShowTime; // @synthesize closeButtonShowTime=_closeButtonShowTime;
@property(nonatomic) double playBeginTime; // @synthesize playBeginTime=_playBeginTime;
@property(nonatomic) _Bool hasLoadFinished; // @synthesize hasLoadFinished=_hasLoadFinished;
@property(retain, nonatomic) GDTAntiSpamClickData *clickData; // @synthesize clickData=_clickData;
@property(retain, nonatomic) GDTAdViewClickWithAntiSpamChecker *clickChecker; // @synthesize clickChecker=_clickChecker;
@property(nonatomic) __weak NSTimer *exposureCheckerTimer; // @synthesize exposureCheckerTimer=_exposureCheckerTimer;
@property(nonatomic) _Bool hasStartCountDown; // @synthesize hasStartCountDown=_hasStartCountDown;
@property(nonatomic) _Bool hasRewarded; // @synthesize hasRewarded=_hasRewarded;
@property(nonatomic) _Bool stopCountDown; // @synthesize stopCountDown=_stopCountDown;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) GDTExtensionButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) GDTEdgeSwipeBackWebview *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long pageStartTime; // @synthesize pageStartTime=_pageStartTime;
@property(copy, nonatomic) CDUnknownBlockType logoClickCallback; // @synthesize logoClickCallback;
@property(retain, nonatomic) NSArray *customProtocolWhiteList; // @synthesize customProtocolWhiteList;
@property(nonatomic) _Bool prohibitCustomProtocol; // @synthesize prohibitCustomProtocol;
@property(copy, nonatomic) CDUnknownBlockType renderFailCallback; // @synthesize renderFailCallback;
@property(copy, nonatomic) CDUnknownBlockType renderSuccessCallback; // @synthesize renderSuccessCallback;
@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback;
@property(copy, nonatomic) CDUnknownBlockType rewardEffectiveCallBack; // @synthesize rewardEffectiveCallBack;
@property(copy, nonatomic) CDUnknownBlockType finishCallback; // @synthesize finishCallback;
@property(copy, nonatomic) CDUnknownBlockType closedCallback; // @synthesize closedCallback;
@property(copy, nonatomic) CDUnknownBlockType clickedCallback; // @synthesize clickedCallback;
@property(copy, nonatomic) CDUnknownBlockType exposedCallback; // @synthesize exposedCallback;
@property(retain, nonatomic) GDTRewardVideoAdModel *adModel; // @synthesize adModel;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)GDTfunctionw8CBtL:(id)arg1;
- (void)GDTfunctiong3Goz4:(id)arg1 didClickWithClickData:(id)arg2;
- (void)GDTfunctionr1pGyp;
- (void)GDTfunctionm3ITfn;
- (id)isViewable;
- (void)GDTfunctionm1PLLn:(_Bool)arg1;
- (void)GDTfunctionj2LSzr:(id)arg1;
- (void)GDTfunctionb6Wepm;
- (void)GDTfunctionw02iIb;
- (void)GDTfunctionp5KnL4;
- (void)GDTfunctiona4Zzm9:(id)arg1;
- (void)GDTfunctionj477nC:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)GDTfunctionj477nC:(id)arg1 didFinishNavigation:(id)arg2;
- (void)GDTfunctionj477nC:(id)arg1 handleJsRequest:(id)arg2;
- (_Bool)GDTfunctionj477nC:(id)arg1 GDTfunctionb0VurS:(id)arg2;
- (void)GDTfunctiont2TjKb;
- (void)GDTfunctionc2KuxD;
- (void)GDTfunctionz2TPnS;
- (void)GDTfunctionn3KeM7;
- (void)GDTfunctions9OoQ1;
- (void)GDTfunctionb4dvck;
- (void)GDTfunctiona5O7zP;
- (void)GDTfunctiona3rzhU;
- (void)GDTfunctiont0kxK0;
- (void)GDTfunctionj0qsxA;
- (void)GDTfunctionr5xNFV;
- (void)GDTfunctionw3WRyR;
- (id)GDTfunctionl3GyrH;
- (void)GDTfunctionl2ZVPW;
- (void)GDTfunctionm8YMDS:(id)arg1;
- (void)GDTfunctiony7CnHt;
- (void)GDTfunctionj3X5fC;
- (void)GDTfunctionb35RHW;
- (void)GDTfunctiont4pqNq;
- (void)GDTfunctionn5mhwc;
- (void)GDTfunctiont52dzi;
- (struct CGRect)GDTfunctionz29iyU;
- (void)GDTfunctionr9YqHj;
- (void)GDTfunctiong57QXA;
- (void)GDTfunctionf63T00;
- (void)GDTfunctionr9fuTN;
- (void)GDTfunctioni0dvvY;
- (void)viewDidLoad;
- (void)setRewardPlayPreloadView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

