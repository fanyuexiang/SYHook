//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTPlayerControlProtocol-Protocol.h"
#import "GDTPlayerControlViewProtocol-Protocol.h"

@class GDTPlayer, NSString, UIButton;

@interface GDTFeedControlView : UIView <GDTPlayerControlProtocol, GDTPlayerControlViewProtocol>
{
    _Bool _isShow;
    GDTPlayer *player;
    UIButton *_logoButton;
    UIButton *_playOrPauseBtn;
    struct CGSize _playButtonSize;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) struct CGSize playButtonSize; // @synthesize playButtonSize=_playButtonSize;
@property(retain, nonatomic) UIButton *playOrPauseBtn; // @synthesize playOrPauseBtn=_playOrPauseBtn;
@property(retain, nonatomic) UIButton *logoButton; // @synthesize logoButton=_logoButton;
@property(nonatomic) __weak GDTPlayer *player; // @synthesize player;
- (void).cxx_destruct;
- (void)GDTfunctionk5L609:(_Bool)arg1;
- (_Bool)GDTfunctionl8UbT3:(struct CGPoint)arg1 gestureType:(unsigned long long)arg2 touch:(id)arg3;
- (void)GDTfunctionq75T05;
- (void)GDTfunctionf2InWO;
- (void)GDTfunctionx5nqXC;
- (void)gdt_player:(id)arg1 bufferTime:(double)arg2 totalTime:(double)arg3;
- (void)gdt_player:(id)arg1 currentTime:(double)arg2 totalTime:(double)arg3;
- (void)GDTfunctionq53PH7;
- (void)GDTfunctionb152Tl;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

