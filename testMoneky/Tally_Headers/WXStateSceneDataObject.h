//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXSceneDataObject.h"

@class NSString, WXStateJumpInfo;

@interface WXStateSceneDataObject : WXSceneDataObject
{
    NSString *_stateId;
    NSString *_stateTitle;
    NSString *_token;
    WXStateJumpInfo *_stateJumpDataInfo;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) WXStateJumpInfo *stateJumpDataInfo; // @synthesize stateJumpDataInfo=_stateJumpDataInfo;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *stateTitle; // @synthesize stateTitle=_stateTitle;
@property(copy, nonatomic) NSString *stateId; // @synthesize stateId=_stateId;

@end
