//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class LoginPhonePwdTextView, NSString, UIButton, UITextField;

@interface PhoneModifyController : UIViewController <UITextFieldDelegate>
{
    LoginPhonePwdTextView *_phonePwdView;
    UITextField *_pwdTextField;
    UIButton *_pwdSecureBtn;
    UIButton *_verBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *verBtn; // @synthesize verBtn=_verBtn;
@property(nonatomic) __weak UIButton *pwdSecureBtn; // @synthesize pwdSecureBtn=_pwdSecureBtn;
@property(nonatomic) __weak UITextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(retain, nonatomic) LoginPhonePwdTextView *phonePwdView; // @synthesize phonePwdView=_phonePwdView;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)tapAction;
- (void)secureAction:(id)arg1;
- (id)getPhoneNum;
- (void)verAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

