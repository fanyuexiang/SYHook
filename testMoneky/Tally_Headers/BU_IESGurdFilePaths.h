//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BU_IESGurdFilePaths : NSObject
{
}

+ (void)setCacheRootDirectoryPath:(id)arg1;
+ (id)cacheRootDirectoryPath;
+ (id)backupPathForMd5:(id)arg1;
+ (id)inactiveZipPathForAccessKey:(id)arg1 channel:(id)arg2 version:(long long)arg3 md5:(id)arg4;
+ (id)inactivePathForAccessKey:(id)arg1 channel:(id)arg2;
+ (id)directoryPathForAccessKey:(id)arg1 channel:(id)arg2 path:(id)arg3;
+ (id)directoryPathForAccessKey:(id)arg1 channel:(id)arg2;
+ (id)directoryPathForAccessKey:(id)arg1;
+ (id)activeMetaDataPath;
+ (id)inactiveMetaDataPath;
+ (id)backupDirectoryPath;
+ (id)inactiveDirectoryPath;
+ (void)initialize;
+ (id)briefFilePathWithFullPath:(id)arg1;
+ (id)fileSizeStringAtPath:(id)arg1;
+ (unsigned long long)fileSizeAtPath:(id)arg1;

@end

