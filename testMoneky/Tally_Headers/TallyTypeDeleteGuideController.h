//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, TallyTypeDeleteGuideContentView, UIButton;

@interface TallyTypeDeleteGuideController : UIViewController
{
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _leftBlock;
    CDUnknownBlockType _rightBlock;
    double _viewTop;
    double _duration;
    double _perDuration;
    double _colorAlpha;
    double _perColorAlpha;
    NSString *_subTitleValue;
    UIButton *_allCloseBtn;
    TallyTypeDeleteGuideContentView *_contentView;
}

+ (id)skPresentViewConroller:(id)arg1 theme:(id)arg2 subTitleValue:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) TallyTypeDeleteGuideContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *allCloseBtn; // @synthesize allCloseBtn=_allCloseBtn;
@property(copy, nonatomic) NSString *subTitleValue; // @synthesize subTitleValue=_subTitleValue;
@property(nonatomic) double perColorAlpha; // @synthesize perColorAlpha=_perColorAlpha;
@property(nonatomic) double colorAlpha; // @synthesize colorAlpha=_colorAlpha;
@property(nonatomic) double perDuration; // @synthesize perDuration=_perDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double viewTop; // @synthesize viewTop=_viewTop;
@property(copy, nonatomic) CDUnknownBlockType rightBlock; // @synthesize rightBlock=_rightBlock;
@property(copy, nonatomic) CDUnknownBlockType leftBlock; // @synthesize leftBlock=_leftBlock;
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
