//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface GDTWXShareToTimelineParam : NSObject
{
    _Bool _bText;
    NSString *_title;
    NSString *_linkUrl;
    NSData *_thumbData;
}

@property(nonatomic) _Bool bText; // @synthesize bText=_bText;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

