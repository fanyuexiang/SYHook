//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTPlayerControlProtocol-Protocol.h"
#import "GDTPlayerControlViewProtocol-Protocol.h"

@class GDTExtensionButton, GDTPlayer, NSString, UIButton;

@interface GDTPortraitControlView : UIView <GDTPlayerControlProtocol, GDTPlayerControlViewProtocol>
{
    _Bool _isShow;
    GDTPlayer *player;
    CDUnknownBlockType _closeBtnClickCallback;
    UIView *_topToolView;
    UIButton *_playOrPauseBtn;
    GDTExtensionButton *_closeButton;
    GDTExtensionButton *_muteButton;
    GDTExtensionButton *_fullScreenButton;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) GDTExtensionButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(retain, nonatomic) GDTExtensionButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) GDTExtensionButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *playOrPauseBtn; // @synthesize playOrPauseBtn=_playOrPauseBtn;
@property(retain, nonatomic) UIView *topToolView; // @synthesize topToolView=_topToolView;
@property(copy, nonatomic) CDUnknownBlockType closeBtnClickCallback; // @synthesize closeBtnClickCallback=_closeBtnClickCallback;
@property(nonatomic) __weak GDTPlayer *player; // @synthesize player;
- (void).cxx_destruct;
- (_Bool)GDTfunctionl8UbT3:(struct CGPoint)arg1 gestureType:(unsigned long long)arg2 touch:(id)arg3;
- (void)GDTfunctionq75T05;
- (void)GDTfunctionf2InWO;
- (void)GDTfunctionx5nqXC;
- (void)GDTfunctionk5L609:(_Bool)arg1;
- (void)GDTfunctions6fO2E;
- (void)layoutSubviews;
- (void)GDTfunctionr16oeb:(id)arg1;
- (void)GDTfunctionu7m0xB:(id)arg1;
- (void)GDTfunctionx662iF:(id)arg1;
- (void)GDTfunctiono0TqiB:(id)arg1;
- (void)GDTfunctioni2LqJd;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

