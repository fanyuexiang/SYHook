//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface InputAlertView : UIAlertView <UITextFieldDelegate, UIAlertViewDelegate>
{
    long long _maxLength;
    CDUnknownBlockType _finishInputBlock;
}

+ (void)playNewViewSound;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType finishInputBlock; // @synthesize finishInputBlock=_finishInputBlock;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)textFieldEditChanged:(id)arg1;
- (id)initWithTitle:(id)arg1 placeholder:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 finishInputBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
