//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class BaiduMobAdInstance, BaiduMobAdSKTransitionDelegate, BaiduMobAdVideoLpRenderer, NSString, SKStoreProductViewController;
@protocol BaiduMobAdVideoDLViewControllerDelegate;

@interface BaiduMobAdVideoDLViewController : UIViewController <SKStoreProductViewControllerDelegate>
{
    id <BaiduMobAdVideoDLViewControllerDelegate> delegate;
    BaiduMobAdInstance *_instance;
    NSString *_appid;
    SKStoreProductViewController *_skStoreViewController;
    BaiduMobAdVideoLpRenderer *_renderer;
    BaiduMobAdSKTransitionDelegate *_transitionDelegate;
    double _origin_W;
    double _origin_H;
    struct CGRect _videoRect;
}

- (void).cxx_destruct;
@property(nonatomic) double origin_H; // @synthesize origin_H=_origin_H;
@property(nonatomic) double origin_W; // @synthesize origin_W=_origin_W;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(retain, nonatomic) BaiduMobAdSKTransitionDelegate *transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(retain, nonatomic) BaiduMobAdVideoLpRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) SKStoreProductViewController *skStoreViewController; // @synthesize skStoreViewController=_skStoreViewController;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) BaiduMobAdInstance *instance; // @synthesize instance=_instance;
@property(nonatomic) __weak id <BaiduMobAdVideoDLViewControllerDelegate> delegate; // @synthesize delegate;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)back;
- (void)clickDownload;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
