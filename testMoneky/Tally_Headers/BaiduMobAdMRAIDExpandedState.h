//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BaiduMobAdMRAIDState-Protocol.h"

@class NSString;

@interface BaiduMobAdMRAIDExpandedState : NSObject <BaiduMobAdMRAIDState>
{
}

+ (id)instance;
+ (void)initialize;
- (_Bool)canExpand;
- (void)resize:(id)arg1;
- (void)close:(id)arg1;
- (void)expand:(id)arg1;
- (void)completeLoading:(id)arg1;
- (id)stateName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

