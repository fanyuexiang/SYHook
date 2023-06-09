//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JXPagerListContainerView, UIScrollView;
@protocol JXPagerViewListViewDelegate;

@protocol JXPagerListContainerViewDelegate <NSObject>
- (id <JXPagerViewListViewDelegate>)listContainerView:(JXPagerListContainerView *)arg1 initListForIndex:(long long)arg2;
- (long long)numberOfListsInlistContainerView:(JXPagerListContainerView *)arg1;

@optional
- (void)listContainerView:(JXPagerListContainerView *)arg1 listDidAppearAtIndex:(long long)arg2;
- (void)listContainerViewWDidEndScroll:(JXPagerListContainerView *)arg1;
- (void)listContainerViewWillBeginDragging:(JXPagerListContainerView *)arg1;
- (void)listContainerViewDidScroll:(UIScrollView *)arg1;
- (_Bool)listContainerView:(JXPagerListContainerView *)arg1 canInitListAtIndex:(long long)arg2;
- (Class)scrollViewClassInlistContainerView:(JXPagerListContainerView *)arg1;
@end

