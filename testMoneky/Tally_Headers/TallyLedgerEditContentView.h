//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class CAGradientLayer, NSString, TallyLedgerEditContentColorButton, TallyLedgerEditContentViewDataSource, TallyLedgerInfo, UIButton, UIImageView, UILabel, UITextField;

@interface TallyLedgerEditContentView : UIView <UITextFieldDelegate>
{
    _Bool _editState;
    UIButton *_allBtn;
    UIView *_naviView;
    UILabel *_titleLab;
    UIButton *_saveBtn;
    UIView *_iconView;
    CAGradientLayer *_gradientLayer;
    UIImageView *_iconImgView;
    UIView *_nameTextView;
    UITextField *_nameTextField;
    UIView *_colorsView;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _saveBlock;
    TallyLedgerEditContentViewDataSource *_dataSource;
    TallyLedgerInfo *_defaultModel;
    TallyLedgerEditContentColorButton *_selectedColorButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TallyLedgerEditContentColorButton *selectedColorButton; // @synthesize selectedColorButton=_selectedColorButton;
@property(retain, nonatomic) TallyLedgerInfo *defaultModel; // @synthesize defaultModel=_defaultModel;
@property(nonatomic) _Bool editState; // @synthesize editState=_editState;
@property(retain, nonatomic) TallyLedgerEditContentViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) UIView *colorsView; // @synthesize colorsView=_colorsView;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) UIView *nameTextView; // @synthesize nameTextView=_nameTextView;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *naviView; // @synthesize naviView=_naviView;
@property(retain, nonatomic) UIButton *allBtn; // @synthesize allBtn=_allBtn;
- (void)loadEditData:(id)arg1;
- (void)loadAddData:(id)arg1;
- (void)saveBtnAction;
- (void)closeBtnAction;
- (void)allBtnAction;
- (void)dynamicBtnStateAction;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)inputShouldRight:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)reloadDataWithColors;
- (void)clickColorButton:(id)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

