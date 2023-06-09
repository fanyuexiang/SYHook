//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BudgetEditAmountContentView, NSString, UIButton;

@interface BudgetEditAmountController : UIViewController
{
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _submitBlock;
    double _viewTop;
    double _duration;
    double _perDuration;
    double _colorAlpha;
    double _perColorAlpha;
    NSString *_titleValue;
    NSString *_placeHolderValue;
    UIButton *_allCloseBtn;
    BudgetEditAmountContentView *_contentView;
}

+ (id)skPresentViewConroller:(id)arg1 theme:(id)arg2 title:(id)arg3 placeHolder:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) BudgetEditAmountContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *allCloseBtn; // @synthesize allCloseBtn=_allCloseBtn;
@property(copy, nonatomic) NSString *placeHolderValue; // @synthesize placeHolderValue=_placeHolderValue;
@property(copy, nonatomic) NSString *titleValue; // @synthesize titleValue=_titleValue;
@property(nonatomic) double perColorAlpha; // @synthesize perColorAlpha=_perColorAlpha;
@property(nonatomic) double colorAlpha; // @synthesize colorAlpha=_colorAlpha;
@property(nonatomic) double perDuration; // @synthesize perDuration=_perDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double viewTop; // @synthesize viewTop=_viewTop;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (double)contentViewHeight;
- (void)clickButtonAction:(id)arg1;
- (void)dynamicChangeBackgroundColor;
- (double)recalculateCloseAnimationDuration;
- (double)recalculateShowAnimationDuration;
- (void)close;
- (void)show;
- (void)setupViews;
- (void)viewDidLoad;

@end

