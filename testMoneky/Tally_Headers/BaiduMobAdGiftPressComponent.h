//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdComponentView.h"

#import "BaiduMobAdComponentLottieDelegate-Protocol.h"

@class BaiduMobAdComponentLottieView, NSMutableDictionary, NSString, UIView;
@protocol BaiduMobAdGiftPressComponentDelegate;

@interface BaiduMobAdGiftPressComponent : BaiduMobAdComponentView <BaiduMobAdComponentLottieDelegate>
{
    _Bool _isFinishAllAnimation;
    _Bool _isNeedResetAnimation;
    _Bool _isFinishCountdown;
    BaiduMobAdComponentLottieView *_guideAnimation;
    BaiduMobAdComponentLottieView *_countdownAnimation;
    BaiduMobAdComponentLottieView *_giftAniamtion;
    id <BaiduMobAdGiftPressComponentDelegate> _delegate;
    NSMutableDictionary *_l_child_view;
    UIView *_guideView;
    UIView *_countdownView;
    UIView *_endView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *endView; // @synthesize endView=_endView;
@property(retain, nonatomic) UIView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) UIView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) NSMutableDictionary *l_child_view; // @synthesize l_child_view=_l_child_view;
@property(nonatomic) _Bool isFinishCountdown; // @synthesize isFinishCountdown=_isFinishCountdown;
@property(nonatomic) _Bool isNeedResetAnimation; // @synthesize isNeedResetAnimation=_isNeedResetAnimation;
@property(nonatomic) _Bool isFinishAllAnimation; // @synthesize isFinishAllAnimation=_isFinishAllAnimation;
@property(nonatomic) __weak id <BaiduMobAdGiftPressComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BaiduMobAdComponentLottieView *giftAniamtion; // @synthesize giftAniamtion=_giftAniamtion;
@property(retain, nonatomic) BaiduMobAdComponentLottieView *countdownAnimation; // @synthesize countdownAnimation=_countdownAnimation;
@property(retain, nonatomic) BaiduMobAdComponentLottieView *guideAnimation; // @synthesize guideAnimation=_guideAnimation;
- (void)destoryGiftComponent;
- (void)nativeComponentLottieSendFinish:(_Bool)arg1 view:(id)arg2 viewName:(id)arg3 special:(id)arg4;
- (void)longPress:(id)arg1;
- (void)successCreatComponentView:(id)arg1 model:(id)arg2;
- (void)resetAnimation;
- (id)getGiftPressChildViews;
- (void)createAnimation:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 superView:(id)arg2 model:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
