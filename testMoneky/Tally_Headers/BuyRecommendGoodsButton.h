//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, NSString, UIImageView, UILabel;

@interface BuyRecommendGoodsButton : UIButton
{
    UIImageView *_tmallImgView;
    UIImageView *_imgView;
    UILabel *_nameLabel;
    UILabel *_couponLabel;
    UILabel *_salesCountLabel;
    UILabel *_priceLabel;
    UILabel *_originPriceLabel;
    double _fontScale;
    UILabel *_rebateLabel;
    NSDictionary *_data;
    NSString *_eventLabel;
    long long _platformType;
}

- (void).cxx_destruct;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(copy, nonatomic) NSString *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void)goDetail;
- (void)setupContentWithShadowContentView:(id)arg1;

@end
