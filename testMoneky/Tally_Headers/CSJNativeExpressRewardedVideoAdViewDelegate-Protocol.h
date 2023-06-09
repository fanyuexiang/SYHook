//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BUPlayer, NSDictionary, NSError;

@protocol CSJNativeExpressRewardedVideoAdViewDelegate <NSObject>

@optional
- (void)nativeExpressRewardedPlayAgain;
- (double)playableStayDuration;
- (NSDictionary *)nativeExpressInteractiveFinished:(NSDictionary *)arg1;
- (void)nativeExpressRewardedVideoPushPlayableLandingPage;
- (void)dismissCurrentViewControllerIsSkip:(_Bool)arg1;
- (void)switchToWebViewController:(_Bool)arg1;
- (void)nativeExpressRewardedVideoDidPlayFinish:(BUPlayer *)arg1 error:(NSError *)arg2;
- (void)nativeExpressRewardedVideoDidPlayRewardTime:(BUPlayer *)arg1;
@end

