//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdComponentView.h"

#import "BaiduMobAdComponentLottieDelegate-Protocol.h"

@class BaiduMobAdComponentLottieView, NSMutableDictionary, NSString, UIView;
@protocol BaiduMobAdInteractiveBackCardComponentDelegate;

@interface BaiduMobAdInteractiveBackCardComponent : BaiduMobAdComponentView <BaiduMobAdComponentLottieDelegate>
{
    NSMutableDictionary *_l_child_view;
    NSMutableDictionary *_l_child_model;
    id <BaiduMobAdInteractiveBackCardComponentDelegate> _delegate;
    UIView *_interactiveBackView;
    BaiduMobAdComponentLottieView *_interactiveBackLottieView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaiduMobAdComponentLottieView *interactiveBackLottieView; // @synthesize interactiveBackLottieView=_interactiveBackLottieView;
@property(retain, nonatomic) UIView *interactiveBackView; // @synthesize interactiveBackView=_interactiveBackView;
@property(nonatomic) __weak id <BaiduMobAdInteractiveBackCardComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *l_child_model; // @synthesize l_child_model=_l_child_model;
@property(retain, nonatomic) NSMutableDictionary *l_child_view; // @synthesize l_child_view=_l_child_view;
- (void)destoryInteractiveBackCardComponent;
- (void)closeBackCard;
- (void)showBackView;
- (void)successCreatComponentView:(id)arg1 model:(id)arg2;
- (void)renderInteractiveBackCardComponent;
- (id)initWithFrame:(struct CGRect)arg1 superView:(id)arg2 model:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
