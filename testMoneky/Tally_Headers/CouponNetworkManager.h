//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CouponNetworkManager : NSObject
{
}

+ (id)POST:(id)arg1 parameters:(id)arg2 specialKeys:(id)arg3 timeoutInterval:(double)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (id)POST:(id)arg1 parameters:(id)arg2 specialKeys:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (id)POST:(id)arg1 image:(id)arg2 imageData:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)POST:(id)arg1 parameters:(id)arg2 signStr:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)POST:(id)arg1 parameters:(id)arg2 specialKeys:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)POST:(id)arg1 parameters:(id)arg2 loseKeys:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)POST:(id)arg1 parameters:(id)arg2 loseKeys:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
+ (id)POST:(id)arg1 parameters:(id)arg2 loseKeys:(id)arg3 specialKeys:(id)arg4 constructingBodyWithBlock:(CDUnknownBlockType)arg5 progress:(CDUnknownBlockType)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
+ (id)POST:(id)arg1 parameters:(id)arg2 loseKeys:(id)arg3 specialKeys:(id)arg4 signStr:(id)arg5 constructingBodyWithBlock:(CDUnknownBlockType)arg6 progress:(CDUnknownBlockType)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
+ (id)GET:(id)arg1 parameters:(id)arg2 specialKeys:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)GET:(id)arg1 parameters:(id)arg2 signStr:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)GET:(id)arg1 parameters:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)GET:(id)arg1 parameters:(id)arg2 loseKeys:(id)arg3 specialKeys:(id)arg4 signStr:(id)arg5 progress:(CDUnknownBlockType)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
+ (void)updateLongitude:(double)arg1 latitude:(double)arg2;
+ (void)checkNetworkStatus;
+ (void)setupPublicParameterWithInfo:(id)arg1;
+ (void)setupPublicParameter;
+ (id)md5:(id)arg1;
+ (id)uuid;
+ (id)deviceType;
+ (id)publicParameter;

@end

