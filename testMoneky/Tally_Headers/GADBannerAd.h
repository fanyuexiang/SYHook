//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADAdContent.h"

@class GADAdVideoController, UIView;

@interface GADBannerAd : GADAdContent
{
    _Bool _isFluid;
    UIView *_adView;
    GADAdVideoController *_videoController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFluid; // @synthesize isFluid=_isFluid;
@property(readonly, nonatomic) GADAdVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) UIView *adView; // @synthesize adView=_adView;
- (void)dealloc;
- (id)initWithContext:(id)arg1 adView:(id)arg2 videoController:(id)arg3;

@end

