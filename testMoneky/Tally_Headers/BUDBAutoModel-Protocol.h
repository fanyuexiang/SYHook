//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUDBModel-Protocol.h"

@class BUDBSecurityTable, NSArray, NSString;

@protocol BUDBAutoModel <BUDBModel>

@optional
+ (BUDBSecurityTable *)b1u2_table;
+ (id)b1u2_selectLastOneFromTable;
+ (NSString *)b1u2_primaryKey;
+ (NSArray *)b1u2_ignoreProperties;
+ (NSString *)b1u2_tableName;
+ (NSString *)b1u2_databaseName;
- (BUDBSecurityTable *)b1u2_table;
- (void)b1u2_deleteFromTable;
- (void)b1u2_insertOrUpdateToTable;
@end

