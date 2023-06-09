//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdWebExpandController, UIButton, UIWindow;
@protocol BaiduMobAdWebExpandComposerDelegate;

@interface BaiduMobAdWebExpandComposer : NSObject
{
    BaiduMobAdWebExpandController *_controller;
    id <BaiduMobAdWebExpandComposerDelegate> _delegate;
    UIButton *_closeButton;
    UIWindow *_innerADWindow;
    UIWindow *_userCurrentWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *userCurrentWindow; // @synthesize userCurrentWindow=_userCurrentWindow;
@property(retain, nonatomic) UIWindow *innerADWindow; // @synthesize innerADWindow=_innerADWindow;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <BaiduMobAdWebExpandComposerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BaiduMobAdWebExpandController *controller; // @synthesize controller=_controller;
- (void)close;
- (void)closeButtonClick:(id)arg1;
- (void)expand:(_Bool)arg1;
- (id)initWithHTMLRender:(id)arg1;

@end

