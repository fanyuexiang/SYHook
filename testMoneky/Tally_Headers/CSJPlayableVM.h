//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJRewardFullScreenBaseVM.h"

#import "CSJPurePlayableLoadingViewControllerDelegate-Protocol.h"

@class NSString;

@interface CSJPlayableVM : CSJRewardFullScreenBaseVM <CSJPurePlayableLoadingViewControllerDelegate>
{
}

- (_Bool)isPlayableRenderFailed;
- (void)purePlayableVolumeChange:(id)arg1 isMute:(_Bool)arg2;
- (void)purePlayableRemoveLoadingByTimeout;
- (void)clickButtonTapFromPlayableLoading;
- (void)rewardReport;
- (void)handlePurePlayablePlayFinish;
- (void)closeBtnControl:(_Bool)arg1;
- (void)leftLblControl:(_Bool)arg1;
- (void)updateLeftSeconds:(id)arg1;
- (void)startTimer;
- (void)vmLoadData;
- (id)initViewModelWithMeta:(id)arg1 rootViewController:(id)arg2 slot:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

