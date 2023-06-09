//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BaiduMobAdComponentLottieManager, BaiduMobAdComponentModel;
@protocol BaiduMobAdComponentLottieDelegate;

@interface BaiduMobAdComponentLottieView : UIView
{
    _Bool _removeOnCompletion;
    _Bool _hiddenOnCompletion;
    _Bool _removeSuperViewOnCompletion;
    _Bool _hiddenSuperViewOnCompletion;
    id <BaiduMobAdComponentLottieDelegate> _delegate;
    BaiduMobAdComponentLottieManager *_animationManager;
    BaiduMobAdComponentModel *_model;
    UIView *_lottieSuperView;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIView *lottieSuperView; // @synthesize lottieSuperView=_lottieSuperView;
@property(nonatomic) _Bool hiddenSuperViewOnCompletion; // @synthesize hiddenSuperViewOnCompletion=_hiddenSuperViewOnCompletion;
@property(nonatomic) _Bool removeSuperViewOnCompletion; // @synthesize removeSuperViewOnCompletion=_removeSuperViewOnCompletion;
@property(nonatomic) _Bool hiddenOnCompletion; // @synthesize hiddenOnCompletion=_hiddenOnCompletion;
@property(nonatomic) _Bool removeOnCompletion; // @synthesize removeOnCompletion=_removeOnCompletion;
@property(retain, nonatomic) BaiduMobAdComponentModel *model; // @synthesize model=_model;
@property(retain, nonatomic) BaiduMobAdComponentLottieManager *animationManager; // @synthesize animationManager=_animationManager;
@property(nonatomic) __weak id <BaiduMobAdComponentLottieDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destoryAnimation;
- (void)pauseAnimation;
- (void)stopAnimation;
- (void)playAnimationPrivateFromProgress;
- (void)playAnimationFromProgress:(double)arg1;
- (void)playAnimationPrivate;
- (void)playAnimation;
- (void)setDuration:(id)arg1;
- (void)adClick;
- (void)noClick;
- (id)initWithFrame:(struct CGRect)arg1 superView:(id)arg2 model:(id)arg3;

@end

