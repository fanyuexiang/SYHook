//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CSJVideofinishViewProtocol-Protocol.h"

@class CSJAdSlot, CSJMaterialMeta, NSString, UIButton, UIImageView;

@interface CSJDrawVideoFinishView : UIView <CSJVideofinishViewProtocol>
{
    CDUnknownBlockType detailClick;
    CSJMaterialMeta *materialMeta;
    CSJAdSlot *adSlot;
    CDUnknownBlockType _replayClick;
    UIView *_maskView;
    UIButton *_detailButton;
    UIButton *_replayButton;
    UIImageView *_finishBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *finishBackgroundView; // @synthesize finishBackgroundView=_finishBackgroundView;
@property(retain, nonatomic) UIButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType replayClick; // @synthesize replayClick=_replayClick;
@property(retain, nonatomic) CSJAdSlot *adSlot; // @synthesize adSlot;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta;
@property(copy, nonatomic) CDUnknownBlockType detailClick; // @synthesize detailClick;
- (void)addAccessibilityIdentifier;
- (void)setFinishViewDataWithMaterialMeta:(id)arg1;
- (void)reSetFrameWithsuperFrame:(struct CGRect)arg1;
- (void)replay:(id)arg1;
- (void)goToDetail:(id)arg1;
- (void)buildViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

