//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol WBMediaTransferProtocol;

@interface WBNewVideoObject : NSObject
{
    _Bool _isShareToStory;
    id <WBMediaTransferProtocol> _delegate;
    NSString *_finalAsset;
    NSString *_videoPath;
    NSURL *_videoData;
    NSString *_videoFormat;
}

+ (id)videoObjectWithDictionary:(id)arg1;
+ (id)dictionaryWithVideoObject:(id)arg1;
+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoFormat; // @synthesize videoFormat=_videoFormat;
@property(retain, nonatomic) NSURL *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *finalAsset; // @synthesize finalAsset=_finalAsset;
@property(nonatomic) __weak id <WBMediaTransferProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShareToStory; // @synthesize isShareToStory=_isShareToStory;
- (void)addVideo:(id)arg1;
- (id)validate;

@end

