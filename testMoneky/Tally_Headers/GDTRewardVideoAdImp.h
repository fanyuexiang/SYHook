//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdImpProtocol-Protocol.h"
#import "GDTAdImpS2SProtocol-Protocol.h"
#import "GDTBusinessMediaDownloaderDelegate-Protocol.h"
#import "GDTFullScreenOverlayMediatorViewDelegate-Protocol.h"
#import "GDTRewardVideoAdImpProtocol-Protocol.h"
#import "GDTWebViewDelegate-Protocol.h"

@class GDTAdBaseModel, GDTBusinessMediaDownloader, GDTClickFacade, GDTEdgeSwipeBackWebview, GDTLoadAdParams, GDTNegativeFeedbackAlertController, GDTRewardVideoAd, GDTRewardVideoAdModel, GDTRewardVideoMediatorView, GDTServerSideVerificationOptions, NSArray, NSDictionary, NSString, NSTimer, UIViewController;
@protocol GDTRewardAdPresenterProtocol, GDTRewardedVideoAdImpDelegate;

@interface GDTRewardVideoAdImp : NSObject <GDTFullScreenOverlayMediatorViewDelegate, GDTBusinessMediaDownloaderDelegate, GDTWebViewDelegate, GDTRewardVideoAdImpProtocol, GDTAdImpProtocol, GDTAdImpS2SProtocol>
{
    _Bool videoMuted;
    _Bool isFromS2S;
    _Bool _disableServerMediation;
    _Bool _fromExpressCall;
    _Bool _supportRewardPage;
    _Bool _downloadSuccess;
    _Bool _isLoading;
    _Bool _downloadVideoFinished;
    _Bool _hasTriggerVideoDidLoad;
    _Bool _shouldPreRender;
    _Bool _C2SHasInvokeWinOrLoss;
    _Bool _C2SLimitInvokeTimeEnable;
    id <GDTRewardedVideoAdImpDelegate> delegate;
    GDTRewardVideoAd *rewardVideoAd;
    NSString *adNetworkName;
    GDTLoadAdParams *loadAdParams;
    id adDelegate;
    GDTServerSideVerificationOptions *serverSideVerificationOptions;
    NSDictionary *_mediationExtDict;
    NSString *s2sToken;
    NSString *_placementId;
    NSString *_threadId;
    double _requestBeginTime;
    double _requestEndTime;
    double _showBeginTime;
    GDTRewardVideoAdModel *_adModel;
    long long _expiredTimestamp;
    long long _serverType;
    UIViewController<GDTRewardAdPresenterProtocol> *_rewardAdViewController;
    UIViewController *_rootViewController;
    GDTClickFacade *_clickFacade;
    GDTClickFacade *_clickOnlyReportFacade;
    GDTRewardVideoMediatorView *_expressRewardView;
    long long _renderState;
    GDTAdBaseModel *_adModelForEvent;
    NSTimer *_downloadVideoTimer;
    GDTEdgeSwipeBackWebview *_rewardPlayPreloadView;
    GDTBusinessMediaDownloader *_videoDownloader;
    double _callLoadSucessTimeBegin;
    GDTNegativeFeedbackAlertController *_alertController;
}

@property(retain, nonatomic) GDTNegativeFeedbackAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) double callLoadSucessTimeBegin; // @synthesize callLoadSucessTimeBegin=_callLoadSucessTimeBegin;
@property(retain, nonatomic) GDTBusinessMediaDownloader *videoDownloader; // @synthesize videoDownloader=_videoDownloader;
@property(nonatomic) _Bool C2SLimitInvokeTimeEnable; // @synthesize C2SLimitInvokeTimeEnable=_C2SLimitInvokeTimeEnable;
@property(nonatomic) _Bool C2SHasInvokeWinOrLoss; // @synthesize C2SHasInvokeWinOrLoss=_C2SHasInvokeWinOrLoss;
@property(retain, nonatomic) GDTEdgeSwipeBackWebview *rewardPlayPreloadView; // @synthesize rewardPlayPreloadView=_rewardPlayPreloadView;
@property(nonatomic) _Bool shouldPreRender; // @synthesize shouldPreRender=_shouldPreRender;
@property(nonatomic) _Bool hasTriggerVideoDidLoad; // @synthesize hasTriggerVideoDidLoad=_hasTriggerVideoDidLoad;
@property(nonatomic) _Bool downloadVideoFinished; // @synthesize downloadVideoFinished=_downloadVideoFinished;
@property(retain, nonatomic) NSTimer *downloadVideoTimer; // @synthesize downloadVideoTimer=_downloadVideoTimer;
@property(retain, nonatomic) GDTAdBaseModel *adModelForEvent; // @synthesize adModelForEvent=_adModelForEvent;
@property(nonatomic) long long renderState; // @synthesize renderState=_renderState;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool downloadSuccess; // @synthesize downloadSuccess=_downloadSuccess;
@property(retain, nonatomic) GDTRewardVideoMediatorView *expressRewardView; // @synthesize expressRewardView=_expressRewardView;
@property(nonatomic) _Bool supportRewardPage; // @synthesize supportRewardPage=_supportRewardPage;
@property(retain, nonatomic) GDTClickFacade *clickOnlyReportFacade; // @synthesize clickOnlyReportFacade=_clickOnlyReportFacade;
@property(retain, nonatomic) GDTClickFacade *clickFacade; // @synthesize clickFacade=_clickFacade;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UIViewController<GDTRewardAdPresenterProtocol> *rewardAdViewController; // @synthesize rewardAdViewController=_rewardAdViewController;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(nonatomic) long long expiredTimestamp; // @synthesize expiredTimestamp=_expiredTimestamp;
@property(retain, nonatomic) GDTRewardVideoAdModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) double showBeginTime; // @synthesize showBeginTime=_showBeginTime;
@property(nonatomic) double requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(nonatomic) double requestBeginTime; // @synthesize requestBeginTime=_requestBeginTime;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(nonatomic) _Bool fromExpressCall; // @synthesize fromExpressCall=_fromExpressCall;
@property(nonatomic) _Bool disableServerMediation; // @synthesize disableServerMediation=_disableServerMediation;
@property(nonatomic) _Bool isFromS2S; // @synthesize isFromS2S;
@property(copy, nonatomic) NSString *s2sToken; // @synthesize s2sToken;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict=_mediationExtDict;
@property(retain, nonatomic) GDTServerSideVerificationOptions *serverSideVerificationOptions; // @synthesize serverSideVerificationOptions;
@property(nonatomic) __weak id adDelegate; // @synthesize adDelegate;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted;
@property(copy, nonatomic) NSString *adNetworkName; // @synthesize adNetworkName;
@property(nonatomic) __weak GDTRewardVideoAd *rewardVideoAd; // @synthesize rewardVideoAd;
@property(nonatomic) __weak id <GDTRewardedVideoAdImpDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)GDTfunctionq9Bcmp;
- (void)GDTfunctionj4NGDC:(unsigned long long)arg1 detailErrorCode:(unsigned long long)arg2;
- (void)GDTfunctions4QLbJ;
- (void)GDTfunctioni3TxAz:(id)arg1;
- (void)GDTfunctionk7HWOp;
- (void)GDTfunctiono5JxVz:(id)arg1 clickArea:(long long)arg2;
- (void)GDTfunctionw7Or06:(id)arg1;
- (void)GDTfunctiond1Wlx5;
- (void)GDTfunctione5c01A;
- (void)GDTfunctiont7AADb;
- (void)downloadVideoTimeout;
- (void)GDTfunctiong6YMWo;
- (void)GDTfunctionq8Z6xn;
- (void)GDTfunctionn3aild:(id)arg1;
- (id)extraInfo;
- (void)GDTfunctionl4zmpn:(id)arg1 didRenderFailWithError:(id)arg2;
- (void)GDTfunctiono3hKxO:(id)arg1;
- (void)mediaDownloader:(id)arg1 didFinishedWithError:(id)arg2;
- (void)setBidECPM:(long long)arg1;
- (void)sendLossNotificationWithInfo:(id)arg1;
- (void)sendWinNotificationWithInfo:(id)arg1;
- (id)isViewable;
- (void)GDTfunctionj477nC:(id)arg1 handleJsRequest:(id)arg2;
- (_Bool)GDTfunctionj477nC:(id)arg1 GDTfunctionb0VurS:(id)arg2;
- (void)GDTfunctionw8EScJ;
- (id)GDTfunctiond981tP;
- (id)GDTfunctiont27OIe;
- (id)GDTfunctionj9Dxm4;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)GDTfunctionf47gkI;
- (void)GDTfunctionk9maka;
- (void)loadAd;
- (id)realMediationPrice;
- (double)videoDuration;
- (id)eCPMLevel;
- (long long)eCPM;
- (_Bool)hasExposed;
- (_Bool)GDTfunctionb1mAjh;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (void)dealloc;
- (id)initWithPlacementId:(id)arg1 serverType:(long long)arg2;
- (id)initWithPlacementId:(id)arg1;
- (unsigned long long)rewardAdType;
- (_Bool)isContractAd;

// Remaining properties
@property(retain, nonatomic) NSArray *customProtocolWhiteList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool prohibitCustomProtocol;
@property(readonly) Class superclass;

@end

