//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface CSJDislikeHeaderViewForTwo : UIView
{
    CDUnknownBlockType _dislikeBack;
    UIImageView *_backImg;
    UIButton *_backButton;
    UILabel *_titleLable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIImageView *backImg; // @synthesize backImg=_backImg;
@property(copy, nonatomic) CDUnknownBlockType dislikeBack; // @synthesize dislikeBack=_dislikeBack;
- (void)tapBack;
- (id)initWithFrame:(struct CGRect)arg1;

@end

