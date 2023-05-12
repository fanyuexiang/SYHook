//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NTallyModel;

@interface NTallyImageModel : NSManagedObject
{
}

+ (void)updateImageModel:(id)arg1 imageInfo:(id)arg2 coreDataSave:(_Bool)arg3 finsh:(CDUnknownBlockType)arg4;
+ (void)updateImageModel:(id)arg1 resName:(id)arg2 coreDataSave:(_Bool)arg3 finsh:(CDUnknownBlockType)arg4;
+ (void)insertImageModel:(id)arg1 images:(id)arg2 coreDataSave:(_Bool)arg3 finsh:(CDUnknownBlockType)arg4;
+ (void)insertImageModel:(id)arg1 imageInfo:(id)arg2 coreDataSave:(_Bool)arg3 finsh:(CDUnknownBlockType)arg4;
+ (void)insertImageModel:(id)arg1 resName:(id)arg2 resSort:(id)arg3 coreDataSave:(_Bool)arg4 finsh:(CDUnknownBlockType)arg5;
+ (void)deleteAllImageModel:(id)arg1 coreDataSave:(_Bool)arg2 finsh:(CDUnknownBlockType)arg3;
+ (void)deleteImageModel:(id)arg1 imageModel:(id)arg2 coreDataSave:(_Bool)arg3 finsh:(CDUnknownBlockType)arg4;
+ (void)deleteImageModel:(id)arg1 coreDataSave:(_Bool)arg2 finsh:(CDUnknownBlockType)arg3;
+ (id)queryAllWithUnUploaded:(id)arg1;
+ (id)queryAllWithTallyModel_NeedUpload:(id)arg1;
+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSNumber *res_id; // @dynamic res_id;
@property(copy, nonatomic) NSString *res_name; // @dynamic res_name;
@property(copy, nonatomic) NSString *res_path; // @dynamic res_path;
@property(copy, nonatomic) NSString *res_sort; // @dynamic res_sort;
@property(copy, nonatomic) NSNumber *sortID; // @dynamic sortID;
@property(retain, nonatomic) NTallyModel *tally; // @dynamic tally;
@property(copy, nonatomic) NSString *userID; // @dynamic userID;

@end

