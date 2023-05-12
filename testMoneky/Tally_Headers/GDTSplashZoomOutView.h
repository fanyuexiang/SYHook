//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTClickFacadeDelegate-Protocol.h"
#import "GDTCustomGestureRecognizerDelegate-Protocol.h"
#import "GDTPlayerControlProtocol-Protocol.h"
#import "GDTVideoStoreViewControllerDelegate-Protocol.h"

@class GDTAntiSpamClickData, GDTClickFacade, GDTExtensionButton, GDTPlayer, GDTSplashAdModel, GDTVideoPlayProgressReporter, NSString, NSTimer, UILabel, UIProgressView, UIViewController;
@protocol GDTSplashZoomOutViewDelegate;

@interface GDTSplashZoomOutView : UIView <GDTCustomGestureRecognizerDelegate, GDTVideoStoreViewControllerDelegate, GDTPlayerControlProtocol, GDTClickFacadeDelegate>
{
    _Bool _isShown;
    _Bool _hasReplayed;
    _Bool _hasClicked;
    UIViewController *_rootViewController;
    id <GDTSplashZoomOutViewDelegate> _delegate;
    GDTAntiSpamClickData *_antiSpamClickData;
    GDTClickFacade *_clickFacade;
    UIView *_maskView;
    UILabel *_descLable;
    GDTExtensionButton *_closeButton;
    UIProgressView *_progressView;
    NSTimer *_timer;
}

@property(nonatomic) _Bool hasClicked; // @synthesize hasClicked=_hasClicked;
@property(nonatomic) _Bool hasReplayed; // @synthesize hasReplayed=_hasReplayed;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) GDTExtensionButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *descLable; // @synthesize descLable=_descLable;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) GDTClickFacade *clickFacade; // @synthesize clickFacade=_clickFacade;
@property(retain, nonatomic) GDTAntiSpamClickData *antiSpamClickData; // @synthesize antiSpamClickData=_antiSpamClickData;
@property(nonatomic) __weak id <GDTSplashZoomOutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)GDTfunctionr1pGyp;
- (void)GDTfunctionl0jnur;
- (void)GDTfunctionx46oKV:(id)arg1;
- (void)GDTfunctione5OHAm;
- (void)gdt_player:(id)arg1 currentTime:(double)arg2 totalTime:(double)arg3;
- (void)GDTfunctionk0qcgw;
- (void)GDTfunctionf9vOHW;
- (void)GDTfunctionb0tFdw;
- (void)GDTfunctionf3Gq5X;
- (void)GDTfunctionl2tBtl;
- (void)GDTfunctiony3KwEQ:(id)arg1 endedWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)GDTfunctiony3KwEQ:(id)arg1 beganWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)dealloc;
- (void)initLe6C1D5;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) GDTVideoPlayProgressReporter *GDTfunctionj6xnFU;
@property(retain, nonatomic) GDTSplashAdModel *adModel;
@property(nonatomic) __weak GDTPlayer *player;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

