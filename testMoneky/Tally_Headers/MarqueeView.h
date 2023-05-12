//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, NSString, UIImageView, UILabel, UIView;

@interface MarqueeView : UIButton
{
    UILabel *_label;
    UIImageView *_leftImageView;
    UIView *_contentView;
    NSDictionary *_attributes;
    _Bool _hideRightBtn;
    NSString *_text;
    NSString *_leftImageName;
    UIButton *_rightBtn;
    double _contentWidth;
    double _speed;
    long long _action;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideRightBtn; // @synthesize hideRightBtn=_hideRightBtn;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(copy, nonatomic) NSString *leftImageName; // @synthesize leftImageName=_leftImageName;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setRightImageName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentFrame:(struct CGRect)arg2;

@end

