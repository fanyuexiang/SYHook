//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AlibcTradePage-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AlibcTradePage : NSObject <AlibcTradePage>
{
    NSString *_url;
    NSMutableDictionary *_params;
}

@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)getRequest:(id)arg1;
- (id)pageCode;
- (id)pageType;
- (_Bool)isSyncForTaoke;
- (id)trackLabel;
- (_Bool)needTaoke:(id)arg1 taokeParam:(id)arg2;
- (id)getOpenUrl:(id)arg1;
- (id)addParam:(id)arg1;
- (void)analysisShowParam:(id)arg1;
- (void)analysisParam:(id)arg1;
- (_Bool)needJumpNative:(id)arg1;
- (id)checkParam;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

