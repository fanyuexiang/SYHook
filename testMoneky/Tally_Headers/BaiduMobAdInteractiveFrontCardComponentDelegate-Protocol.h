//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol BaiduMobAdInteractiveFrontCardComponentDelegate <NSObject>

@optional
- (void)nativeInteractiveFrontCardComponentClose:(UIView *)arg1 viewId:(NSString *)arg2 viewName:(NSString *)arg3;
- (void)nativeInteractiveFrontCardComponentClick:(UIView *)arg1 viewId:(NSString *)arg2 viewName:(NSString *)arg3;
- (void)nativeInteractiveFrontCardComponentShowed:(UIView *)arg1 viewId:(NSString *)arg2 viewName:(NSString *)arg3;
@end
