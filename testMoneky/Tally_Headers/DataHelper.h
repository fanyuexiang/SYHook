//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DataHelper : NSObject
{
}

+ (_Bool)isDebugable;
+ (void)makeUserReport:(int)arg1 errorCode:(int)arg2 timeCost:(long long)arg3 rsv1:(char *)arg4 rsv2:(char *)arg5 rsv3:(char *)arg6 rsv4:(char *)arg7;
+ (_Bool)shouldUtOrNot:(long long)arg1 ratio:(id)arg2;
+ (id)getPluginVersion:(id *)arg1;
+ (id)convertToJsonData:(id)arg1;
+ (id)long2NSString:(long long)arg1;
+ (_Bool)hasLoginModule;
+ (void)setHasLoginModule:(_Bool)arg1;

@end

