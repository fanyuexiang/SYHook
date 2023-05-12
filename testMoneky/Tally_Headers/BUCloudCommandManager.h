//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUCloudCommandConfig, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface BUCloudCommandManager : NSObject
{
    BUCloudCommandConfig *_config;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_commandExecutionQueue;
    NSMutableDictionary *_commandIDDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *commandIDDic; // @synthesize commandIDDic=_commandIDDic;
@property(retain, nonatomic) NSOperationQueue *commandExecutionQueue; // @synthesize commandExecutionQueue=_commandExecutionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) BUCloudCommandConfig *config; // @synthesize config=_config;
- (id)host;
- (id)_paramDictionaryWithResult:(id)arg1;
- (void)_postCommandResponse:(id)arg1;
- (void)_executeCommand:(id)arg1;
- (void)executeCommandWithData:(id)arg1 ran:(id)arg2;
- (void)fetchCloudCommand;
- (id)init;

@end

