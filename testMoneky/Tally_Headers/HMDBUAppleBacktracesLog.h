//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDBUAppleBacktracesLog : NSObject
{
}

+ (id)logWithBacktraces:(id)arg1 type:(unsigned long long)arg2 exception:(id)arg3 reason:(id)arg4;
+ (void)getThreadLogByThread:(unsigned int)arg1 skippedDepth:(unsigned long long)arg2 logType:(unsigned long long)arg3 suspend:(_Bool)arg4 exception:(id)arg5 reason:(id)arg6 callback:(CDUnknownBlockType)arg7;
+ (void)getAllThreadsLogByKeyThread:(unsigned int)arg1 maxThreadCount:(unsigned long long)arg2 skippedDepth:(unsigned long long)arg3 logType:(unsigned long long)arg4 suspend:(_Bool)arg5 exception:(id)arg6 reason:(id)arg7 callback:(CDUnknownBlockType)arg8;
+ (id)getThreadLogByThread:(unsigned int)arg1 skippedDepth:(unsigned long long)arg2 logType:(unsigned long long)arg3 suspend:(_Bool)arg4 exception:(id)arg5 reason:(id)arg6;
+ (id)getAllThreadsLogByKeyThread:(unsigned int)arg1 maxThreadCount:(unsigned long long)arg2 skippedDepth:(unsigned long long)arg3 logType:(unsigned long long)arg4 suspend:(_Bool)arg5 exception:(id)arg6 reason:(id)arg7;
+ (unsigned int)currentThread;
+ (unsigned int)mainThread;
+ (id)getThreadLog:(unsigned int)arg1 BySkippedDepth:(unsigned long long)arg2 logType:(unsigned long long)arg3;
+ (id)getCurrentThreadLogBySkippedDepth:(unsigned long long)arg1 logType:(unsigned long long)arg2;
+ (id)getMainThreadLogBySkippedDepth:(unsigned long long)arg1 logType:(unsigned long long)arg2;
+ (id)getAllThreadsLogByKeyThread:(unsigned int)arg1 skippedDepth:(unsigned long long)arg2 logType:(unsigned long long)arg3 exception:(id)arg4 reason:(id)arg5;
+ (id)getAllThreadsLogBySkippedDepth:(unsigned long long)arg1 logType:(unsigned long long)arg2;
+ (id)getAllThreadsLogByKeyThread:(unsigned int)arg1 skippedDepth:(unsigned long long)arg2 logType:(unsigned long long)arg3;

@end

