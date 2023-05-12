//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableArray, NSMutableDictionary;

@interface BU_IESGurdEventTraceManager : NSObject
{
    NSMutableArray *_messagesArray;
    NSMutableDictionary *_messagesDictionary;
    NSDateFormatter *_messageDateFormatter;
    NSMutableArray *_networkInfosArray;
}

+ (id)sharedManager;
+ (id)formedMessageWithMessage:(id)arg1;
+ (void)traceEventWithMessageInfo:(id)arg1;
+ (void)traceNetworkWithInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *networkInfosArray; // @synthesize networkInfosArray=_networkInfosArray;
@property(retain, nonatomic) NSDateFormatter *messageDateFormatter; // @synthesize messageDateFormatter=_messageDateFormatter;
@property(retain, nonatomic) NSMutableDictionary *messagesDictionary; // @synthesize messagesDictionary=_messagesDictionary;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @synthesize messagesArray=_messagesArray;

@end
