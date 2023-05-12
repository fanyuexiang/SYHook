//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class BaiduMobAdMarketingLogo, NSString;

@interface BaiduMobAdMarketingLabel : UILabel
{
    double _marketingFontSize;
    NSString *_marketingDesc;
    NSString *_marketingIcon;
    NSString *_title;
    BaiduMobAdMarketingLogo *_marketingLogo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaiduMobAdMarketingLogo *marketingLogo; // @synthesize marketingLogo=_marketingLogo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *marketingIcon; // @synthesize marketingIcon=_marketingIcon;
@property(retain, nonatomic) NSString *marketingDesc; // @synthesize marketingDesc=_marketingDesc;
@property(nonatomic) double marketingFontSize; // @synthesize marketingFontSize=_marketingFontSize;
- (void)setMarketingLabelTextColor:(id)arg1;
- (void)setMarketingLogoBorderWidth:(id)arg1;
- (void)setMarketingLogoBorderColor:(id)arg1;
- (void)handleAttachment;
- (void)render;
- (id)initWithFrame:(struct CGRect)arg1 marketingFontSize:(double)arg2 marketingDesc:(id)arg3 marketingIcon:(id)arg4 title:(id)arg5;

@end

