//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIButton;

@interface BaiduMobAdLpToast : NSObject
{
    NSString *text;
    UIButton *contentView;
    double duration;
}

+ (void)showWithText:(id)arg1 duration:(double)arg2;
- (void).cxx_destruct;
- (void)dismissToast;
- (void)hideAnimation;
- (void)showAnimation;
- (void)show;
- (void)toastTaped:(id)arg1;
- (id)initWithText:(id)arg1;
- (void)setDuration:(double)arg1;

@end

