//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol UgenTemplateDataSource;

@interface UgenTemplateItem : NSObject
{
    id <UgenTemplateDataSource> _dataSource;
    NSDictionary *_templateInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(nonatomic) __weak id <UgenTemplateDataSource> dataSource; // @synthesize dataSource=_dataSource;

@end

