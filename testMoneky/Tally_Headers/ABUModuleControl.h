//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ABUModuleControl : NSObject
{
    NSDictionary *_dict;
    NSString *_sdkControl;
    NSDictionary *_moduleMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *moduleMap; // @synthesize moduleMap=_moduleMap;
@property(copy, nonatomic) NSString *sdkControl; // @synthesize sdkControl=_sdkControl;
@property(copy, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
- (_Bool)moduleEnable:(unsigned long long)arg1;
- (_Bool)getSDKControlValueForKey:(id)arg1;
- (_Bool)getModuleControlValueForKey:(id)arg1;
- (_Bool)getValueForKey:(id)arg1;
- (void)setSDKControl:(id)arg1;
- (void)setModuleControl:(id)arg1;

@end

