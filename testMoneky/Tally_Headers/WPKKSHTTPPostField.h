//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WPKKSHTTPPostField : NSObject
{
    NSData *_data;
    NSString *_name;
    NSString *_contentType;
    NSString *_filename;
}

+ (id)data:(id)arg1 name:(id)arg2 contentType:(id)arg3 filename:(id)arg4;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 name:(id)arg2 contentType:(id)arg3 filename:(id)arg4;

@end

