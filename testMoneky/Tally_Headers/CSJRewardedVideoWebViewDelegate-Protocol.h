//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSJRewardedVideoWebViewController, NSDictionary;

@protocol CSJRewardedVideoWebViewDelegate <NSObject>

@optional
- (void)sendPlayableReward;
- (void)setCurrentVideoProgress:(long long)arg1;
- (long long)currentVideoProgress;
- (void)updateNativeTitleBar:(_Bool)arg1;
- (void)rewardedVideoInteractiveSkip:(long long)arg1;
- (void)showRewardBrowseEcomAlert:(NSDictionary *)arg1;
- (void)playableRenderFaild:(CSJRewardedVideoWebViewController *)arg1;
- (void)rewardedVideoWebViewControllerOpenUrlWithParams:(NSDictionary *)arg1;
- (void)rewardedVideoWebViewControllerBackVideo:(CSJRewardedVideoWebViewController *)arg1;
- (void)rewardedVideoWebViewControllerJumpEndcard:(CSJRewardedVideoWebViewController *)arg1;
- (void)rewardedVideoWebViewControllerCloseClick:(CSJRewardedVideoWebViewController *)arg1;
- (void)rewardedVideoWebViewControllerSkipClick:(CSJRewardedVideoWebViewController *)arg1;
- (void)rewardedVideoWebViewControllerDislikeClick:(CSJRewardedVideoWebViewController *)arg1;
- (void)rewardedVideoWebViewControllerVolumeChange:(CSJRewardedVideoWebViewController *)arg1 isMute:(_Bool)arg2;
- (void)rewardedVideoWebViewControllerClick:(CSJRewardedVideoWebViewController *)arg1 clickInfo:(NSDictionary *)arg2;
- (void)purePlayableRemoveLoadingByJSB;
- (void)purePlayableSendRewardFromH5Callback;
- (void)bu_webviewLoadFinish:(CSJRewardedVideoWebViewController *)arg1;
- (void)rewardedVideoH5AdDidClickNeedJump:(_Bool)arg1;
- (void)rewardedVideoAdClose;
@end

