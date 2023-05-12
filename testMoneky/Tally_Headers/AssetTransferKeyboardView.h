//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CBBillDatePicker, NSString, SKThemeSettingItem, UIButton;

@interface AssetTransferKeyboardView : UIView
{
    CDUnknownBlockType _digitBlock;
    CDUnknownBlockType _deleteBlock;
    CDUnknownBlockType _finishBlock;
    SKThemeSettingItem *_theme;
    NSString *_dateValue;
    CBBillDatePicker *_datePicker;
    UIButton *_deleteButton;
    UIButton *_dateButton;
    UIButton *_finishButton;
}

+ (double)keyboarViewHeight;
+ (id)dateFormatter;
+ (id)todayDateValue;
- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(nonatomic) __weak UIButton *dateButton; // @synthesize dateButton=_dateButton;
@property(nonatomic) __weak UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) CBBillDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(copy, nonatomic) NSString *dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) SKThemeSettingItem *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType digitBlock; // @synthesize digitBlock=_digitBlock;
- (void)resetDateValue:(id)arg1;
- (void)resetTheme:(id)arg1;
- (void)playSound:(id)arg1;
- (void)finishButtonAction:(id)arg1;
- (void)dateButtonAction:(id)arg1;
- (void)backButtonAction:(id)arg1;
- (void)digitButtonAction:(id)arg1;
- (void)refreshDateAction;
- (void)refreshThemeAction;
- (void)addKeyboard;
- (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;
- (void)dealloc;

@end

