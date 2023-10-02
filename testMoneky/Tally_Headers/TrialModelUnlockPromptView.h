//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UIViewController;

@interface TrialModelUnlockPromptView : UIView
{
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _useBlock;
    UIViewController *_parentController;
    UIView *_conView;
    UILabel *_titleLab;
    UIButton *_closeBtn;
    UILabel *_subtitleLab;
    UIImageView *_showImgView;
    UIButton *_useBtn;
}

+ (id)showWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *useBtn; // @synthesize useBtn=_useBtn;
@property(retain, nonatomic) UIImageView *showImgView; // @synthesize showImgView=_showImgView;
@property(retain, nonatomic) UILabel *subtitleLab; // @synthesize subtitleLab=_subtitleLab;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *conView; // @synthesize conView=_conView;
@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController=_parentController;
@property(copy, nonatomic) CDUnknownBlockType useBlock; // @synthesize useBlock=_useBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void)useAction;
- (void)closeAction;
- (void)close:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

