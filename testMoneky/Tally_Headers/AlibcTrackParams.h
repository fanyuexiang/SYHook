//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AlibcTrackParams : NSObject
{
    NSString *_scm;
    NSString *_pvid;
    NSString *_puid;
    NSString *_page;
    NSString *_label;
}

+ (id)ybhpssStringForDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *puid; // @synthesize puid=_puid;
@property(retain, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
- (void)addData:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)toDictionary;

@end
