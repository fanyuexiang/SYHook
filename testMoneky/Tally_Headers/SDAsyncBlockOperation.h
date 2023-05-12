//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface SDAsyncBlockOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    CDUnknownBlockType _executionBlock;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType executionBlock; // @synthesize executionBlock=_executionBlock;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (_Bool)isConcurrent;
- (void)complete;
- (void)cancel;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

