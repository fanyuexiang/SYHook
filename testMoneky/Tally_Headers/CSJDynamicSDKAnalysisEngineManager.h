//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CSJDynamicSDKAnalysisEngineManager : NSObject
{
    NSDictionary *_sdkDefaultDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) NSDictionary *sdkDefaultDict; // @synthesize sdkDefaultDict=_sdkDefaultDict;
- (id)init;
- (void)__loadDefaultInfo;
- (void)async_preloadDefaultInfo;
- (id)_pbu_defaultValueWithFileName:(id)arg1 ext:(id)arg2;
- (id)layoutInfoFromDictionary:(id)arg1 infoViewModel:(id)arg2 error:(id *)arg3 havePreloadDefaultInfo:(_Bool *)arg4;

@end

