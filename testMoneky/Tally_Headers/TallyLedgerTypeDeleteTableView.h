//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TallyLedgerDetailTableView.h"

@class NSFetchedResultsController;

@interface TallyLedgerTypeDeleteTableView : TallyLedgerDetailTableView
{
    NSFetchedResultsController *_fetchedResultsController;
}

- (void).cxx_destruct;
- (void)setFetchedResultsController:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateAmount;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)fetchedResultsController;
- (void)reloadData:(long long)arg1 cID:(long long)arg2;

@end

