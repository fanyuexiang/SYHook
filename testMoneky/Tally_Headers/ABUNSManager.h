//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABUNSManager : NSObject
{
}

+ (id)encryptRequestDictionary3:(id)arg1;
+ (id)encriptData:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)encriptJSONObject:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)encriptData:(id)arg1 key:(id)arg2;
+ (id)encriptJSONObject:(id)arg1 key:(id)arg2;
+ (id)decryptResponseDictionary:(id)arg1 key:(id)arg2 error:(id *)arg3;
+ (id)encryptRequestDictionary:(id)arg1;
+ (void)load;

@end

