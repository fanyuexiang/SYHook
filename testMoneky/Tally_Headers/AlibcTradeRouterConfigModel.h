//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlibcJSONModel.h"

@class NSArray, NSString;

@interface AlibcTradeRouterConfigModel : AlibcJSONModel
{
    NSString *_match;
    NSArray *_index;
    NSArray *_action;
}

+ (id)modelContainerClassMapDictioanry;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *match; // @synthesize match=_match;

@end
