//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CBBillDatePicker, KeyboardCalculate, NSString, SKThemeSettingItem, UIButton, UIColor, UIImageView, UILabel;

@interface KeyboardView : UIView
{
    UIButton *_dateButton;
    double _lastNum;
    UIButton *_finishButton;
    NSString *_currentDate;
    UILabel *_moneyLabel;
    double _originWidth;
    KeyboardCalculate *_calculate;
    UIView *_redView;
    _Bool _edit;
    UILabel *_amountLabel;
    UIColor *_finishBGColor;
    UIColor *_finishTitleColor;
    CBBillDatePicker *_datePicker;
    NSString *_date;
    CDUnknownBlockType _keyboardFinishBlock;
    SKThemeSettingItem *_theme;
    long long _book_id;
    CDUnknownBlockType _amountFrameChanged;
    UIImageView *_todayImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *todayImgView; // @synthesize todayImgView=_todayImgView;
@property(copy, nonatomic) CDUnknownBlockType amountFrameChanged; // @synthesize amountFrameChanged=_amountFrameChanged;
@property(nonatomic) long long book_id; // @synthesize book_id=_book_id;
@property(retain, nonatomic) SKThemeSettingItem *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) CDUnknownBlockType keyboardFinishBlock; // @synthesize keyboardFinishBlock=_keyboardFinishBlock;
@property(nonatomic, getter=isEdit) _Bool edit; // @synthesize edit=_edit;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) CBBillDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UIColor *finishTitleColor; // @synthesize finishTitleColor=_finishTitleColor;
@property(retain, nonatomic) UIColor *finishBGColor; // @synthesize finishBGColor=_finishBGColor;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
- (id)reget_iconStrokeColor;
- (id)reget_iconFillColor;
- (id)reget_buttonContentColor;
- (id)reget_buttonHColor;
- (id)reget_buttonColor;
- (id)dateStrIsToday;
- (void)playSound:(id)arg1;
- (void)adjustMoneyFrame;
- (void)dateAction;
- (void)finishRemark;
- (void)finishButtonAction:(id)arg1;
- (void)minusAction;
- (void)plusAction;
- (void)backButtonAction:(id)arg1;
- (void)digitButtonAction:(id)arg1;
- (void)addKeyboard;
- (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1 isEdit:(_Bool)arg2 theme:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 isEdit:(_Bool)arg2;
- (void)dealloc;

@end

