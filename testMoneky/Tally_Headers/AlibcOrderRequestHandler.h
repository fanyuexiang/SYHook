//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlibcBaseRequestHandler.h"

@interface AlibcOrderRequestHandler : AlibcBaseRequestHandler
{
    _Bool _isAllOrder;
    long long _status;
}

+ (id)sharedRequestHandler;
@property(nonatomic) _Bool isAllOrder; // @synthesize isAllOrder=_isAllOrder;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)processRequest:(id)arg1;
- (id)checkParam:(id)arg1;
- (id)init;

@end

