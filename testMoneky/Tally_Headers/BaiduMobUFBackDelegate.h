//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BaiduMobUFBackLogDelegate-Protocol.h"

@class NSString;

@interface BaiduMobUFBackDelegate : NSObject <BaiduMobUFBackLogDelegate>
{
}

- (id)encodeURL:(id)arg1;
- (id)formatParams:(id)arg1;
- (void)postUrl:(id)arg1 header:(id)arg2 body:(id)arg3 requestCompletion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

