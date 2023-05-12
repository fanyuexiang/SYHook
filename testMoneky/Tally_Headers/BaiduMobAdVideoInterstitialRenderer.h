//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdVideoRenderer.h"

#import "BaiduMobAdActionComposerDelegate-Protocol.h"

@class NSString, UIButton;

@interface BaiduMobAdVideoInterstitialRenderer : BaiduMobAdVideoRenderer <BaiduMobAdActionComposerDelegate>
{
    _Bool _isVolumeON;
    UIButton *_btnVolume;
    UIButton *_btnSkip;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *btnSkip; // @synthesize btnSkip=_btnSkip;
@property(nonatomic) _Bool isVolumeON; // @synthesize isVolumeON=_isVolumeON;
@property(retain, nonatomic) UIButton *btnVolume; // @synthesize btnVolume=_btnVolume;
- (void)sendUnRetryUrl:(id)arg1;
- (_Bool)newWindowTransform;
- (void)changeOrientation;
- (void)didChangeOrientation;
- (void)willEnterForeground;
- (void)didFinishWithResult:(id)arg1;
- (void)checkActiveState:(id)arg1;
- (void)doAction:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)clickFullScreen:(id)arg1;
- (void)closeEndCard:(id)arg1;
- (void)clickEndCard:(id)arg1;
- (void)showEndCard;
- (void)prepareEndCardWithDelegate:(id)arg1;
- (void)clickSkip;
- (void)clickVolume;
- (void)onPlayerItemDidReachEnd:(id)arg1;
- (void)stop;
- (void)pause;
- (void)setupUI;
- (id)initWithAdRendererHelper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
