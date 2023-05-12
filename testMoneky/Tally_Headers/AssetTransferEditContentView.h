//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class AssetTransferEditAmountTextField, AssetTransferEditCardView, AssetTransferEditController, AssetTransferKeyboardView, NSString, SKThemeSettingItem, UIButton, UILabel;

@interface AssetTransferEditContentView : UIView <UITextFieldDelegate>
{
    AssetTransferEditController *_controller;
    UIButton *_allBtn;
    UIView *_topView;
    UIButton *_closeBtn;
    UILabel *_titleLab;
    AssetTransferEditCardView *_outTransferView;
    AssetTransferEditCardView *_inTransferView;
    UILabel *_amountTitleLab;
    AssetTransferEditAmountTextField *_txtField;
    AssetTransferKeyboardView *_keyboardView;
    SKThemeSettingItem *_themeModel;
    double _minValue;
    unsigned long long _minLength;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _submitBlock;
    CDUnknownBlockType _exchangeBlock;
    CDUnknownBlockType _selectBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(copy, nonatomic) CDUnknownBlockType exchangeBlock; // @synthesize exchangeBlock=_exchangeBlock;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(retain, nonatomic) SKThemeSettingItem *themeModel; // @synthesize themeModel=_themeModel;
@property(retain, nonatomic) AssetTransferKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) AssetTransferEditAmountTextField *txtField; // @synthesize txtField=_txtField;
@property(retain, nonatomic) UILabel *amountTitleLab; // @synthesize amountTitleLab=_amountTitleLab;
@property(retain, nonatomic) AssetTransferEditCardView *inTransferView; // @synthesize inTransferView=_inTransferView;
@property(retain, nonatomic) AssetTransferEditCardView *outTransferView; // @synthesize outTransferView=_outTransferView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIButton *allBtn; // @synthesize allBtn=_allBtn;
@property(nonatomic) __weak AssetTransferEditController *controller; // @synthesize controller=_controller;
- (_Bool)cardTypeIsLiabilitiesCard:(id)arg1;
- (id)cardTypeValue:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)editingChaned;
- (void)deleteAction;
- (void)digitButtonAction:(id)arg1;
- (void)exchangeBtnAction;
- (void)closeBtnAction;
- (void)allBtnAction;
- (void)beginEditAction;
- (void)reloadDataWithTransfer:(id)arg1 accountModel:(id)arg2;
- (void)reloadDataWithInTransfer;
- (void)reloadDataWithOutTransfer;
- (void)loadData;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
