//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTMediaDownloaderDelegate-Protocol.h"

@class GDTMediaDownloader, NSString;

@interface GDTOrphanBusinessUtil : NSObject <GDTMediaDownloaderDelegate>
{
    GDTMediaDownloader *_downloader;
}

+ (_Bool)h5InnerVideoAutoPlayAudio:(id)arg1;
+ (double)twistAngle:(id)arg1;
+ (long long)twistSupportDirections:(id)arg1;
+ (id)rewardMobileType:(id)arg1;
+ (long long)versionCompare:(id)arg1 rightVersion:(id)arg2;
+ (id)refcatorExpNumber:(void *)arg1;
+ (void)setRefcatorExpNumber:(void *)arg1 value:(id)arg2;
+ (void)recordExp:(id)arg1 model:(id)arg2 type:(void *)arg3 expID:(long long)arg4;
+ (void)recordSwitch:(id)arg1 model:(id)arg2 switchID:(long long)arg3;
+ (void)recordRenderSwitch:(id)arg1 model:(id)arg2;
+ (void)recordRefactorSwitch:(id)arg1 type:(long long)arg2 model:(id)arg3;
+ (id)mergeDSLTplIds:(id)arg1 withExpressTplIds:(id)arg2;
+ (_Bool)isCTAAd:(id)arg1;
+ (id)appendParamsAfterXJLandingPage:(id)arg1 v_subtype:(long long)arg2 adModel:(id)arg3;
+ (long long)preloadCachePoolSize:(id)arg1 placementId:(id)arg2;
+ (void)updatePreloadExpValue:(id)arg1 placementId:(id)arg2;
+ (_Bool)jointParamAfterLandingPage:(long long)arg1;
+ (id)commonCheckBeforeShow:(id)arg1 rootViewController:(id)arg2;
+ (id)commonCheckBeforeLoad:(id)arg1 sdkAdType:(long long)arg2;
+ (struct UIEdgeInsets)getEdgeInsetsWithString:(id)arg1;
+ (struct UIEdgeInsets)getEdgeInsetsWithSettingKey:(id)arg1 cfgDict:(id)arg2;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 leftActionTitle:(id)arg3 leftHandler:(CDUnknownBlockType)arg4 rightActionTitle:(id)arg5 rightHandler:(CDUnknownBlockType)arg6;
+ (id)gxbClickableComponentIDSettingKey:(long long)arg1;
+ (id)gxbClickableComponentIDs:(id)arg1;
+ (_Bool)isVideoCachedWithVideoUrl:(id)arg1;
+ (struct UIEdgeInsets)getSafeAreaInsetsWithView:(id)arg1 WithDefaultEdgeInsets:(struct UIEdgeInsets)arg2;
+ (double)doPreloadABTestWithSettingKey:(id)arg1 adModel:(id)arg2;
+ (_Bool)isHitExperiment:(id)arg1 playcementId:(id)arg2;
+ (id)doStringABTestWithSettingKey:(id)arg1 adModel:(id)arg2;
+ (long long)doIntegerABTestWithSettingKey:(id)arg1 adModel:(id)arg2;
+ (_Bool)doBOOLABTestWithSettingKey:(id)arg1 adModel:(id)arg2 defaultValue:(_Bool)arg3;
+ (_Bool)doBOOLABTestWithSettingKey:(id)arg1 adModel:(id)arg2;
+ (id)load:(id)arg1;
+ (void)save:(id)arg1 data:(id)arg2;
+ (id)getKeychainQuery:(id)arg1;
+ (void)updateMMAConfigIfNeccessary;
+ (unsigned long long)convertToMediaPlayerStatusFromPlayerStatus:(unsigned long long)arg1;
+ (id)webViewCommandParamDictFromReq:(id)arg1;
+ (void)clipValidVideoDurationWithMaxDuration:(long long *)arg1 minDuration:(long long *)arg2;
@property(retain, nonatomic) GDTMediaDownloader *downloader; // @synthesize downloader=_downloader;
- (void).cxx_destruct;
- (void)mediaDownloader:(id)arg1 didFinishedWithError:(id)arg2;
- (void)GDTfunctionc1B4gL:(id)arg1 settingKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
