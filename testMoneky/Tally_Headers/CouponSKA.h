//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CouponSKA : NSObject
{
}

+ (void)trackPageViewEnd:(id)arg1;
+ (void)trackPageViewBegin:(id)arg1;
+ (long long)trackCustomEvent:(id)arg1 args:(id)arg2;
+ (void)skaEvent:(id)arg1 attributes:(id)arg2;
+ (void)skaEvent:(id)arg1 label:(id)arg2;
+ (void)endLogPageView:(id)arg1;
+ (void)beginLogPageView:(id)arg1;
+ (void)event:(id)arg1 label:(id)arg2;
+ (void)event:(id)arg1;

@end

