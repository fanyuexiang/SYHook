//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMCommentModel.h"

@class NSAttributedString, NSString;

@interface CMCommentReplyModel : CMCommentModel
{
    NSAttributedString *_replyAttributedText;
    NSString *_replyUserNick;
    NSString *_replyUserID;
    NSString *_replyOriginContent;
    double _replyRowHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double replyRowHeight; // @synthesize replyRowHeight=_replyRowHeight;
@property(copy, nonatomic) NSString *replyOriginContent; // @synthesize replyOriginContent=_replyOriginContent;
@property(copy, nonatomic) NSString *replyUserID; // @synthesize replyUserID=_replyUserID;
@property(copy, nonatomic) NSString *replyUserNick; // @synthesize replyUserNick=_replyUserNick;
@property(retain, nonatomic) NSAttributedString *replyAttributedText; // @synthesize replyAttributedText=_replyAttributedText;
- (double)contentHeight;
- (id)initWithReplyInfo:(id)arg1 postUID:(id)arg2;

@end
