//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UMThreadBlockChecker;

@interface UMAPMManager : NSObject
{
    UMThreadBlockChecker *_checker;
}

+ (id)startWithConfig:(id)arg1 delegate:(id)arg2;
+ (id)threadBlockCheckerWithDelegate:(id)arg1;
+ (void)reportExceptionWithName:(id)arg1 reason:(id)arg2 stackTrace:(id)arg3 terminateProgram:(_Bool)arg4;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UMThreadBlockChecker *checker; // @synthesize checker=_checker;

@end

