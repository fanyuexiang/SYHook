//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKThemeSettingItem, UIButton, UILabel, UITextField;

@interface AssetDetailEditAmountContentView : UIView
{
    UIButton *_allBtn;
    UIView *_naviView;
    UILabel *_titleLab;
    UIView *_nameTextView;
    UITextField *_nameTextField;
    UILabel *_tipLab;
    UIButton *_saveBtn;
    SKThemeSettingItem *_curThemeItem;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _saveBlock;
    long long _maxLength;
    NSString *_defValue;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *defValue; // @synthesize defValue=_defValue;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(copy, nonatomic) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) SKThemeSettingItem *curThemeItem; // @synthesize curThemeItem=_curThemeItem;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UILabel *tipLab; // @synthesize tipLab=_tipLab;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) UIView *nameTextView; // @synthesize nameTextView=_nameTextView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *naviView; // @synthesize naviView=_naviView;
@property(retain, nonatomic) UIButton *allBtn; // @synthesize allBtn=_allBtn;
- (void)refreshViewWithLayout;
- (void)saveBtnAction;
- (void)closeBtnAction;
- (void)allBtnAction;
- (void)loadDefValue:(id)arg1;
- (void)dynamicBtnStateAction;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

