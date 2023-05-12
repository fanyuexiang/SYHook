//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADNativeAdImage, UIView;
@protocol GADVideoControlling;

@protocol GADMediaContentDisplaying <NSObject>
@property(retain, nonatomic) GADNativeAdImage *mainImage;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) id <GADVideoControlling> videoController;
@property(readonly, nonatomic) UIView *mediaView;
@end
