//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMPCommandEvaluator.h"

@class NSDictionary;

@interface APMPMathCommandEvaluator : APMPCommandEvaluator
{
    NSDictionary *_handlers;
}

- (void).cxx_destruct;
- (id)allSupportedCommands;
- (id)evaluateCommand:(id)arg1 arguments:(id)arg2 scope:(id)arg3 error:(id *)arg4;
- (id)init;

@end

