//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMSocialShareObjectConfig.h"

@class NSArray;

@interface UMSocialShareSmsObjectConfig : UMSocialShareObjectConfig
{
    unsigned long long _recipientLimit;
    unsigned long long _smsContentLimit;
    unsigned long long _smsImageDataLimit;
    unsigned long long _smsImageUrlLimit;
    unsigned long long _smsSendDataLimit;
    NSArray *_fileType;
    unsigned long long _fileNameLimit;
    unsigned long long _fileUrlLimit;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fileUrlLimit; // @synthesize fileUrlLimit=_fileUrlLimit;
@property(nonatomic) unsigned long long fileNameLimit; // @synthesize fileNameLimit=_fileNameLimit;
@property(retain, nonatomic) NSArray *fileType; // @synthesize fileType=_fileType;
@property(nonatomic) unsigned long long smsSendDataLimit; // @synthesize smsSendDataLimit=_smsSendDataLimit;
@property(nonatomic) unsigned long long smsImageUrlLimit; // @synthesize smsImageUrlLimit=_smsImageUrlLimit;
@property(nonatomic) unsigned long long smsImageDataLimit; // @synthesize smsImageDataLimit=_smsImageDataLimit;
@property(nonatomic) unsigned long long smsContentLimit; // @synthesize smsContentLimit=_smsContentLimit;
@property(nonatomic) unsigned long long recipientLimit; // @synthesize recipientLimit=_recipientLimit;

@end

