//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BUAudioSessionSetting : NSObject
{
    _Bool _allowModifyAudioSessionSetting;
    _Bool _systemMute;
    NSString *_sourcePath;
    NSDate *_beginPlayDate;
    NSString *_originalCategory;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalCategory; // @synthesize originalCategory=_originalCategory;
@property(retain, nonatomic) NSDate *beginPlayDate; // @synthesize beginPlayDate=_beginPlayDate;
@property _Bool systemMute; // @synthesize systemMute=_systemMute;
@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(nonatomic) _Bool allowModifyAudioSessionSetting; // @synthesize allowModifyAudioSessionSetting=_allowModifyAudioSessionSetting;
- (void)playToEnd;
- (void)monitorMute;
- (void)saveAudioSessionOriginCategory;

@end

