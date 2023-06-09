//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTAdContentViewProtocol-Protocol.h"
#import "GDTAdViewClickWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTCustomGestureRecognizerDelegate-Protocol.h"
#import "GDTGameDemoEntranceViewDelegate-Protocol.h"
#import "GDTPlayerControlProtocol-Protocol.h"

@class GDTADActiveInformation, GDTADConfiguration, GDTAdBaseModel, GDTAdViewClickWithAntiSpamChecker, GDTAntiSpamClickData, GDTAppStoreOverlayManager, GDTBizFeedVideoPlayerView, GDTFullScreenVideoControl, GDTGameDemoEntranceView, GDTPlayer, GDTVideoWidget, NSString, UIImageView, UILabel, UIProgressView;
@protocol GDTAdContentViewDelegate, GDTBottomCardAppearance;

@interface GDTFullScreenNativeView : UIView <GDTCustomGestureRecognizerDelegate, GDTAdViewClickWithAntiSpamCheckerDelegate, GDTGameDemoEntranceViewDelegate, GDTPlayerControlProtocol, GDTAdContentViewProtocol>
{
    _Bool _adViewIsValid;
    _Bool _bottomCardAppearReported;
    _Bool _hasReportedSKOverlayPresented;
    _Bool _hasReportedSDKOverlayFailed;
    GDTADConfiguration *_adConfig;
    GDTADActiveInformation *_adActiveInformation;
    id <GDTAdContentViewDelegate> _delegate;
    GDTPlayer *_player;
    GDTBizFeedVideoPlayerView *_videoView;
    GDTFullScreenVideoControl *_videoControl;
    UIView *_eventView;
    GDTAntiSpamClickData *_antiSpamBodyClickData;
    GDTAntiSpamClickData *_antiSpamBottomAreaClickData;
    GDTAdViewClickWithAntiSpamChecker *_clickChecker;
    GDTVideoWidget *_videoWidget;
    UIProgressView *_progressView;
    long long _playBeginTime;
    GDTGameDemoEntranceView *_gameDemoEntranceView;
    GDTAppStoreOverlayManager *_appStoreOverlayMgr;
    UIImageView *_logoImageView;
    UIView<GDTBottomCardAppearance> *_bottomCardView;
    UILabel *_toastLabel;
    GDTAdBaseModel *_adModel;
}

@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) UILabel *toastLabel; // @synthesize toastLabel=_toastLabel;
@property(retain, nonatomic) UIView<GDTBottomCardAppearance> *bottomCardView; // @synthesize bottomCardView=_bottomCardView;
@property(nonatomic) _Bool hasReportedSDKOverlayFailed; // @synthesize hasReportedSDKOverlayFailed=_hasReportedSDKOverlayFailed;
@property(nonatomic) _Bool hasReportedSKOverlayPresented; // @synthesize hasReportedSKOverlayPresented=_hasReportedSKOverlayPresented;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) GDTAppStoreOverlayManager *appStoreOverlayMgr; // @synthesize appStoreOverlayMgr=_appStoreOverlayMgr;
@property(retain, nonatomic) GDTGameDemoEntranceView *gameDemoEntranceView; // @synthesize gameDemoEntranceView=_gameDemoEntranceView;
@property(nonatomic) long long playBeginTime; // @synthesize playBeginTime=_playBeginTime;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) GDTVideoWidget *videoWidget; // @synthesize videoWidget=_videoWidget;
@property(retain, nonatomic) GDTAdViewClickWithAntiSpamChecker *clickChecker; // @synthesize clickChecker=_clickChecker;
@property(nonatomic) _Bool bottomCardAppearReported; // @synthesize bottomCardAppearReported=_bottomCardAppearReported;
@property(retain, nonatomic) GDTAntiSpamClickData *antiSpamBottomAreaClickData; // @synthesize antiSpamBottomAreaClickData=_antiSpamBottomAreaClickData;
@property(retain, nonatomic) GDTAntiSpamClickData *antiSpamBodyClickData; // @synthesize antiSpamBodyClickData=_antiSpamBodyClickData;
@property(retain, nonatomic) UIView *eventView; // @synthesize eventView=_eventView;
@property(retain, nonatomic) GDTFullScreenVideoControl *videoControl; // @synthesize videoControl=_videoControl;
@property(nonatomic) _Bool adViewIsValid; // @synthesize adViewIsValid=_adViewIsValid;
@property(nonatomic) __weak GDTBizFeedVideoPlayerView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) __weak GDTPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <GDTAdContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GDTADActiveInformation *adActiveInformation; // @synthesize adActiveInformation=_adActiveInformation;
@property(nonatomic) __weak GDTADConfiguration *adConfig; // @synthesize adConfig=_adConfig;
- (void).cxx_destruct;
- (void)GDTfunctiong3Goz4:(id)arg1 didClickWithClickData:(id)arg2;
- (void)GDTfunctionw9JoCF;
- (long long)GDTfunctionc0KXgt:(id)arg1;
- (id)GDTfunctionl9C0E4:(id)arg1 currentAntiSpanParam:(id)arg2;
- (id)GDTfunctiond800pz:(id)arg1 currentAntiSpanParam:(id)arg2;
- (void)GDTfunctiony3KwEQ:(id)arg1 endedWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)GDTfunctiony3KwEQ:(id)arg1 beganWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)gdt_player:(id)arg1 playStateChanged:(unsigned long long)arg2;
- (void)gdt_player:(id)arg1 currentTime:(double)arg2 totalTime:(double)arg3;
- (void)GDTfunctiond3NURf;
- (void)GDTfunctiong0kIDm;
- (void)GDTfunctionf4VlL2;
- (void)layoutSubviews;
- (_Bool)GDTfunctionf2Rj1j;
- (void)GDTfunctiong5H9In:(_Bool)arg1;
- (void)GDTfunctionx3gm57;
- (void)GDTfunctionp3pwCU;
- (_Bool)GDTfunctionm3vuPB;
- (void)GDTfunctionc8EzKF:(_Bool)arg1;
- (void)dealloc;
- (void)GDTfunctionj5tlPj;
- (void)GDTfunctionb1nX7b;
- (void)GDTfunctiont7ZKi6:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 adInfo:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

