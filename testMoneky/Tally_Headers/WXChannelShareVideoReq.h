//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSData, NSString, WXChannelBaseJumpInfo;

@interface WXChannelShareVideoReq : BaseReq
{
    NSString *_localIdentifier;
    NSData *_extData;
    WXChannelBaseJumpInfo *_jumpInfo;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) WXChannelBaseJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSData *extData; // @synthesize extData=_extData;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;

@end

