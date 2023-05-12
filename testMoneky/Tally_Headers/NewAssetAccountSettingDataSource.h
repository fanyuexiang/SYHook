//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NewAssetAccountSettingController;

@interface NewAssetAccountSettingDataSource : NSObject
{
    NewAssetAccountSettingController *_controller;
    NSMutableArray *_addData;
    NSMutableArray *_unaddData;
    NSString *_defSort;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *defSort; // @synthesize defSort=_defSort;
@property(retain, nonatomic) NSMutableArray *unaddData; // @synthesize unaddData=_unaddData;
@property(retain, nonatomic) NSMutableArray *addData; // @synthesize addData=_addData;
@property(nonatomic) __weak NewAssetAccountSettingController *controller; // @synthesize controller=_controller;
- (_Bool)sortChangedAction;
- (_Bool)hasData;
- (void)clearData;
- (id)appentIndexString:(id)arg1;

@end

