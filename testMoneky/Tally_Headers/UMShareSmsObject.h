//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMShareObject.h"

@class NSArray, NSData, NSString;

@interface UMShareSmsObject : UMShareObject
{
    NSArray *_recipients;
    NSString *_subject;
    NSString *_smsContent;
    id _smsImage;
    NSString *_imageType;
    NSString *_imageName;
    NSData *_smsSendData;
    NSString *_fileType;
    NSString *_fileName;
    NSString *_fileUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSData *smsSendData; // @synthesize smsSendData=_smsSendData;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) id smsImage; // @synthesize smsImage=_smsImage;
@property(copy, nonatomic) NSString *smsContent; // @synthesize smsContent=_smsContent;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;

@end

