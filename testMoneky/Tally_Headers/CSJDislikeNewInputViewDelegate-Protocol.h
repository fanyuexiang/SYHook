//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSJDislikeNewInputView, NSString, UIView;

@protocol CSJDislikeNewInputViewDelegate <NSObject>
- (void)keyboardDidHideInDislikeNewInputView:(CSJDislikeNewInputView *)arg1;
- (void)keyboardWillHideInDislikeNewInputView:(CSJDislikeNewInputView *)arg1;
- (void)keyboardDidShowInDislikeNewInputView:(CSJDislikeNewInputView *)arg1;
- (void)keyboardWillShowInDislikeNewInputView:(CSJDislikeNewInputView *)arg1;
- (void)dislikeNewInputView:(CSJDislikeNewInputView *)arg1 inputText:(NSString *)arg2;
- (UIView *)containerViewInDislikeNewInputView:(CSJDislikeNewInputView *)arg1;
@end

