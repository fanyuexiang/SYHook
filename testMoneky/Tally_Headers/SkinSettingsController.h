//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UIScrollView, UIView;

@interface SkinSettingsController : UIViewController
{
    UIScrollView *_scrollView;
    UIImageView *_previewImgView;
    UIView *_previewBlackView;
    UIButton *_previewCoverView;
    UIButton *_lastSelectedBtn;
}

- (void).cxx_destruct;
- (void)skinDidChanged:(id)arg1;
- (void)requestContentData;
- (void)addSectionTitleViewWithTitle:(id)arg1 offsetY:(double)arg2;
- (void)setupSkinContentViewWithData:(id)arg1;
- (void)setupTopPreviewView;
- (void)setupContentScrollView;
- (void)refreshSkinExchangeStatus:(id)arg1;
- (void)skinButtonAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

