//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FamilyChartTallyMemberModel : NSObject
{
    long long _dateType;
    long long _tallyType;
    NSString *_member_nickname;
    NSString *_member_uid;
    NSString *_member_header;
    double _amount;
    double _percent;
    double _showPercent;
}

+ (id)tallyMemberModels:(id)arg1 tallyType:(long long)arg2 dateType:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) double showPercent; // @synthesize showPercent=_showPercent;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) double amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *member_header; // @synthesize member_header=_member_header;
@property(retain, nonatomic) NSString *member_uid; // @synthesize member_uid=_member_uid;
@property(retain, nonatomic) NSString *member_nickname; // @synthesize member_nickname=_member_nickname;
@property(nonatomic) long long tallyType; // @synthesize tallyType=_tallyType;
@property(nonatomic) long long dateType; // @synthesize dateType=_dateType;

@end
