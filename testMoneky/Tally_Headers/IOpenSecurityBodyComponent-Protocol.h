//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IOpenSecurityBodyComponent <NSObject>
- (NSString *)getSecurityBodyDataEx:(NSString *)arg1 extendParam:(NSDictionary *)arg2 flag:(int)arg3 env:(int)arg4 error:(id *)arg5;
- (_Bool)leaveRiskScene:(int)arg1 error:(id *)arg2;
- (_Bool)enterRiskScene:(int)arg1 riskParam:(NSDictionary *)arg2 error:(id *)arg3;
- (NSString *)getSecurityBodyDataEx:(NSString *)arg1 appKey:(NSString *)arg2 authCode:(NSString *)arg3 extendParam:(NSDictionary *)arg4 flag:(int)arg5 env:(int)arg6 error:(id *)arg7;
@end

