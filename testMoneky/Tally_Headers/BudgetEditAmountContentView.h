//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class BudgetEditAmountKeyboardView, BudgetEditAmountTextField, NSString, SKThemeSettingItem, UIButton, UILabel;

@interface BudgetEditAmountContentView : UIView <UITextFieldDelegate>
{
    SKThemeSettingItem *_themeModel;
    double _minValue;
    unsigned long long _minLength;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _submitBlock;
    UIButton *_allBtn;
    UIView *_topView;
    UIButton *_closeBtn;
    UILabel *_titleLab;
    BudgetEditAmountTextField *_txtField;
    UIButton *_submitBtn;
    BudgetEditAmountKeyboardView *_keyboardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BudgetEditAmountKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) BudgetEditAmountTextField *txtField; // @synthesize txtField=_txtField;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIButton *allBtn; // @synthesize allBtn=_allBtn;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(retain, nonatomic) SKThemeSettingItem *themeModel; // @synthesize themeModel=_themeModel;
- (void)textFieldDidChange:(id)arg1;
- (void)editingChaned;
- (void)deleteAction;
- (void)digitButtonAction:(id)arg1;
- (void)submitBtnAction;
- (void)closeBtnAction;
- (void)allBtnAction;
- (void)beginEditAction;
- (void)loadData:(id)arg1 placeHolder:(id)arg2;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

