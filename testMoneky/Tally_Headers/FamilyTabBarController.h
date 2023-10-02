//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "UITabBarControllerDelegate-Protocol.h"

@class NSDictionary, NSString, UILabel, UIViewController;

@interface FamilyTabBarController : UITabBarController <UITabBarControllerDelegate>
{
    UILabel *_selectedLabel;
    long long _lasetSelectedIndex;
    NSDictionary *_extraParameters;
    UIViewController *_vipController;
}

+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *vipController; // @synthesize vipController=_vipController;
@property(retain, nonatomic) NSDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
- (void)responseNotification:(id)arg1;
- (id)currentSeletedViewController;
- (void)goCloseAction;
- (void)goVIPAction;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)setupTabbarInfo;
- (void)setupTabBar;
- (void)parseParameters:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)sa_setSelectedIndex:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

