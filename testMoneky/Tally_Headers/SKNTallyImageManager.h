//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SKNTallyImageUploadItem;

@interface SKNTallyImageManager : NSObject
{
    SKNTallyImageUploadItem *_tallyUploadItem;
    NSMutableArray *_tallyData;
    SKNTallyImageUploadItem *_tallyLedgerUploadItem;
    NSMutableArray *_tallyLedgerData;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tallyLedgerData; // @synthesize tallyLedgerData=_tallyLedgerData;
@property(retain, nonatomic) SKNTallyImageUploadItem *tallyLedgerUploadItem; // @synthesize tallyLedgerUploadItem=_tallyLedgerUploadItem;
@property(retain, nonatomic) NSMutableArray *tallyData; // @synthesize tallyData=_tallyData;
@property(retain, nonatomic) SKNTallyImageUploadItem *tallyUploadItem; // @synthesize tallyUploadItem=_tallyUploadItem;
- (void)sk_ntallyLedgerImageBeginUploadWithIndex:(long long)arg1 failedNum:(long long)arg2 finsh:(CDUnknownBlockType)arg3;
- (void)sk_ntallyLedgerImageUploadData:(id)arg1;
- (void)sk_ntallyImageBeginUploadWithIndex:(long long)arg1 failedNum:(long long)arg2 finsh:(CDUnknownBlockType)arg3;
- (void)sk_ntallyImageUploadData;
- (void)accountChangedNotification:(id)arg1;
- (id)init;

@end

