//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BUStorageOption, NSString;
@protocol BUDBStorageProtocol, BUKVStorageProtocol;

@protocol BUStorageProtocol <NSObject>
- (void)registDB:(Class)arg1 name:(NSString *)arg2;
- (void)registKV:(Class)arg1 name:(NSString *)arg2;
- (id <BUDBStorageProtocol>)dbWithName:(NSString *)arg1 option:(BUStorageOption *)arg2;
- (id <BUKVStorageProtocol>)kvWithName:(NSString *)arg1 option:(BUStorageOption *)arg2;
@end
