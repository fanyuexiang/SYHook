//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WXWebViewControllerDelegate-Protocol.h"

@class NSString, SendAuthReq, WXWebViewController;
@protocol WXApiDelegate;

@interface WapAuthHandler : NSObject <WXWebViewControllerDelegate>
{
    WXWebViewController *_webViewController;
    NSString *_appId;
    unsigned long long _timeStamp;
    SendAuthReq *_sendAuthReq;
    _Bool _running;
    id <WXApiDelegate> _delegate;
}

+ (id)shareWapAuthHandlerInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WXApiDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getWebViewController;
- (void)onCancelOAuthWebView;
- (id)getMobileCheckUrl;
- (void)cancelWapOAuth;
- (_Bool)endWapAuth;
- (_Bool)handleWapOAuthOpenUrl:(id)arg1;
- (_Bool)beginWapAuth:(id)arg1 currentVC:(id)arg2 appId:(id)arg3 delegate:(id)arg4;
- (id)parseURLParams:(id)arg1;
- (void)onShowLeftBar;
- (void)onHiddenLeftBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

