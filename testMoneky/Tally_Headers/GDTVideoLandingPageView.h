//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTAdViewClickWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTLandingPageWebViewControllerDelegate-Protocol.h"
#import "GDTVideoEndcardAppearanceProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GDTAdBaseModel, GDTAdViewClickWithAntiSpamChecker, GDTAntiSpamClickData, GDTLandingPageWebViewController, GDTPanGestureRecognizer, NSString, UIViewController;

@interface GDTVideoLandingPageView : UIView <GDTLandingPageWebViewControllerDelegate, GDTAdViewClickWithAntiSpamCheckerDelegate, UIGestureRecognizerDelegate, GDTVideoEndcardAppearanceProtocol>
{
    _Bool _hasExposured;
    _Bool _hasReported;
    GDTAdBaseModel *_adModel;
    CDUnknownBlockType _endCardBodyClickedCallback;
    CDUnknownBlockType _loadFailureCallback;
    CDUnknownBlockType _loadSuccessCallback;
    CDUnknownBlockType _endCardCloseButtonClickedCallback;
    long long _playBeginTime;
    unsigned long long _status;
    UIViewController *_rootViewController;
    CDUnknownBlockType deepLinkCallback;
    CDUnknownBlockType jumpToAppstoreCallback;
    CDUnknownBlockType endCardReplayButtonClickedCallback;
    NSString *xjLandingPageUrl;
    GDTLandingPageWebViewController *_landingPageWebVC;
    GDTAdViewClickWithAntiSpamChecker *_clickChecker;
    GDTAntiSpamClickData *_antiSpamClickData;
    GDTPanGestureRecognizer *_panGesture;
}

@property(retain, nonatomic) GDTPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) _Bool hasReported; // @synthesize hasReported=_hasReported;
@property(retain, nonatomic) GDTAntiSpamClickData *antiSpamClickData; // @synthesize antiSpamClickData=_antiSpamClickData;
@property(retain, nonatomic) GDTAdViewClickWithAntiSpamChecker *clickChecker; // @synthesize clickChecker=_clickChecker;
@property(retain, nonatomic) GDTLandingPageWebViewController *landingPageWebVC; // @synthesize landingPageWebVC=_landingPageWebVC;
@property(copy, nonatomic) NSString *xjLandingPageUrl; // @synthesize xjLandingPageUrl;
@property(copy, nonatomic) CDUnknownBlockType endCardReplayButtonClickedCallback; // @synthesize endCardReplayButtonClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType jumpToAppstoreCallback; // @synthesize jumpToAppstoreCallback;
@property(copy, nonatomic) CDUnknownBlockType deepLinkCallback; // @synthesize deepLinkCallback;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) _Bool hasExposured; // @synthesize hasExposured=_hasExposured;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long playBeginTime; // @synthesize playBeginTime=_playBeginTime;
@property(copy, nonatomic) CDUnknownBlockType endCardCloseButtonClickedCallback; // @synthesize endCardCloseButtonClickedCallback=_endCardCloseButtonClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType loadSuccessCallback; // @synthesize loadSuccessCallback=_loadSuccessCallback;
@property(copy, nonatomic) CDUnknownBlockType loadFailureCallback; // @synthesize loadFailureCallback=_loadFailureCallback;
@property(copy, nonatomic) CDUnknownBlockType endCardBodyClickedCallback; // @synthesize endCardBodyClickedCallback=_endCardBodyClickedCallback;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (void)GDTfunctionj477nC:(id)arg1 loadFailWithError:(id)arg2;
- (void)GDTfunctionj9PBjT:(id)arg1;
- (void)GDTfunctionl0mc7m:(id)arg1;
- (void)GDTfunctionu7Sirt:(id)arg1;
- (void)GDTfunctiong3Goz4:(id)arg1 didClickWithClickData:(id)arg2;
- (void)GDTfunctionq4hf6l;
- (struct CGPoint)closeButtonClickPoint;
- (void)GDTfunctiong57QXA;
- (void)GDTfunctionf63T00;
- (void)initLo0Nn5Z;
- (void)loadRequest;
- (void)GDTfunctionm5JNPg:(_Bool)arg1;
- (void)preloadRequest;
- (void)GDTfunctions9UC7R:(_Bool)arg1;
- (void)GDTfunctioni9hLia:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 adModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

