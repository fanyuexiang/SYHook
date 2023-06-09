//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTClickFacadeDelegate-Protocol.h"
#import "GDTHandlerContextProtocol-Protocol.h"
#import "GDTVideoStoreViewControllerDelegate-Protocol.h"
#import "GDTWebViewDelegate-Protocol.h"

@class GDTAdWKWebView, GDTClickFacade, NSArray, NSString, UIViewController;

@interface GDTAdWebViewClient : NSObject <GDTHandlerContextProtocol, GDTClickFacadeDelegate, GDTWebViewDelegate, GDTVideoStoreViewControllerDelegate>
{
    UIViewController *_rootViewController;
    GDTAdWKWebView *_webView;
    GDTClickFacade *_clickFacade;
    GDTClickFacade *_clickCTAFacade;
    long long _webViewKilledRetryCnt;
}

@property(nonatomic) long long webViewKilledRetryCnt; // @synthesize webViewKilledRetryCnt=_webViewKilledRetryCnt;
@property(retain, nonatomic) GDTClickFacade *clickCTAFacade; // @synthesize clickCTAFacade=_clickCTAFacade;
@property(retain, nonatomic) GDTClickFacade *clickFacade; // @synthesize clickFacade=_clickFacade;
@property(nonatomic) __weak GDTAdWKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)GDTfunctionk4o18k:(id)arg1 didLoadFailWithError:(id)arg2;
- (void)GDTfunctionn9Jx0b:(id)arg1;
- (void)GDTfunctionb44FMD:(id)arg1;
- (void)GDTfunctionr1pGyp;
- (void)GDTfunctions4VuM4;
- (void)GDTfunctionl0jnur;
- (void)GDTfunctionm3ITfn;
- (void)GDTfunctiona3U30I;
- (void)GDTfunctiona4Zzm9:(id)arg1;
- (_Bool)GDTfunctiono7YIvX:(id)arg1;
- (void)GDTfunctionj477nC:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSArray *customProtocolWhiteList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool prohibitCustomProtocol;
@property(readonly) Class superclass;

@end

