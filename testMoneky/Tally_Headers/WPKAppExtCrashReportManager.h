//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WPKCrashReportFilterAppleFmt, WPKCrashReportSinkUp4;

@interface WPKAppExtCrashReportManager : NSObject
{
    WPKCrashReportFilterAppleFmt *_appleFmt;
    WPKCrashReportSinkUp4 *_uploadSink;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) WPKCrashReportSinkUp4 *uploadSink; // @synthesize uploadSink=_uploadSink;
@property(retain, nonatomic) WPKCrashReportFilterAppleFmt *appleFmt; // @synthesize appleFmt=_appleFmt;
- (void)sendAllAppExtCrash;
- (id)getGroupDirPath;
- (id)init;

@end

