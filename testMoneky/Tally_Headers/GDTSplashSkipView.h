//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTExtensionView.h"

#import "GDTCustomGestureRecognizerDelegate-Protocol.h"

@class NSString, NSTimer, UIView;
@protocol GDTSplashViewDelegate;

@interface GDTSplashSkipView : GDTExtensionView <GDTCustomGestureRecognizerDelegate>
{
    _Bool _isCustomSkipView;
    id <GDTSplashViewDelegate> _delegate;
    UIView *_contentView;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isCustomSkipView; // @synthesize isCustomSkipView=_isCustomSkipView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <GDTSplashViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)GDTfunctiony3KwEQ:(id)arg1 endedWithTouches:(id)arg2 andEvent:(id)arg3;
- (id)initLi4Z1sM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

