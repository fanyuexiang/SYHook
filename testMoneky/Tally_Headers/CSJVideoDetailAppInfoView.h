//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CSJMaterialMeta, UIButton, UIImageView, UILabel;
@protocol CSJVideoDetailAppInfoViewDelegate;

@interface CSJVideoDetailAppInfoView : UIView
{
    id <CSJVideoDetailAppInfoViewDelegate> _delegate;
    UIImageView *_adAppIconImageView;
    UILabel *_adTitleLabel;
    UILabel *_adDescriptionLabel;
    UIButton *_adDownloadButton;
    CSJMaterialMeta *_materialMeta;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(retain, nonatomic) UIButton *adDownloadButton; // @synthesize adDownloadButton=_adDownloadButton;
@property(retain, nonatomic) UILabel *adDescriptionLabel; // @synthesize adDescriptionLabel=_adDescriptionLabel;
@property(retain, nonatomic) UILabel *adTitleLabel; // @synthesize adTitleLabel=_adTitleLabel;
@property(retain, nonatomic) UIImageView *adAppIconImageView; // @synthesize adAppIconImageView=_adAppIconImageView;
@property(nonatomic) __weak id <CSJVideoDetailAppInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)c_xyDict_secWithTapView:(id)arg1;
- (void)adAction:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubViews;
- (id)initWithMaterial:(id)arg1;

@end
