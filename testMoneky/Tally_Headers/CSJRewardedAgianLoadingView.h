//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface CSJRewardedAgianLoadingView : UIView
{
    UIView *_hudView;
    UIActivityIndicatorView *_activityIndicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIView *hudView; // @synthesize hudView=_hudView;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
