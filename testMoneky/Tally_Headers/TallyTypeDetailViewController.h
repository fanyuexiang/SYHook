//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSDictionary, NSString, TypeDetailTableView;

@interface TallyTypeDetailViewController : UIViewController <UIAlertViewDelegate>
{
    TypeDetailTableView *_tableView;
    NSDictionary *_tallyTypeInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *tallyTypeInfo; // @synthesize tallyTypeInfo=_tallyTypeInfo;
- (void)preUploadTally;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)networkDeleteTallyType;
- (void)deleteEvent;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

