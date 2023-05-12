//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdVideoRenderer.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface BaiduMobAdPrerollVideoRenderer : BaiduMobAdVideoRenderer
{
    _Bool _mute;
    UIImageView *_iconImageView;
    UIView *_descView;
    UILabel *_titleLabel;
    UIButton *_volumeBtn;
    double _currentVolume;
    UIView *_logoView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) double currentVolume; // @synthesize currentVolume=_currentVolume;
@property(retain, nonatomic) UIButton *volumeBtn; // @synthesize volumeBtn=_volumeBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
- (void)reSizeInAnimateDuration:(double)arg1 targetFrame:(struct CGRect)arg2;
- (void)reSize;
- (void)onPlayerItemDidReachEnd:(id)arg1;
- (void)skip;
- (void)volumeClick:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)pause;
- (void)getIconImage;
- (void)setupUI;
- (id)initWithAdRendererHelper:(id)arg1;

@end

