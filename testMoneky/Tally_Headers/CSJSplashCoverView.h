//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJCoverView.h"

@class CSJSplashBottomView, UILabel;

@interface CSJSplashCoverView : CSJCoverView
{
    _Bool _skipButtonDidTimeout;
    UILabel *_splashClickText;
    CSJSplashBottomView *_bottomMask;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool skipButtonDidTimeout; // @synthesize skipButtonDidTimeout=_skipButtonDidTimeout;
@property(retain, nonatomic) CSJSplashBottomView *bottomMask; // @synthesize bottomMask=_bottomMask;
@property(retain, nonatomic) UILabel *splashClickText; // @synthesize splashClickText=_splashClickText;
- (void)dealloc;
- (void)showBottomMaskWithAnimation;
- (void)startAccelerometer;
- (void)relayoutBottomMask;
- (_Bool)needAddBottomMask;
- (void)pbu_override_buildViewData;
- (void)pbu_override_buildView;
- (void)layoutSubviews;
- (void)_CSJADViewSkipButtonDidTimeoutWithNotif:(id)arg1;
- (void)_CSJADViewDidVisibleWithNotif:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

