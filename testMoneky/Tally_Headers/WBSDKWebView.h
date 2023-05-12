//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, NSURLRequest, WBSDKWebViewErrorView, WBSDKWebViewProgressView, WKWebView;
@protocol WBSDKWebViewDelegate;

@interface WBSDKWebView : UIView <WKNavigationDelegate>
{
    id <WBSDKWebViewDelegate> _delegate;
    WKWebView *_internalWebView;
    WBSDKWebViewProgressView *_progressView;
    WBSDKWebViewErrorView *_errorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WBSDKWebViewErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) WBSDKWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) WKWebView *internalWebView; // @synthesize internalWebView=_internalWebView;
@property(nonatomic) __weak id <WBSDKWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)errorViewRetryButtonPressed:(id)arg1;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)reload;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

