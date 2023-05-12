//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

@interface AccountBookManager : NSObject
{
    NSString *_sortName;
    NSNumber *_sortID;
    NSNumber *_groupSortID;
    NSMutableArray *_accountArray;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *accountArray; // @synthesize accountArray=_accountArray;
@property(copy, nonatomic) NSNumber *groupSortID; // @synthesize groupSortID=_groupSortID;
@property(copy, nonatomic) NSNumber *sortID; // @synthesize sortID=_sortID;
- (id)documentsPath;
- (void)deleteAccountData:(id)arg1;
- (void)saveAccoun;
- (void)deleteAllAcount;
- (void)deleteAccount:(id)arg1;
- (void)addAccountFromArray:(id)arg1;
- (void)addAcount:(id)arg1;
@property(copy, nonatomic) NSString *groupSortName;
@property(copy, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;

@end
