//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface BaiduMobAdStarsView : UIView
{
    int _fullStar;
    int _halfStar;
    int _grayStar;
}

@property(nonatomic) int grayStar; // @synthesize grayStar=_grayStar;
@property(nonatomic) int halfStar; // @synthesize halfStar=_halfStar;
@property(nonatomic) int fullStar; // @synthesize fullStar=_fullStar;
- (id)initWithFrame:(struct CGRect)arg1 textSize:(double)arg2 textColor:(id)arg3 textPosition:(id)arg4 hideRate:(_Bool)arg5;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 starsNum:(double)arg2;

@end

