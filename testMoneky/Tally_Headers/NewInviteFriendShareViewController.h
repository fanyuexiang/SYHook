//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface NewInviteFriendShareViewController : UIViewController
{
    UIView *_whiteView;
    CDUnknownBlockType _clickShareBtn;
    CDUnknownBlockType _cancelHandle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelHandle; // @synthesize cancelHandle=_cancelHandle;
@property(copy, nonatomic) CDUnknownBlockType clickShareBtn; // @synthesize clickShareBtn=_clickShareBtn;
- (void)show;
- (void)shareClick:(id)arg1;
- (void)clickClose;
- (void)setupViews;
- (void)viewDidLoad;

@end
