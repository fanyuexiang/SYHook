//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUInterfaceBaseObject.h"

@interface BUMUIResponderHelper : BUInterfaceBaseObject
{
}

+ (id)topViewController;
+ (id)topViewControllerOfWindow:(id)arg1;
+ (id)recursiveFindCurrentShowViewControllerFromViewController:(id)arg1;
+ (id)nextNavigationControllerFor:(id)arg1;
+ (id)nextViewControllerFor:(id)arg1;
+ (struct CGSize)windowSize;
+ (id)mainWindowRootViewController;
+ (id)mainWindowRootViewControllerOfWindow:(id)arg1;
+ (id)mainWindow;

@end

