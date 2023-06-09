//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CSJDislikeNewRealInputView, UIImageView, UILabel, UITextField;
@protocol CSJDislikeNewInputViewDelegate;

@interface CSJDislikeNewInputView : UIView
{
    _Bool _validInputAccessoryView;
    _Bool _showKeyboard;
    id <CSJDislikeNewInputViewDelegate> _delegate;
    UITextField *_placeholderTextField;
    UIImageView *_imageView;
    UILabel *_suggestionLabel;
    CSJDislikeNewRealInputView *_dislikeNewRealInputView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJDislikeNewRealInputView *dislikeNewRealInputView; // @synthesize dislikeNewRealInputView=_dislikeNewRealInputView;
@property(retain, nonatomic) UILabel *suggestionLabel; // @synthesize suggestionLabel=_suggestionLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UITextField *placeholderTextField; // @synthesize placeholderTextField=_placeholderTextField;
@property(nonatomic) __weak id <CSJDislikeNewInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showKeyboard; // @synthesize showKeyboard=_showKeyboard;
@property(nonatomic) _Bool validInputAccessoryView; // @synthesize validInputAccessoryView=_validInputAccessoryView;
- (double)backupInputViewRealHeight;
- (double)inputViewRealHeight;
- (void)layoutSubviews;
- (void)handleCustomAccessoryViewWithNotification:(id)arg1;
- (void)uiKeyboardDidHideNotification:(id)arg1;
- (void)uiKeyboardWillHideNotification:(id)arg1;
- (void)uiKeyboardDidShowNotification:(id)arg1;
- (void)uiKeyboardWillShowNotification:(id)arg1;
- (id)inputAccessoryView;
- (void)hideKeyboard;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setDarkStyle;
- (void)setLightStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

