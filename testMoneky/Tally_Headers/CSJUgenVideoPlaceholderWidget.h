//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UgenWidget.h"

@class BUPlayer, CSJUgenVideoView, NSString, UIImageView;

@interface CSJUgenVideoPlaceholderWidget : UgenWidget
{
    _Bool _muted;
    _Bool _shouldReplay;
    _Bool _needAdMaskToImageView;
    CSJUgenVideoView *_adView;
    NSString *_src;
    NSString *_coverSrc;
    BUPlayer *_player;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needAdMaskToImageView; // @synthesize needAdMaskToImageView=_needAdMaskToImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) BUPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *coverSrc; // @synthesize coverSrc=_coverSrc;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) CSJUgenVideoView *adView; // @synthesize adView=_adView;
@property(nonatomic) _Bool shouldReplay; // @synthesize shouldReplay=_shouldReplay;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void)removePlugInView;
- (_Bool)isRealVideo;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool playFinished;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)pbu_update_playerView_gaosiIfNeed;
- (void)pbu_updateImageViewMaskIfNeed;
- (void)pbu_updateSubviewFrame:(id)arg1;
- (void)pbu_insertVideo;
- (void)pbu_insertImageWhenVideoUrlIsInvalidIfNeed;
- (void)bindAttributeValue:(id)arg1 forKey:(id)arg2;
- (void)viewSizeDidChange:(struct CGSize)arg1;
- (void)render;
- (id)ugenView;
- (id)init;

@end
