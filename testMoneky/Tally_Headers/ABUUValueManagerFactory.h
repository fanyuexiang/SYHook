//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABUUValueManagerFactory : NSObject
{
}

+ (id)filterConfigGroup:(id)arg1 withPrimeRit:(id)arg2;
+ (void)updateDynamicRules:(id)arg1;
+ (void)updateLabelGroupInfos:(id)arg1;
+ (void)updateGroupList:(id)arg1 forType:(long long)arg2;
+ (void)addUValue:(id)arg1 withAdType:(long long)arg2 andPrimeRit:(id)arg3 andJsMode:(long long)arg4;
+ (void)updateEcpmTTL:(long long)arg1;
+ (void)addUValue:(id)arg1 withAdType:(long long)arg2 andMode:(long long)arg3 andPrimeRit:(id)arg4 andJsMode:(long long)arg5;
+ (id)uvaluesForConfigWithMode:(long long)arg1;
+ (void)resetUValuesWithMode:(long long)arg1;

@end

