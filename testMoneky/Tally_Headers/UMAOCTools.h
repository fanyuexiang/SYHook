//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMAOCTools : NSObject
{
}

+ (id)blackPrefix:(id)arg1;
+ (void)swizzleSelector:(SEL)arg1 altSelector:(SEL)arg2;
+ (void)setupHook;
- (void)umchook_viewDidDisappear:(_Bool)arg1;
- (void)umchook_viewDidAppear:(_Bool)arg1;

@end

