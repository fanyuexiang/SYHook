//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NewAssetDBManager : NSObject
{
}

+ (void)saveModel;
+ (void)calculateAssetValueAction:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)queryRecordsPredicateWithBookID:(id)arg1 aid:(id)arg2;
+ (void)queryRecordValueWithBookID:(id)arg1 rid:(id)arg2 minus:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
+ (void)queryRecordValueWithBookID:(id)arg1 aid:(id)arg2 minus:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
+ (id)queryLastEditRecordCreateTimeWithBookID:(id)arg1 aid:(id)arg2;
+ (id)queryRecordAllWithBookID:(id)arg1 aid:(id)arg2 fetchLimit:(long long)arg3 fetchOffset:(long long)arg4;
+ (id)queryRecordAllWithBookID:(id)arg1 aid:(id)arg2;
+ (void)addRecordWhenEditAssetAccount:(id)arg1 recorde:(id)arg2;
+ (void)addRecordWhenChangeAmount:(id)arg1 oldAmount:(id)arg2 with:(id)arg3;
+ (void)updateAllModel:(id)arg1;
+ (void)updateModel:(id)arg1;
+ (id)queryAllGroupModelWithBookID:(id)arg1;
+ (id)queryAllUnAddModelWithBookID:(id)arg1;
+ (id)queryAllAddModelWithBookID:(id)arg1;
+ (id)queryAllModelWithBookID:(id)arg1;
+ (void)deleteAllModelsWithBookID:(id)arg1 rid:(id)arg2;
+ (void)deleteAllModelsWithBookID:(id)arg1;
+ (id)queryUnAddModelWithBookID:(id)arg1 aid:(id)arg2;
+ (id)queryAddModelWithBookID:(id)arg1 aid:(id)arg2;
+ (id)queryModelWithBookID:(id)arg1 aid:(id)arg2;
+ (id)queryModelWithBookID:(id)arg1 rid:(id)arg2;
+ (id)modelWithDictionary:(id)arg1;
+ (id)userPredicateWithBookId:(id)arg1;

@end
