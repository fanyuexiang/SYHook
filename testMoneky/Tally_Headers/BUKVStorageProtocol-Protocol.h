//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BUStorageOption, NSArray, NSObject, NSString;
@protocol BUKVStorageProtocol, NSCoding;

@protocol BUKVStorageProtocol <NSObject>
+ (id <BUKVStorageProtocol>)initWithName:(NSString *)arg1 option:(BUStorageOption *)arg2;
- (NSArray *)allKeys;
- (unsigned long long)count;
- (void)removeAll;
- (void)removeObjectForKey:(NSString *)arg1;
- (_Bool)setObject:(NSObject<NSCoding> *)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
@end
