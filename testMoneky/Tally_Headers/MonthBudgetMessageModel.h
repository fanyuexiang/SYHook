//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageModel.h"

@class NSDate, NSString;

@interface MonthBudgetMessageModel : BaseMessageModel
{
    NSString *_budget;
    NSString *_expend;
    NSDate *_firstDate;
}

+ (id)calculateACMonth;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *firstDate; // @synthesize firstDate=_firstDate;
@property(copy, nonatomic) NSString *expend; // @synthesize expend=_expend;
@property(copy, nonatomic) NSString *budget; // @synthesize budget=_budget;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageFrame;
- (id)messageCopy;
- (id)conversationContent;
- (id)init;

@end

