//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSURL;

@interface TallyLedgerTallyTypeManager : NSObject
{
    NSMutableArray *_expenditureTypeArrray;
    NSMutableArray *_incomeTypeArrray;
    NSMutableArray *_expenditureTypeRemoveArrray;
    NSMutableArray *_incomeTypeRemoveArrray;
    NSURL *_expenditureTypePath;
    NSURL *_incomeTypePath;
    NSURL *_expenditureTypeRemovePath;
    NSURL *_incomeTypeRemovePath;
    NSMutableDictionary *_typeNameDict;
    NSMutableDictionary *_typeIconDict;
    long long _book_id;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) long long book_id; // @synthesize book_id=_book_id;
@property(retain, nonatomic) NSMutableDictionary *typeIconDict; // @synthesize typeIconDict=_typeIconDict;
@property(retain, nonatomic) NSMutableDictionary *typeNameDict; // @synthesize typeNameDict=_typeNameDict;
@property(copy, nonatomic) NSURL *incomeTypeRemovePath; // @synthesize incomeTypeRemovePath=_incomeTypeRemovePath;
@property(copy, nonatomic) NSURL *expenditureTypeRemovePath; // @synthesize expenditureTypeRemovePath=_expenditureTypeRemovePath;
@property(copy, nonatomic) NSURL *incomeTypePath; // @synthesize incomeTypePath=_incomeTypePath;
@property(copy, nonatomic) NSURL *expenditureTypePath; // @synthesize expenditureTypePath=_expenditureTypePath;
@property(retain, nonatomic) NSMutableArray *incomeTypeRemoveArrray; // @synthesize incomeTypeRemoveArrray=_incomeTypeRemoveArrray;
@property(retain, nonatomic) NSMutableArray *expenditureTypeRemoveArrray; // @synthesize expenditureTypeRemoveArrray=_expenditureTypeRemoveArrray;
@property(retain, nonatomic) NSMutableArray *incomeTypeArrray; // @synthesize incomeTypeArrray=_incomeTypeArrray;
@property(retain, nonatomic) NSMutableArray *expenditureTypeArrray; // @synthesize expenditureTypeArrray=_expenditureTypeArrray;
- (void)dealloc;
- (long long)customTallyTypeCount;
- (id)documentsPath;
- (id)getBookIncomeTypeRemovePath:(long long)arg1;
- (id)getBookExpenditureTypeRemovePath:(long long)arg1;
- (id)getBookIncomeTypePath:(long long)arg1;
- (id)getBookExpenditureTypePath:(long long)arg1;
- (void)resetTypeIconNameDict;
- (void)deleteTallyType:(long long)arg1 cID:(long long)arg2;
- (void)editTallyType:(long long)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)saveIncomeTypeRemove;
- (void)saveExpenditureTypeRemove;
- (void)saveIncomeType;
- (void)saveExpenditureType;
- (void)creatSystemTallyType:(id)arg1;
- (void)refreshTallyTypeData;
- (void)resetCurrentBookType;
- (id)init;
- (id)getIncomeDefaultType:(long long)arg1;
- (id)getExpenditureDefaultType:(long long)arg1;
- (void)TallyLedgerTallyChangeWithTallyTypeChange:(long long)arg1 tallytype:(long long)arg2 cid:(long long)arg3 typeName:(id)arg4 IconName:(id)arg5;
- (void)editeTallyTypeData:(long long)arg1 name:(id)arg2 icon_name:(id)arg3 category_type:(long long)arg4 finish:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)sortTallyTypeData:(id)arg1 iArray:(id)arg2 finish:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)deleteTallyTypeData:(long long)arg1 category_type:(long long)arg2 finish:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)addTallyTypeData:(long long)arg1 name:(id)arg2 icon_name:(id)arg3 category_type:(long long)arg4 finish:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)operationTallyDataOfTallyTypeDifferent;
- (void)setupInfo:(id)arg1 with:(long long)arg2;
- (id)chanageToResult:(id)arg1;
- (void)requestTallyTypeWith:(long long)arg1;
- (void)requestTallyTypeList;

@end

