//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol BaiduMobAdAnswerCardComponentDelegate <NSObject>

@optional
- (void)nativeAnswerCardComponentDismiss:(UIView *)arg1 viewId:(NSString *)arg2 viewName:(NSString *)arg3;
- (void)nativeAnswerCardComponentSelected:(_Bool)arg1 view:(UIView *)arg2 viewId:(NSString *)arg3 viewName:(NSString *)arg4;
- (void)nativeAnswerCardComponentShowed:(UIView *)arg1 viewId:(NSString *)arg2 viewName:(NSString *)arg3;
@end
