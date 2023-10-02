//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUDBStorageProtocol-Protocol.h"

@class NSString;

@interface BUStorageDB : NSObject <BUDBStorageProtocol>
{
    NSString *_dbName;
}

+ (id)initWithName:(id)arg1 option:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dbName; // @synthesize dbName=_dbName;
- (id)getTableFromClass:(Class)arg1;
- (id)initWith:(id)arg1;
- (void)remove:(id)arg1;
- (_Bool)update:(id)arg1 where:(id)arg2;
- (id)selectWithWhere:(id)arg1 orderBy:(CDStruct_5982b7c1)arg2 limit:(CDStruct_1ef3fb1f)arg3 tableClass:(Class)arg4;
- (long long)selectAllCount:(Class)arg1;
- (_Bool)insert:(id)arg1;
- (_Bool)deleteWithWhere:(id)arg1 table:(Class)arg2;
- (_Bool)deleteAll:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
