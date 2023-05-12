//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KPWebViewController, UIViewController;

@interface KPFastLoginModel : NSObject
{
    _Bool _isFastLogin;
    UIViewController *_viewController;
    KPWebViewController *_kpWebViewController;
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureCallback; // @synthesize failureCallback=_failureCallback;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(retain, nonatomic) KPWebViewController *kpWebViewController; // @synthesize kpWebViewController=_kpWebViewController;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool isFastLogin; // @synthesize isFastLogin=_isFastLogin;
- (void)dismissViewControllerWithToken:(id)arg1 success:(_Bool)arg2;
- (void)getToken_ByCode:(id)arg1;
- (id)sdkWebLoginAuth;
- (void)keplerFastLoginWithVC:(id)arg1;
- (void)keplerFastLogin;

@end
