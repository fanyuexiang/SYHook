//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CMDetailTableView, CMListCell, CMModel, NSString, SKFeekbackBar, SKPraiseButton, UIButton, UILabel, UIView;

@interface CMDetailController : UIViewController <UITextViewDelegate, UIGestureRecognizerDelegate>
{
    CMDetailTableView *_tableView;
    SKFeekbackBar *_bar;
    double _keyboardY;
    double _topHeight;
    SKPraiseButton *_praiseBtn;
    UILabel *_praiseCountLabel;
    CDUnknownBlockType _nickClickHandle;
    UIButton *_collectionBtn;
    UILabel *_collectionCountLabel;
    UIView *_commentBarView;
    double _commentBarTop;
    _Bool _needScrollToComment;
    CMModel *_model;
    CMListCell *_homeListCell;
    NSString *_postID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *postID; // @synthesize postID=_postID;
@property(retain, nonatomic) CMListCell *homeListCell; // @synthesize homeListCell=_homeListCell;
@property(nonatomic) _Bool needScrollToComment; // @synthesize needScrollToComment=_needScrollToComment;
@property(retain, nonatomic) CMModel *model; // @synthesize model=_model;
- (void)hideCommentbar;
- (void)showCommentbar;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewHeightDidChange:(double)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)sendMsg:(id)arg1;
- (void)deletePostWithCMT:(long long)arg1;
- (void)collectionAction;
- (void)shareAction;
- (void)praiseAction;
- (void)collectionStatus:(id)arg1;
- (void)refreshHomeCellInfo;
- (void)showCommentInput;
- (void)setupInputBar;
- (void)setupCommentBar;
- (void)setupTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
