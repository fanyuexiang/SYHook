//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, VIPLimitedCountDown;

@interface VIPPopopStayView : UIView
{
    double _viewleft;
    long long _viewType;
    UIView *_bgView;
    UILabel *_countdownLabel;
    VIPLimitedCountDown *_countdown;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VIPLimitedCountDown *countdown; // @synthesize countdown=_countdown;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
- (void)tohide;
- (void)toshow;
- (void)endShow;
- (void)clickendshow;
- (void)closeShow;
- (void)refreshTime;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

