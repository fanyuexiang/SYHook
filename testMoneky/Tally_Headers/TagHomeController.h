//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;

@interface TagHomeController : UIViewController <UIViewControllerTransitioningDelegate>
{
    CDUnknownBlockType _didSelectedTagHandle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didSelectedTagHandle; // @synthesize didSelectedTagHandle=_didSelectedTagHandle;
- (void)changeButtonAlpha:(double)arg1;
- (void)tapGestureAction;
- (void)addTagAction:(id)arg1;
- (void)addTagButtonWithFrame:(struct CGRect)arg1 title:(id)arg2 image:(id)arg3 tag:(long long)arg4;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

