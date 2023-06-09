//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/SFSafariViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class BaiduMobAdInstance, BaiduMobAdVideoLpRenderer, NSString;
@protocol BaiduMobAdSFDelegate;

@interface BaiduMobAdSFViewController : SFSafariViewController <UIGestureRecognizerDelegate>
{
    _Bool _supportVideoLP;
    _Bool _first;
    id <BaiduMobAdSFDelegate> _sfDelegate;
    BaiduMobAdInstance *_instance;
    BaiduMobAdVideoLpRenderer *_renderer;
}

- (void).cxx_destruct;
@property _Bool first; // @synthesize first=_first;
@property(retain, nonatomic) BaiduMobAdVideoLpRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) BaiduMobAdInstance *instance; // @synthesize instance=_instance;
@property(nonatomic) _Bool supportVideoLP; // @synthesize supportVideoLP=_supportVideoLP;
@property(nonatomic) __weak id <BaiduMobAdSFDelegate> sfDelegate; // @synthesize sfDelegate=_sfDelegate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

