//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQBaseResp.h"

@class NSDictionary;

@interface SendMessageToQQResp : QQBaseResp
{
    NSDictionary *_otherInfo;
}

+ (id)respWithResult:(id)arg1 errorDescription:(id)arg2 extendInfo:(id)arg3 otherInfo:(id)arg4;
+ (id)respWithResult:(id)arg1 errorDescription:(id)arg2 extendInfo:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *otherInfo; // @synthesize otherInfo=_otherInfo;

@end

