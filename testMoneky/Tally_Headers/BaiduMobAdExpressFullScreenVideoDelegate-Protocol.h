//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BaiduMobAdExpressFullScreenVideoViewController, NSDictionary;

@protocol BaiduMobAdExpressFullScreenVideoDelegate <NSObject>

@optional
- (void)fullScreenVideoCloseClick:(BaiduMobAdExpressFullScreenVideoViewController *)arg1 withObject:(NSDictionary *)arg2;
- (void)fullScreenVideoSkipClick:(BaiduMobAdExpressFullScreenVideoViewController *)arg1 withObject:(NSDictionary *)arg2;
- (void)fullScreenVideoFinishPlayingSuccess:(BaiduMobAdExpressFullScreenVideoViewController *)arg1;
@end

