//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshBackStateFooter.h"

@class UIActivityIndicatorView, UIImageView;

@interface MJRefreshBackNormalFooter : MJRefreshBackStateFooter
{
    UIImageView *_arrowView;
    long long _activityIndicatorViewStyle;
    UIActivityIndicatorView *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)prepare;
@property(readonly, nonatomic) __weak UIImageView *arrowView;

@end

