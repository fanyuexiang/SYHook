//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BaiduMobAdInstance, UIButton, UILabel;

@interface BaiduMobAdSkipButtonView : UIView
{
    UIButton *_skipBtn;
    UILabel *_skipButtonLabel;
    double _containerHeight;
    double _containerWidth;
    long long _seconds;
    BaiduMobAdInstance *_adInstance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaiduMobAdInstance *adInstance; // @synthesize adInstance=_adInstance;
@property(nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property(nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
@property(nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) UILabel *skipButtonLabel; // @synthesize skipButtonLabel=_skipButtonLabel;
@property(retain, nonatomic) UIButton *skipBtn; // @synthesize skipBtn=_skipBtn;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setRemainTimeForSkipTime:(long long)arg1;
- (id)remainTimeFormatString;
- (void)addSkipBtnTextLabel;
- (void)addSkipBtn;
- (id)initWithFrame:(struct CGRect)arg1 withInstance:(id)arg2;

@end

