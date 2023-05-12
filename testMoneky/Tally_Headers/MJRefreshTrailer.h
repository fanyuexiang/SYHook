//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshComponent.h"

@interface MJRefreshTrailer : MJRefreshComponent
{
    double _ignoredScrollViewContentInsetRight;
    long long _lastRefreshCount;
    double _lastRightDelta;
}

+ (id)trailerWithRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
+ (id)trailerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) double lastRightDelta; // @synthesize lastRightDelta=_lastRightDelta;
@property(nonatomic) long long lastRefreshCount; // @synthesize lastRefreshCount=_lastRefreshCount;
@property(nonatomic) double ignoredScrollViewContentInsetRight; // @synthesize ignoredScrollViewContentInsetRight=_ignoredScrollViewContentInsetRight;
- (double)widthForContentBreakView;
- (double)happenOffsetX;
- (id)linkTo:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)placeSubviews;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)setState:(long long)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;

@end
