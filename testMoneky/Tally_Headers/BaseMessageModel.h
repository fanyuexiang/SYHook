//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class MessageFrame, NSDate, NSString, NTallyModel;

@interface BaseMessageModel : NSObject <NSCoding>
{
    MessageFrame *kMessageFrame;
    _Bool _showTime;
    NSString *_tId;
    NSString *_userID;
    NSDate *_cts;
    long long _messageType;
    long long _ownerType;
    MessageFrame *_messageFrame;
    NSString *_bussinesjson;
    NTallyModel *_tally;
    long long _bussinesType;
    NSString *_extra;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) long long bussinesType; // @synthesize bussinesType=_bussinesType;
@property(retain, nonatomic) NTallyModel *tally; // @synthesize tally=_tally;
@property(retain, nonatomic) NSString *bussinesjson; // @synthesize bussinesjson=_bussinesjson;
@property(retain, nonatomic) MessageFrame *messageFrame; // @synthesize messageFrame=_messageFrame;
@property(nonatomic) long long ownerType; // @synthesize ownerType=_ownerType;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) _Bool showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) NSDate *cts; // @synthesize cts=_cts;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *tId; // @synthesize tId=_tId;
- (void)clearMessageFrame;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

