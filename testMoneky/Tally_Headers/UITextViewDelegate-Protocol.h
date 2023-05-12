//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, NSTextAttachment, NSURL, UIMenu, UITextView;
@protocol UIEditMenuInteractionAnimating;

@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)textView:(UITextView *)arg1 willDismissEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)textView:(UITextView *)arg1 willPresentEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (UIMenu *)textView:(UITextView *)arg1 editMenuForTextInRange:(struct _NSRange)arg2 suggestedActions:(NSArray *)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)textViewDidChangeSelection:(UITextView *)arg1;
- (void)textViewDidChange:(UITextView *)arg1;
- (_Bool)textView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textViewDidEndEditing:(UITextView *)arg1;
- (void)textViewDidBeginEditing:(UITextView *)arg1;
- (_Bool)textViewShouldEndEditing:(UITextView *)arg1;
- (_Bool)textViewShouldBeginEditing:(UITextView *)arg1;
@end
