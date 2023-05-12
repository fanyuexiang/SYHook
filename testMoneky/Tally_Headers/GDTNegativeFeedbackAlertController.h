//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import "GDTLandingPageWebViewControllerDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class GDTAdBaseModel, GDTWebViewController, NSString, UIViewController;

@interface GDTNegativeFeedbackAlertController : UIAlertController <WKScriptMessageHandler, GDTLandingPageWebViewControllerDelegate>
{
    CDUnknownBlockType _finishBlock;
    GDTAdBaseModel *_adModel;
    GDTWebViewController *_webviewController;
    UIViewController *_rootViewController;
}

+ (id)alertControllerWithAdModel:(id)arg1;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) GDTWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)GDTfunctionl0mc7m:(id)arg1;
- (void)GDTfunctionq6GGaM;
- (void)GDTfunctioni8SPC6;
- (void)GDTfunctionx8ADXc;
- (void)GDTfunctionp5pNlh;
- (_Bool)GDTfunctions8x7ts:(id)arg1;
- (void)openURL:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

