//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HeimdallrBUUtilities : NSObject
{
}

+ (id)systemName;
+ (id)systemVersion;
+ (id)heimdallrRootPath;
+ (id)libraryPath;
+ (void)initPath;
+ (id)payloadWithDecryptData:(id)arg1 withKey:(id)arg2 iv:(id)arg3;
+ (_Bool)isClassFromApp:(Class)arg1;
+ (id)dateStringFromDate:(id)arg1 isUTC:(_Bool)arg2 isMilloFormat:(_Bool)arg3;
+ (void)initialize;
+ (void)load;

@end
