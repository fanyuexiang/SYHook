//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KPWKViewDelegate-Protocol.h"

@class JDKeplerReloadView, KPWKView, NSDate, NSDictionary, NSString;

@interface KPWebViewController : UIViewController <KPWKViewDelegate>
{
    _Bool _receiveRotateNotificaiton;
    NSString *_entryURL;
    NSString *_jumpURL;
    NSDictionary *_dic;
    KPWKView *_kpView;
    JDKeplerReloadView *_keplerReloadView;
    NSString *_webFinishLastURL;
    NSString *_webErrorLastURL;
    NSDate *_lastUpdateDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(nonatomic) _Bool receiveRotateNotificaiton; // @synthesize receiveRotateNotificaiton=_receiveRotateNotificaiton;
@property(retain, nonatomic) NSString *webErrorLastURL; // @synthesize webErrorLastURL=_webErrorLastURL;
@property(retain, nonatomic) NSString *webFinishLastURL; // @synthesize webFinishLastURL=_webFinishLastURL;
@property(retain, nonatomic) JDKeplerReloadView *keplerReloadView; // @synthesize keplerReloadView=_keplerReloadView;
@property(retain, nonatomic) KPWKView *kpView; // @synthesize kpView=_kpView;
@property(copy, nonatomic) NSDictionary *dic; // @synthesize dic=_dic;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *entryURL; // @synthesize entryURL=_entryURL;
- (_Bool)prefersStatusBarHidden;
- (void)kp_webView:(id)arg1 changeWebViewFrame:(struct CGRect)arg2;
- (void)kp_webView:(id)arg1 changeNavigationStatusValue:(double)arg2;
- (void)kp_webView:(id)arg1 changeNavigationItemState:(long long)arg2;
- (void)handleError:(id)arg1;
- (void)kp_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)kp_webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)kp_webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)kp_webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)kp_webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)checkJDKeplerConfig;
- (void)checkJDKeplerContent;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)stop;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addLoginMTAEvent;
- (void)makeUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)startCrashMonitor;
- (void)resetSessionCenter;
- (long long)modalPresentationStyle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

