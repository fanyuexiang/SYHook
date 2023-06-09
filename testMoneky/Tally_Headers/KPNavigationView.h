//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel;
@protocol KPNavigationButtonDelegate;

@interface KPNavigationView : UIView
{
    long long _currentNavigationState;
    UILabel *_titleLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIButton *_dotButton;
    UIButton *_naviLeftButton;
    UIButton *_naviMiddleButton;
    UIButton *_naviRightButton;
    UIButton *_selectedButton;
    UIButton *_preSelectedButton;
    UIView *_naviSlideView;
    UIView *_btmLineView;
    id <KPNavigationButtonDelegate> _delegate;
    NSLayoutConstraint *_naviSliderViewLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *naviSliderViewLayout; // @synthesize naviSliderViewLayout=_naviSliderViewLayout;
@property(nonatomic) __weak id <KPNavigationButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *btmLineView; // @synthesize btmLineView=_btmLineView;
@property(retain, nonatomic) UIView *naviSlideView; // @synthesize naviSlideView=_naviSlideView;
@property(nonatomic) __weak UIButton *preSelectedButton; // @synthesize preSelectedButton=_preSelectedButton;
@property(nonatomic) __weak UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) UIButton *naviRightButton; // @synthesize naviRightButton=_naviRightButton;
@property(retain, nonatomic) UIButton *naviMiddleButton; // @synthesize naviMiddleButton=_naviMiddleButton;
@property(retain, nonatomic) UIButton *naviLeftButton; // @synthesize naviLeftButton=_naviLeftButton;
@property(retain, nonatomic) UIButton *dotButton; // @synthesize dotButton=_dotButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long currentNavigationState; // @synthesize currentNavigationState=_currentNavigationState;
- (void)updateNaviButtonsWhenSelectButton:(id)arg1;
- (void)naviButtonClicked:(id)arg1;
- (void)updateNaviButtonsWhenSelectIndex:(id)arg1;
- (void)initButtons:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

