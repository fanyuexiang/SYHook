//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUDBTable : NSObject
{
    struct sqlite3 *_handler;
    NSString *_tableName;
    NSString *_path;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (_Bool)_clostDB;
- (_Bool)_openDB;
- (id)_limit:(CDStruct_1ef3fb1f)arg1;
- (id)_orderBy:(CDStruct_5982b7c1)arg1;
- (void)_pbu_logWithCurrentQueueWithSel:(SEL)arg1;
- (void)_pbu_table_errorlogWithSql:(id)arg1 errorMsg:(id)arg2;
- (_Bool)deleteAll;
- (_Bool)deleteWithWhere:(id)arg1;
- (id)selectWithWhere:(id)arg1 orderBy:(CDStruct_5982b7c1)arg2 limit:(CDStruct_1ef3fb1f)arg3 class:(Class)arg4;
- (long long)selectAllCount;
- (_Bool)updateWithSqlString:(id)arg1 where:(id)arg2;
- (_Bool)update:(id)arg1 where:(id)arg2;
- (_Bool)insert:(id)arg1;
- (id)initWithDatabasePath:(id)arg1 tableName:(id)arg2 sqlite:(struct sqlite3 *)arg3;

@end

