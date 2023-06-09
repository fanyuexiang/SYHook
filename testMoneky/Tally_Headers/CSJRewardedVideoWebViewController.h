//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJWebViewController.h"

#import "CSJRewardedVideoWebDefaultViewDelegate-Protocol.h"

@class CSJRewardedVideoWebViewControllerVM, NSString;
@protocol CSJRewardedVideoWebViewDelegate;

@interface CSJRewardedVideoWebViewController : CSJWebViewController <CSJRewardedVideoWebDefaultViewDelegate>
{
    CSJRewardedVideoWebViewControllerVM *_videoWebVM;
    struct CGSize _originSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize originSize; // @synthesize originSize=_originSize;
@property(retain, nonatomic) CSJRewardedVideoWebViewControllerVM *videoWebVM; // @synthesize videoWebVM=_videoWebVM;
- (id)playableVM;
- (id)endcardVM;
- (void)webCloseButtonTapped;
@property(nonatomic) unsigned long long transformDirection;
@property(nonatomic) _Bool mute;
@property(copy, nonatomic) NSString *ritScene;
@property(nonatomic) _Bool isRewardedVideo;
@property(nonatomic) _Bool isTransform;
@property(nonatomic) __weak id <CSJRewardedVideoWebViewDelegate> delegate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initViewControllerWithAd:(id)arg1 size:(struct CGSize)arg2 isNativeExpress:(_Bool)arg3 pageType:(unsigned long long)arg4;
- (id)initViewControllerWithAd:(id)arg1 isNativeExpress:(_Bool)arg2 pageType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

