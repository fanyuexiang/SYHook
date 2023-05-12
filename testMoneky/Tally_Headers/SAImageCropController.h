//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SAImageCropMaskView, UIButton, UIImage, UIImageView, UIScrollView, UIView;
@protocol SAImageCropDelegate;

@interface SAImageCropController : UIViewController <UIScrollViewDelegate>
{
    _Bool _navigationBarHidden;
    _Bool _originalNaviBarHidden;
    id <SAImageCropDelegate> _delegate;
    double _maxScale;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    SAImageCropMaskView *_maskView;
    UIView *_buttonView;
    UIButton *_cancelButton;
    UIButton *_cropButton;
    UIImage *_image;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool originalNaviBarHidden; // @synthesize originalNaviBarHidden=_originalNaviBarHidden;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIButton *cropButton; // @synthesize cropButton=_cropButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) SAImageCropMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic) double maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) __weak id <SAImageCropDelegate> delegate; // @synthesize delegate=_delegate;
- (id)fixOrientation:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)scrollToCenter;
- (void)refreshScrollView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)cropImage;
- (void)cancelAction;
- (void)cropImageAction;
- (void)layoutSubViews;
- (void)initSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (struct CGRect)imageViewRectWithImage:(id)arg1;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
