//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, UIImage, UILabel;

@interface LuckyWheelImageView : UIImageView
{
    UIImageView *_coverImgView;
    UILabel *_titleLabel;
    _Bool _selected;
    UIImage *_bgNormalImage;
    UIImage *_bgSelectedImage;
    UIImage *_coverImageURL;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(retain, nonatomic) UIImage *bgSelectedImage; // @synthesize bgSelectedImage=_bgSelectedImage;
@property(retain, nonatomic) UIImage *bgNormalImage; // @synthesize bgNormalImage=_bgNormalImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

