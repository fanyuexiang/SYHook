//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

@protocol WKNavigationDelegate;

@interface BuyWebView : WKWebView
{
    id <WKNavigationDelegate> _authDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WKNavigationDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void)setNavigationDelegate:(id)arg1;

@end

