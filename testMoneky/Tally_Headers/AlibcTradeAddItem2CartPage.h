//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlibcTradePage.h"

@class NSNumber, NSString;

@interface AlibcTradeAddItem2CartPage : AlibcTradePage
{
    NSNumber *_itemId;
    NSString *_itemIdString;
}

@property(copy, nonatomic) NSString *itemIdString; // @synthesize itemIdString=_itemIdString;
@property(retain, nonatomic) NSNumber *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)pageCode;
- (id)pageType;
- (_Bool)isSyncForTaoke;
- (id)trackLabel;
- (_Bool)needTaoke:(id)arg1 taokeParam:(id)arg2;
- (id)getOpenUrl:(id)arg1;
- (_Bool)needJumpNative:(id)arg1;
- (id)checkParam;

@end

