//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlibcBaseRequestHandler.h"

@class NSString;

@interface ALibcShopRequestHandler : AlibcBaseRequestHandler
{
    NSString *_shopId;
}

+ (id)sharedRequestHandler;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (id)processRequest:(id)arg1;
- (_Bool)isSyncForTaoke;
- (_Bool)needTaoke:(id)arg1 taokeParam:(id)arg2 withUrl:(id)arg3;
- (id)checkParam:(id)arg1;
- (id)init;

@end
