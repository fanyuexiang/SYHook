//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UILabel;

@interface CouponMarqueeView : UIView
{
    UILabel *_label;
    UIView *_contentView;
    NSDictionary *_attributes;
    NSString *_text;
    double _speed;
    double _contentWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)stopAnimation;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1 contentFrame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

