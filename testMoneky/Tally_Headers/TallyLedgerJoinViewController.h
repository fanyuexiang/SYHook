//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIScrollView, UITextField, UITextView;

@interface TallyLedgerJoinViewController : UIViewController <UITextFieldDelegate, UIGestureRecognizerDelegate, UITextViewDelegate, UINavigationControllerDelegate>
{
    UIScrollView *_contentScroll;
    UITextView *_desTextView;
    UIButton *_commitBtn;
    UITextField *_codeTextField;
    UIButton *_backBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UITextField *codeTextField; // @synthesize codeTextField=_codeTextField;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)commitButtonAction;
- (void)textFieldDidChange:(id)arg1;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tapAction;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

