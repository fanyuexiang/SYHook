//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface PrivacyAgreementController : UIViewController
{
    UIView *_bgView;
    _Bool _noNeedSecondView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool noNeedSecondView; // @synthesize noNeedSecondView=_noNeedSecondView;
- (void)quitAction;
- (void)setupSecondView;
- (void)rightBtnAction;
- (void)leftBtnAction;
- (void)lookAgreement:(id)arg1 url:(id)arg2;
- (void)lookPrivacyAgreement;
- (void)lookUserAgreement;
- (void)viewDidLoad;

@end

