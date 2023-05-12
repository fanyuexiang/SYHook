//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GLWXLoginGuideAccountView, GLWXLoginGuideStepView, NSDictionary, WXLoginButton;

@interface GLWXLoginGuideController : UIViewController
{
    _Bool _tokenExpired;
    _Bool _newUserFromServer;
    NSDictionary *_wxLoginInfo;
    NSDictionary *_userInfoFromServer;
    CDUnknownBlockType _loginSuccess;
    GLWXLoginGuideAccountView *_accountView;
    GLWXLoginGuideStepView *_stepView;
    WXLoginButton *_wxLoginBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXLoginButton *wxLoginBtn; // @synthesize wxLoginBtn=_wxLoginBtn;
@property(nonatomic) __weak GLWXLoginGuideStepView *stepView; // @synthesize stepView=_stepView;
@property(nonatomic) __weak GLWXLoginGuideAccountView *accountView; // @synthesize accountView=_accountView;
@property(copy, nonatomic) CDUnknownBlockType loginSuccess; // @synthesize loginSuccess=_loginSuccess;
@property(retain, nonatomic) NSDictionary *userInfoFromServer; // @synthesize userInfoFromServer=_userInfoFromServer;
@property(nonatomic) _Bool newUserFromServer; // @synthesize newUserFromServer=_newUserFromServer;
@property(retain, nonatomic) NSDictionary *wxLoginInfo; // @synthesize wxLoginInfo=_wxLoginInfo;
@property(nonatomic) _Bool tokenExpired; // @synthesize tokenExpired=_tokenExpired;
- (void)firstReloadData;
- (void)setupStepView:(id)arg1;
- (void)setupAccountView;
- (void)viewDidLoad;
- (void)dealloc;

@end

