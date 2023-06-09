//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTAppSettings, NSMutableDictionary, NSRecursiveLock, NSString;

@interface GDTSettingManager : NSObject
{
    NSString *rootFolder;
    NSString *appPath;
    NSString *suidPath;
    NSString *sdkPath;
    NSString *_app_sig;
    NSString *_sdk_sig;
    NSString *_suid;
    NSString *_sid;
    GDTAppSettings *_placementSettings;
    GDTAppSettings *_devSettings;
    NSMutableDictionary *_sdkSettings;
    NSMutableDictionary *_defaultSettings;
    NSString *_placement_sig;
    long long _sdkServerType;
    long long _sdkChannelType;
    NSString *_launchId;
    NSString *_sdkExt1;
    NSString *_sdkExt2;
    NSMutableDictionary *_baseInfoDict;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_displaySettings;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableDictionary *displaySettings; // @synthesize displaySettings=_displaySettings;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *baseInfoDict; // @synthesize baseInfoDict=_baseInfoDict;
@property(copy, nonatomic) NSString *sdkExt2; // @synthesize sdkExt2=_sdkExt2;
@property(copy, nonatomic) NSString *sdkExt1; // @synthesize sdkExt1=_sdkExt1;
@property(copy, nonatomic) NSString *launchId; // @synthesize launchId=_launchId;
@property(nonatomic) long long sdkChannelType; // @synthesize sdkChannelType=_sdkChannelType;
@property(nonatomic) long long sdkServerType; // @synthesize sdkServerType=_sdkServerType;
@property(copy, nonatomic) NSString *placement_sig; // @synthesize placement_sig=_placement_sig;
@property(retain, nonatomic) NSMutableDictionary *defaultSettings; // @synthesize defaultSettings=_defaultSettings;
@property(retain, nonatomic) NSMutableDictionary *sdkSettings; // @synthesize sdkSettings=_sdkSettings;
@property(retain, nonatomic) GDTAppSettings *devSettings; // @synthesize devSettings=_devSettings;
@property(retain, nonatomic) GDTAppSettings *placementSettings; // @synthesize placementSettings=_placementSettings;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *sdk_sig; // @synthesize sdk_sig=_sdk_sig;
@property(copy, nonatomic) NSString *app_sig; // @synthesize app_sig=_app_sig;
@property(retain, nonatomic) NSString *sdkPath; // @synthesize sdkPath;
@property(retain, nonatomic) NSString *suidPath; // @synthesize suidPath;
@property(retain, nonatomic) NSString *appPath; // @synthesize appPath;
@property(retain, nonatomic) NSString *rootFolder; // @synthesize rootFolder;
- (void).cxx_destruct;
- (id)allKeys;
- (void)GDTfunctionm7GC18;
- (void)GDTfunctiont67gsf:(id)arg1 placementId:(id)arg2;
- (void)GDTfunctiong613ah:(id)arg1;
- (void)setGDTfunctiong9GnvB:(id)arg1 ForKey:(id)arg2;
- (void)setGDTfunctiont18YPL:(id)arg1 ForKey:(id)arg2 ForPlacementId:(id)arg3;
- (void)GDTfunctionj9v18J:(id)arg1;
- (void)GDTfunctiony8fgM6:(id)arg1;
- (void)GDTfunctionc3ywdN:(id)arg1;
- (void)GDTfunctiond0rfL0:(id)arg1;
- (void)GDTfunctionb7NbYT:(id)arg1;
- (id)GDTfunctionr80xpO;
- (_Bool)mmaEnabled;
- (_Bool)GDTfunctiony1mmW6;
- (id)GDTfunctionb62r9g:(id)arg1;
- (id)GDTfunctionp8aLgT:(id)arg1 placementId:(id)arg2;
- (id)GDTfunctionp8aLgT:(id)arg1;
@property(readonly, copy, nonatomic) NSString *suid; // @synthesize suid=_suid;
- (void)GDTfunctionf2veLN;
- (void)GDTfunctionl5LJYb;
- (void)GDTfunctionx1aIHL;
- (void)GDTfunctioni85NCC;
- (id)GDTfunctiond3580Z;
- (void)GDTfunctionr4Z1rt;
- (id)init;

@end

