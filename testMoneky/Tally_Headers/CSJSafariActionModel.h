//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJActionWebModel-Protocol.h"

@class NSString;

@interface CSJSafariActionModel : NSObject <CSJActionWebModel>
{
    NSString *AdTitle;
    NSString *_targetURL;
}

+ (id)initWithURL:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(copy, nonatomic) NSString *AdTitle; // @synthesize AdTitle;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
