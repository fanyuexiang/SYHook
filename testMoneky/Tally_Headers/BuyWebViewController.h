//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BuyMiniBaseViewController.h"

#import "NSURLConnectionDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString, WKWebView;

@interface BuyWebViewController : BuyMiniBaseViewController <WKNavigationDelegate, WKUIDelegate, NSURLConnectionDelegate>
{
    NSString *_urlString;
    NSString *_titleString;
    WKWebView *_webView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (id)addToDesktopURL;
- (id)category;
- (id)topDes;
- (id)btntitleColor;
- (id)btnbghighlightColor;
- (id)btnbgColor;
- (id)topName;
- (id)topImageName;
- (id)shareImage;
- (id)shareURL;
- (id)shareContent;
- (id)shareTitle;
- (void)closeMiniEvent;
- (void)gotoMiniFirst;
- (id)sk_miniProgramsName;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
