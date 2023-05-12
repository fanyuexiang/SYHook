//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UMSocialComFMDatabaseQueue;

@interface UMCommonStatisticsCacheDBManager : NSObject
{
    UMSocialComFMDatabaseQueue *_dbQueue;
    NSString *_dbPath;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (id)fetchVerifyWithFetchCount:(unsigned long long)arg1;
- (void)refactorDatabase;
- (void)deleteASyncWithCommonModelArray:(id)arg1;
- (void)doDeleteASyncWithCommonModelArray:(id)arg1;
- (id)fetchStatsDataWithFetchCount:(unsigned long long)arg1;
- (id)fetchBusinessDataWithFetchCount:(unsigned long long)arg1;
- (void)changeCommonDicArray:(id)arg1 toCommonModelCls:(Class)arg2 appendDestArray:(id)arg3;
- (id)doFetchSyncWithFetchCount:(unsigned long long)arg1 withTableName:(id)arg2;
- (void)saveUShareCommonModelArray:(id)arg1;
- (void)executeWithSqlStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)transitionDatabaseWithSqlStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)alertAddColumn:(id)arg1 withColumnType:(id)arg2 inTableWithName:(id)arg3;
- (_Bool)columnExists:(id)arg1 inTableWithName:(id)arg2;
- (void)createVerifyTable;
- (void)createStatsOperationTable;
- (void)createStatsDauTable;
- (void)createDauTable;
- (void)createUserInfoTable;
- (void)createShareTable;
- (void)createAuthTable;
- (void)createTableName:(id)arg1 withColumnNames:(id)arg2 withColumnTypes:(id)arg3;
- (void)createTableName:(id)arg1 withColumnNames:(id)arg2;
- (void)resetDataBase;
- (void)removeDataBase;
- (void)closeDataBase;
- (void)createDataBaseFrame;
- (void)createDatabase;
- (void)dealloc;
- (id)init;

@end
