//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol ABUBaidu_BaiduMobAdNativeVideoView;

@protocol ABUBaidu_BaiduMobAdNativeVideoViewDelegate <NSObject>
- (void)nativeVideoAdDidReadyForDisplay:(UIView<ABUBaidu_BaiduMobAdNativeVideoView> *)arg1;
- (void)nativeVideoAdDidFailed:(UIView<ABUBaidu_BaiduMobAdNativeVideoView> *)arg1;
- (void)nativeVideoAdDidComplete:(UIView<ABUBaidu_BaiduMobAdNativeVideoView> *)arg1;
- (void)nativeVideoAdDidReplay:(UIView<ABUBaidu_BaiduMobAdNativeVideoView> *)arg1;
- (void)nativeVideoAdDidPause:(UIView<ABUBaidu_BaiduMobAdNativeVideoView> *)arg1;
- (void)nativeVideoAdDidStartPlaying:(UIView<ABUBaidu_BaiduMobAdNativeVideoView> *)arg1;
@end

