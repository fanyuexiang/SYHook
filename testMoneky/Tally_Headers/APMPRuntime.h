//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMPDynamicProvider, APMPScope;

@interface APMPRuntime : NSObject
{
    APMPScope *_initScope;
    APMPScope *_globalScope;
    APMPDynamicProvider *_apiProvider;
}

+ (long long)runtimeVersion;
- (void).cxx_destruct;
- (void)resetInstructionCount;
- (int)getInstructionCount:(id *)arg1;
- (id)getRunScope;
- (id)executeStatements:(id)arg1 error:(id *)arg2;
- (void)setModuleCreator:(CDUnknownBlockType)arg1 forName:(id)arg2;
- (id)init;

@end

