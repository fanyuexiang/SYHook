//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, SmartMessageTableView;

@interface SmartMessageViewController : UIViewController <NSFetchedResultsControllerDelegate>
{
    SmartMessageTableView *_tableView;
    NSFetchedResultsController *_fetchedResultsController;
}

- (void).cxx_destruct;
- (void)requestMoodTag;
- (void)scrollToBottomWithAnimation:(_Bool)arg1;
- (void)reloadDataAndreloadTableView;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)updateUserinfo;
- (id)fetchedResultsController;
- (void)bottombtnClick:(id)arg1;
- (void)addbottomView;
- (void)setupUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addWelcomeData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

