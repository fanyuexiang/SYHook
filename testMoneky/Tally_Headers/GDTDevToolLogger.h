//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTDevToolLogger : NSObject
{
}

+ (id)publicKey;
+ (struct __SecKey *)publicKeyRef;
+ (_Bool)createLogDirectoryIfNeeded;
+ (id)logDirectory;
+ (id)createLogFile;
+ (id)typeStr:(unsigned long long)arg1;
+ (id)encryptLogStr:(id)arg1 type:(unsigned long long)arg2;
+ (id)getLogFilePaths;
+ (void)saveLogIfNeeded:(id)arg1 type:(unsigned long long)arg2;
+ (void)saveJsonObjectIfNeeded:(id)arg1 type:(unsigned long long)arg2;

@end

