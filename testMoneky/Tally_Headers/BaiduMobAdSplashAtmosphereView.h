//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface BaiduMobAdSplashAtmosphereView : UIView
{
    _Bool _isClick;
    _Bool _isUseImageCache;
    double _elementSize;
    double _animDuration;
    NSArray *_picArray;
    NSMutableArray *_elementArray;
    CDUnknownBlockType _clickBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) NSMutableArray *elementArray; // @synthesize elementArray=_elementArray;
@property(nonatomic) _Bool isUseImageCache; // @synthesize isUseImageCache=_isUseImageCache;
@property(retain, nonatomic) NSArray *picArray; // @synthesize picArray=_picArray;
@property(nonatomic) _Bool isClick; // @synthesize isClick=_isClick;
@property(nonatomic) double animDuration; // @synthesize animDuration=_animDuration;
@property(nonatomic) double elementSize; // @synthesize elementSize=_elementSize;
- (void)clickAdsCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeAnimView:(id)arg1;
- (void)setupUI;
- (void)clickConfirm;
- (id)initWithFrame:(struct CGRect)arg1;

@end

