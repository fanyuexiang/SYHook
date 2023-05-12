//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CSJImmersiveMiddleExpressDelegate-Protocol.h"

@class CSJImmersiveMiddleExpressUtility, CSJNativeAd, CSJNativeExpressAdView, NSString;

@interface CSJImmersiveMiddlePageViewController : UIViewController <CSJImmersiveMiddleExpressDelegate>
{
    _Bool _renderImmersiveTemplateSuccesss;
    _Bool _middlePageViewDidAppear;
    CDUnknownBlockType _CloseBlock;
    CSJNativeAd *_nativeAd;
    CSJImmersiveMiddleExpressUtility *_middleExpressManager;
    CSJNativeExpressAdView *_expressAdView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool middlePageViewDidAppear; // @synthesize middlePageViewDidAppear=_middlePageViewDidAppear;
@property(nonatomic) _Bool renderImmersiveTemplateSuccesss; // @synthesize renderImmersiveTemplateSuccesss=_renderImmersiveTemplateSuccesss;
@property(retain, nonatomic) CSJNativeExpressAdView *expressAdView; // @synthesize expressAdView=_expressAdView;
@property(retain, nonatomic) CSJImmersiveMiddleExpressUtility *middleExpressManager; // @synthesize middleExpressManager=_middleExpressManager;
@property(retain, nonatomic) CSJNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
@property(copy, nonatomic) CDUnknownBlockType CloseBlock; // @synthesize CloseBlock=_CloseBlock;
- (void)nativeExpressView:(id)arg1 creativeClickWithMaterial:(id)arg2;
- (void)nativeExpressViewImmersiveMiddlePageBack:(id)arg1;
- (void)gotDetailPageWith:(id)arg1;
- (void)showStoreProductWithAppID:(id)arg1;
- (void)middlePageVideoDetailBackup;
- (void)middleRenderFailBackup;
- (void)closeVideoDetailView;
- (void)middleRenderSuccess:(id)arg1;
- (void)showImmersiveMiddlePage;
- (void)viewWillLayoutSubviews;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initImmersiveMiddlePageWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
