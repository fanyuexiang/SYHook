//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSJCoverView, NSDictionary;

@protocol CSJCoverViewDelegate <NSObject>
- (void)coverViewClickDownload:(CSJCoverView *)arg1 clickExtraInfo:(NSDictionary *)arg2;
- (void)coverViewClickAdLogo:(CSJCoverView *)arg1;
- (void)coverViewClickClose:(CSJCoverView *)arg1;
- (void)coverViewClickVideo:(CSJCoverView *)arg1;
- (void)coverViewClick:(CSJCoverView *)arg1 areaCategory:(long long)arg2 clickExtraInfo:(NSDictionary *)arg3;
@end

