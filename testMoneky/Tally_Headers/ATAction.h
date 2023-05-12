//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ATAddController;

@interface ATAction : NSObject
{
    _Bool _selectedEndTime;
    ATAddController *_controller;
}

+ (void)requestAutoTallyHomeData:(id)arg1 finish:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool selectedEndTime; // @synthesize selectedEndTime=_selectedEndTime;
@property(nonatomic) __weak ATAddController *controller; // @synthesize controller=_controller;
- (void)networkDeleteDataWithServerID:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)deleteAutoTallyWithServerID:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)editAddDataInfo:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)havContentForTextField:(id)arg1 isAmount:(_Bool)arg2;
- (void)saveAutoTallyAction:(id)arg1;
- (void)periodTextFieldFocus:(id)arg1;
- (void)adjustSelectYear:(id)arg1 month:(id)arg2 dayWeek:(id)arg3 beginTimeTextField:(id)arg4 endTimeTextField:(id)arg5;
- (void)endTimeTextFiledFocus:(id)arg1;
- (void)beginTimeTextFiledFocus:(id)arg1;
- (void)rmarkTextFiledFocus:(id)arg1;
- (void)amountTextFiledFocus:(id)arg1;
- (void)setupRecommendRemarkWithTypeID:(id)arg1;
- (void)goSelectTallyType:(id)arg1;
- (void)tapGestureAction;

@end

