//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FamilyViewController.h"

@class CBBillDatePicker, UILabel, UIView;

@interface FamilySettingsController : FamilyViewController
{
    UILabel *_dateLabel;
    UIView *_contentView;
    CBBillDatePicker *_datePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CBBillDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)themeChangedNotification:(id)arg1;
- (void)quitFamily;
- (void)requestChangeShareDate:(id)arg1;
- (void)hideDatePicker;
- (void)actionList:(id)arg1;
- (id)themeImage:(id)arg1;
- (id)sectionView:(id)arg1 withIcon:(id)arg2 withEventIndex:(long long)arg3;
- (void)setupUI;
- (void)viewDidLoad;
- (void)dealloc;

@end
