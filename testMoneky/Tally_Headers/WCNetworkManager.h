//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCNetworkManager : NSObject
{
}

+ (void)generateOrderWithPriceID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)requestBalance:(CDUnknownBlockType)arg1;
+ (void)requestToken:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (id)GET:(id)arg1 parameters:(id)arg2 signStr:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)GET:(id)arg1 parameters:(id)arg2 specialKeys:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)POST:(id)arg1 parameters:(id)arg2 signStr:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)POST:(id)arg1 parameters:(id)arg2 specialKeys:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end
