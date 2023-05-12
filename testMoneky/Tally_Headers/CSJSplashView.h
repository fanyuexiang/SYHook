//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJAdBaseView.h"

#import "CSJNativeExpressAdConverterDelegate-Protocol.h"
#import "CSJNativeExpressAdViewDelegate-Protocol.h"
#import "CSJNativeExpressSplashVideoAdViewDelegate-Protocol.h"
#import "CSJSplashViewModelDelegate-Protocol.h"

@class CSJNativeExpressAdConverter, CSJNativeExpressSplashVideoAdView, CSJSkipButton, CSJSplashViewModel, NSString, UIButton, UIImageView, UILabel, UIView, UIViewController;
@protocol CSJSplashViewDelegate;

@interface CSJSplashView : CSJAdBaseView <CSJNativeExpressAdViewDelegate, CSJNativeExpressSplashVideoAdViewDelegate, CSJNativeExpressAdConverterDelegate, CSJSplashViewModelDelegate>
{
    _Bool _isShowed;
    _Bool _didSetADM;
    _Bool _isClosed;
    CSJSkipButton *_skipButton;
    UIButton *_muteButton;
    UIImageView *_adLogoIcon;
    UILabel *_adxLabel;
    UIView *_successView;
    double _showTime;
    double _realRenderTimeout;
    CSJNativeExpressSplashVideoAdView *_splashVideoAdView;
    CSJNativeExpressAdConverter *_adConverter;
    id <CSJSplashViewDelegate> _delegate;
    UIViewController *_rootViewController;
    CSJSplashViewModel *_splashViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJSplashViewModel *splashViewModel; // @synthesize splashViewModel=_splashViewModel;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <CSJSplashViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CSJNativeExpressAdConverter *adConverter; // @synthesize adConverter=_adConverter;
@property(retain, nonatomic) CSJNativeExpressSplashVideoAdView *splashVideoAdView; // @synthesize splashVideoAdView=_splashVideoAdView;
@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) _Bool didSetADM; // @synthesize didSetADM=_didSetADM;
@property(nonatomic) _Bool isShowed; // @synthesize isShowed=_isShowed;
@property(nonatomic) double realRenderTimeout; // @synthesize realRenderTimeout=_realRenderTimeout;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) UIView *successView; // @synthesize successView=_successView;
@property(retain, nonatomic) UILabel *adxLabel; // @synthesize adxLabel=_adxLabel;
@property(retain, nonatomic) UIImageView *adLogoIcon; // @synthesize adLogoIcon=_adLogoIcon;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) CSJSkipButton *skipButton; // @synthesize skipButton=_skipButton;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)addAccessibilityIdentifier;
- (_Bool)isRenderNative;
- (id)player;
- (void)safeDelegate_splashViewFinishPlayDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)safeDelegate_splashViewDidClose:(long long)arg1;
- (void)safeDelegate_splashViewDidClick;
- (void)safeDelegate_splashViewDidVisible;
- (void)safeDelegate_splashViewRenderFail;
- (void)safeDelegate_splashViewRenderSuccess;
- (void)safeDelegate_splashResourceDidLoad:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)nativeExpressSplashVideoAdViewForceQuit:(id)arg1;
- (void)nativeExpressSplashVideoAdViewFinishPlayDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeExpressSplashVideoAdViewReadyToPlay:(id)arg1;
- (void)nativeExpressAdViewDidClick:(id)arg1;
- (void)nativeExpressAdViewWillShow:(id)arg1;
- (void)nativeExpressAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressAdConverter:(id)arg1 nativeExpressAdViewArray:(id)arg2;
- (id)expressAdViewDelegateInNativeExpressAdConverter:(id)arg1;
- (void)splashResourceLoadFailWithError:(id)arg1;
- (void)splashResourceLoadSuccess;
- (void)p_tapLogo;
- (void)p_muteButtonTapped:(id)arg1;
- (void)p_updateMuteButtonWithMute:(_Bool)arg1;
- (void)p_updateSplashTypeWithModel:(id)arg1;
- (id)p_xyDictWithTouchObject:(id)arg1;
- (void)p_skipTapped:(id)arg1;
- (void)p_buildupView;
- (void)p_render;
- (_Bool)isAdValid;
- (void)dealloc;
- (void)p_bindKeyPath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)bind:(id)arg1 receiver:(id)arg2 selector:(SEL)arg3;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
