//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KPAlertViewProtocol-Protocol.h"
#import "KPNavigationButtonDelegate-Protocol.h"
#import "KPPopMenuDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class KPNavigationView, KPPopMenuView, KPWKWebView, NSString, NSTimer, NSURL, UITapGestureRecognizer;
@protocol KPWKViewDelegate, UIScrollViewDelegate;

@interface KPWKView : UIView <WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate, KPPopMenuDelegate, KPNavigationButtonDelegate, KPAlertViewProtocol>
{
    KPNavigationView *_navigationView;
    UIView *_progressBar;
    id <UIScrollViewDelegate> originalDelegate;
    _Bool _skuAnchorJump;
    long long _statusBarStyle;
    UITapGestureRecognizer *singleTap;
    _Bool _loading;
    _Bool hasAppendHead1;
    _Bool hasAppendHead2;
    _Bool _goBackBtnClick;
    NSString *_lastURLString;
    KPWKWebView *_webView;
    id <KPWKViewDelegate> _kpDelegate;
    NSTimer *_progressTimer;
    KPPopMenuView *_menu;
    long long _backNaviType;
    NSURL *_currentURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic) long long backNaviType; // @synthesize backNaviType=_backNaviType;
@property(retain, nonatomic) KPPopMenuView *menu; // @synthesize menu=_menu;
@property(nonatomic) _Bool goBackBtnClick; // @synthesize goBackBtnClick=_goBackBtnClick;
@property(nonatomic) __weak NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(nonatomic) __weak id <KPWKViewDelegate> kpDelegate; // @synthesize kpDelegate=_kpDelegate;
@property(retain, nonatomic) KPWKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *lastURLString; // @synthesize lastURLString=_lastURLString;
- (void)reloadWebView:(id)arg1;
- (id)getReplaceSidValueWithURLString:(id)arg1;
- (void)updateSKUNaviBar:(_Bool)arg1;
- (_Bool)isSKUUrl:(id)arg1;
- (void)navigationViewSelectButtonAtIndex:(long long)arg1;
- (void)KPPopMenuView:(id)arg1 DidSelectTag:(long long)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)configureNavigationItem;
- (void)autoLogin;
- (void)reportStringByEvaluatingJavaScriptFromStringReplace;
- (void)loadNavigationItemTitle;
- (void)changeNavigationItemState:(long long)arg1;
- (void)KPAlertViewConfirmed:(id)arg1;
- (void)KPAlertViewCancelled:(id)arg1;
- (void)logoutAndLoadH5LoginPage;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)urlNeedInsertJS:(id)arg1;
- (_Bool)url:(id)arg1 evaluateInPredicateArray:(id)arg2;
- (void)onClickWeb:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setTitleForWuLiuPage:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isHas_mkjdcnCookie;
- (void)requestLoacl:(id)arg1;
- (void)jsCallNativeMethod:(id)arg1;
- (void)webViewGoback;
- (void)closeKepler;
- (void)tapDotButton:(id)arg1;
- (void)tapRightButton:(id)arg1;
- (void)tapLeftButton:(id)arg1;
- (_Bool)otherAchorToMainAnchor:(id)arg1;
- (_Bool)isOtherAnchor:(id)arg1;
- (long long)getTopViewState:(id)arg1;
- (_Bool)isURL:(id)arg1 inAnchorArray:(id)arg2;
- (void)timerStop;
- (void)timerTrick;
- (void)timerSchedule;
- (void)webViewRelaod;
- (id)viewController;
- (void)jumpOrderDetail;
- (id)cookieString:(id)arg1;
- (id)updateCookieJSString;
- (id)createWK;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

