//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TallyLabelSettingController;

@interface TallyLabelSettingDataSource : NSObject
{
    TallyLabelSettingController *_controller;
    NSMutableArray *_data;
    NSString *_defIndexSort;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *defIndexSort; // @synthesize defIndexSort=_defIndexSort;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(nonatomic) __weak TallyLabelSettingController *controller; // @synthesize controller=_controller;
- (_Bool)sortChangedAction;
- (id)appentIndexString:(id)arg1;

@end

