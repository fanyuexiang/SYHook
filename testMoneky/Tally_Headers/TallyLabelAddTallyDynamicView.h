//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSNumber, NSString, UIButton, UIColor, UIFont;
@protocol TallyLabelAddTallyDynamicViewProtocal;

@interface TallyLabelAddTallyDynamicView : UIView
{
    _Bool _supportSelected;
    double _insetMargin;
    double _hSpace;
    double _vSpace;
    double _vHeight;
    double _minWidth;
    UIColor *_normalBgColor;
    UIColor *_highlightedBgColor;
    UIColor *_selectedBgColor;
    UIColor *_normalTitleColor;
    UIColor *_highlightedTitleColor;
    UIColor *_selectedTitleColor;
    UIFont *_titleFont;
    NSNumber *_supportClickIndex;
    id <TallyLabelAddTallyDynamicViewProtocal> _delegate;
    double _cornerRadius;
    long long _baseTag;
    double _allHeight;
    NSMutableArray *_data;
    NSString *_baseSelVal;
    UIButton *_selectedBtn;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(copy, nonatomic) NSString *baseSelVal; // @synthesize baseSelVal=_baseSelVal;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(nonatomic) double allHeight; // @synthesize allHeight=_allHeight;
@property(nonatomic) long long baseTag; // @synthesize baseTag=_baseTag;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) __weak id <TallyLabelAddTallyDynamicViewProtocal> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *supportClickIndex; // @synthesize supportClickIndex=_supportClickIndex;
@property(nonatomic) _Bool supportSelected; // @synthesize supportSelected=_supportSelected;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(retain, nonatomic) UIColor *highlightedTitleColor; // @synthesize highlightedTitleColor=_highlightedTitleColor;
@property(retain, nonatomic) UIColor *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
@property(retain, nonatomic) UIColor *selectedBgColor; // @synthesize selectedBgColor=_selectedBgColor;
@property(retain, nonatomic) UIColor *highlightedBgColor; // @synthesize highlightedBgColor=_highlightedBgColor;
@property(retain, nonatomic) UIColor *normalBgColor; // @synthesize normalBgColor=_normalBgColor;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) double vHeight; // @synthesize vHeight=_vHeight;
@property(nonatomic) double vSpace; // @synthesize vSpace=_vSpace;
@property(nonatomic) double hSpace; // @synthesize hSpace=_hSpace;
@property(nonatomic) double insetMargin; // @synthesize insetMargin=_insetMargin;
- (double)sk_widthWithString:(id)arg1 font:(id)arg2 textColor:(id)arg3 limitSize:(struct CGSize)arg4 textAlignment:(long long)arg5;
- (id)sk_attributedStringWithString:(id)arg1 font:(id)arg2 textColor:(id)arg3 lineSpacing:(double)arg4 textAlignment:(long long)arg5;
- (void)clickButtonAction:(id)arg1;
- (double)regetViewHeight;
- (void)refreshView;
- (void)reloadData:(id)arg1 selVal:(id)arg2;
- (void)reloadButtonsColor;
- (id)regetCurrentSelected;
- (void)resetButtonSelectedState:(id)arg1;
- (void)resetButtonNormalState:(id)arg1;
- (id)createTagButton:(struct CGRect)arg1;
- (void)configBaseInfo;
- (id)initWithFrame:(struct CGRect)arg1;

@end

