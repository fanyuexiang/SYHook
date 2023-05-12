//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FamilyViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class FamilySearchTableView, NSString, UISearchBar;

@interface FamilySearchViewController : FamilyViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate>
{
    UISearchBar *_searchBar;
    _Bool _shouldShowSearchResults;
    FamilySearchTableView *_tableView;
    _Bool _shouldSearch;
    NSString *_searchString;
    NSString *_labelsString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *labelsString; // @synthesize labelsString=_labelsString;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

