//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBAppLogKeychain : NSObject
{
}

+ (id)getBundleSeedIdentifier;
+ (id)loadValueForKey:(id)arg1;
+ (id)loadValueForKey:(id)arg1 forAccessGroup:(id)arg2;
+ (_Bool)deleteValueForKey:(id)arg1;
+ (_Bool)deleteValueForKey:(id)arg1 forAccessGroup:(id)arg2;
+ (_Bool)saveValue:(id)arg1 forKey:(id)arg2;
+ (_Bool)saveValue:(id)arg1 forKey:(id)arg2 forAccessGroup:(id)arg3;
+ (id)getFullAppleIdentifier:(id)arg1;
+ (void)addDataToKeychain:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)getKeychainQuery:(id)arg1 forAccessGroup:(id)arg2;

@end

