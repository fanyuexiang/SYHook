//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CountdownButton, LoginPhoneCodeTextView, LoginPhonePwdTextView, NSString, RegisterAgreePrivacyView, UIButton, UITextField, WXLoginButton;

@interface GLPhoneLoginController : UIViewController <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    _Bool _agreementTipShow;
    LoginPhoneCodeTextView *_phoneCodeView;
    UITextField *_codeTextField;
    CountdownButton *_codeCountdownBtn;
    LoginPhonePwdTextView *_phonePwdView;
    UITextField *_pwdTextField;
    UIButton *_pwdSecureBtn;
    UIButton *_loginBtn;
    UIButton *_findPwdBtn;
    RegisterAgreePrivacyView *_privacyView;
    WXLoginButton *_wxLoginBtn;
    long long _loginType;
}

- (void).cxx_destruct;
@property(nonatomic) long long loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) WXLoginButton *wxLoginBtn; // @synthesize wxLoginBtn=_wxLoginBtn;
@property(nonatomic) _Bool agreementTipShow; // @synthesize agreementTipShow=_agreementTipShow;
@property(retain, nonatomic) RegisterAgreePrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) UIButton *findPwdBtn; // @synthesize findPwdBtn=_findPwdBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(nonatomic) __weak UIButton *pwdSecureBtn; // @synthesize pwdSecureBtn=_pwdSecureBtn;
@property(nonatomic) __weak UITextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(retain, nonatomic) LoginPhonePwdTextView *phonePwdView; // @synthesize phonePwdView=_phonePwdView;
@property(nonatomic) __weak CountdownButton *codeCountdownBtn; // @synthesize codeCountdownBtn=_codeCountdownBtn;
@property(nonatomic) __weak UITextField *codeTextField; // @synthesize codeTextField=_codeTextField;
@property(retain, nonatomic) LoginPhoneCodeTextView *phoneCodeView; // @synthesize phoneCodeView=_phoneCodeView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)closeActionAnimated:(_Bool)arg1;
- (void)secureAction:(id)arg1;
- (void)tapGestureAction;
- (void)findPwdAction;
- (void)registerAction;
- (void)switchLoginAction;
- (void)codeLogin;
- (void)requestVerCode:(id)arg1;
- (void)wxLoginAction;
- (void)showFindPwdTip:(id)arg1;
- (void)pwdLogin;
- (void)moreLogin;
- (void)loginAction;
- (void)registerTipShow;
- (void)switchPhoneLotinType:(long long)arg1;
- (void)showPhonePwdView:(_Bool)arg1;
- (void)showPhoneCodeView:(_Bool)arg1;
- (void)setupContentView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

