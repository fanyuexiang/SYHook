//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTVideoView;

@protocol GDTVideoViewDelegate <NSObject>

@optional
- (void)playFinishedInVideoView:(GDTVideoView *)arg1;
- (void)videoView:(GDTVideoView *)arg1 currentPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)videoView:(GDTVideoView *)arg1 statusChanged:(unsigned long long)arg2;
@end

