//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BaiduMobAdPermissionSettings : NSObject
{
    _Bool _deviceIdPermission;
    _Bool _storagePermission;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool storagePermission; // @synthesize storagePermission=_storagePermission;
@property(nonatomic) _Bool deviceIdPermission; // @synthesize deviceIdPermission=_deviceIdPermission;
- (void)setReadStorageInfoPermission:(_Bool)arg1;
- (void)setReadDeviceIdPermission:(_Bool)arg1;

@end

