//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMCommentCell.h"

@class CMCommentReplyModel;

@interface CMCommentReplyCell : CMCommentCell
{
    CMCommentReplyModel *_replyModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMCommentReplyModel *replyModel; // @synthesize replyModel=_replyModel;
- (void)cmDeleteAction;
- (void)deleteAction;
- (void)reportAction;
- (void)copyAction;
- (void)showMenu;
- (void)praiseAction;
- (void)replyAction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
