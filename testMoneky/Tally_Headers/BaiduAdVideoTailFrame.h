//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BaiduMobAdActButton, NSString, UIButton, UIImageView, UILabel;

@interface BaiduAdVideoTailFrame : UIView
{
    _Bool _isHorizontalContainer;
    _Bool _isHorizontalVideo;
    int _font;
    int _actionType;
    BaiduMobAdActButton *_btnLP;
    UIButton *_btnReplay;
    CDUnknownBlockType _block;
    UILabel *_brandName;
    UILabel *_title;
    UIImageView *_iconImage;
    UIImageView *_starImageView;
    NSString *_appNamePlace;
    NSString *_descPlace;
    NSString *_iconImageUrlString;
    double _videoScale;
    double _verticalContonerScale;
    struct CGRect _endFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHorizontalVideo; // @synthesize isHorizontalVideo=_isHorizontalVideo;
@property(nonatomic) _Bool isHorizontalContainer; // @synthesize isHorizontalContainer=_isHorizontalContainer;
@property(nonatomic) double verticalContonerScale; // @synthesize verticalContonerScale=_verticalContonerScale;
@property(nonatomic) double videoScale; // @synthesize videoScale=_videoScale;
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) int font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *iconImageUrlString; // @synthesize iconImageUrlString=_iconImageUrlString;
@property(retain, nonatomic) NSString *descPlace; // @synthesize descPlace=_descPlace;
@property(retain, nonatomic) NSString *appNamePlace; // @synthesize appNamePlace=_appNamePlace;
@property(retain, nonatomic) UIImageView *starImageView; // @synthesize starImageView=_starImageView;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *brandName; // @synthesize brandName=_brandName;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIButton *btnReplay; // @synthesize btnReplay=_btnReplay;
@property(retain, nonatomic) BaiduMobAdActButton *btnLP; // @synthesize btnLP=_btnLP;
- (void)resizeFrame:(struct CGRect)arg1;
- (double)getVerticalContonerScale:(struct CGRect)arg1;
- (void)frameItemClick:(id)arg1;
- (void)setCommonUI;
- (int)getVideoOrientaionFontWithObject:(id)arg1;
- (void)addVerticalTailFrameView;
- (void)addHorizontalTailFrameView;
- (id)initWithFrame:(struct CGRect)arg1 withObject:(id)arg2;

@end

