//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QQApiObject : NSObject
{
    NSString *_title;
    NSString *_description;
    unsigned long long _cflag;
    NSString *_tagName;
    NSString *_messageExt;
    NSString *_universalLink;
    unsigned long long _shareDestType;
}

@property(nonatomic) unsigned long long shareDestType; // @synthesize shareDestType=_shareDestType;
@property(copy, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(copy, nonatomic) NSString *messageExt; // @synthesize messageExt=_messageExt;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(nonatomic) unsigned long long cflag; // @synthesize cflag=_cflag;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

