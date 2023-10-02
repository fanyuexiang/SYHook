//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdAssetGroup, BaiduMobAdLayerGroup, NSBundle, NSDictionary, NSNumber, NSString;

@interface BaiduMobAdComposition : NSObject
{
    NSNumber *_startFrame;
    NSNumber *_endFrame;
    NSNumber *_framerate;
    double _timeDuration;
    BaiduMobAdLayerGroup *_layerGroup;
    BaiduMobAdAssetGroup *_assetGroup;
    NSString *_rootDirectory;
    NSBundle *_assetBundle;
    NSString *_cacheKey;
    NSDictionary *_imagesDic;
    NSDictionary *_bundleImagesDic;
    struct CGRect _compBounds;
}

+ (id)animationFromJSON:(id)arg1 inBundle:(id)arg2 withImages:(id)arg3;
+ (id)animationFromJSON:(id)arg1 inBundle:(id)arg2;
+ (id)animationFromJSON:(id)arg1;
+ (id)animationWithFilePath:(id)arg1;
+ (id)animationNamed:(id)arg1 inBundle:(id)arg2 withImages:(id)arg3;
+ (id)animationNamed:(id)arg1 inBundle:(id)arg2;
+ (id)animationNamed:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *bundleImagesDic; // @synthesize bundleImagesDic=_bundleImagesDic;
@property(readonly, nonatomic) NSDictionary *imagesDic; // @synthesize imagesDic=_imagesDic;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
@property(retain, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
@property(readonly, nonatomic) BaiduMobAdAssetGroup *assetGroup; // @synthesize assetGroup=_assetGroup;
@property(readonly, nonatomic) BaiduMobAdLayerGroup *layerGroup; // @synthesize layerGroup=_layerGroup;
@property(readonly, nonatomic) double timeDuration; // @synthesize timeDuration=_timeDuration;
@property(readonly, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(readonly, nonatomic) NSNumber *endFrame; // @synthesize endFrame=_endFrame;
@property(readonly, nonatomic) NSNumber *startFrame; // @synthesize startFrame=_startFrame;
@property(readonly, nonatomic) struct CGRect compBounds; // @synthesize compBounds=_compBounds;
- (void)_mapFromJSON:(id)arg1 withAssetBundle:(id)arg2 withImages:(id)arg3 useBundleImage:(_Bool)arg4;
- (id)initWithJSON:(id)arg1 withAssetBundle:(id)arg2 withImages:(id)arg3 useBundleImage:(_Bool)arg4;
- (id)initWithJSON:(id)arg1 withAssetBundle:(id)arg2 withImages:(id)arg3;
- (id)initWithJSON:(id)arg1 withAssetBundle:(id)arg2;

@end

