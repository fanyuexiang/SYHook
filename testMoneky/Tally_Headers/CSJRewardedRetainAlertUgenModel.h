//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSJRewardedRetainAlertUgenModel : NSObject
{
    double _alertScale;
    NSString *_alert_title;
    NSString *_alert_content;
    NSString *_alert_content_unit;
    NSString *_template_url;
    NSString *_template_md5;
    NSString *_slotId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *slotId; // @synthesize slotId=_slotId;
@property(copy, nonatomic) NSString *template_md5; // @synthesize template_md5=_template_md5;
@property(copy, nonatomic) NSString *template_url; // @synthesize template_url=_template_url;
@property(copy, nonatomic) NSString *alert_content_unit; // @synthesize alert_content_unit=_alert_content_unit;
@property(copy, nonatomic) NSString *alert_content; // @synthesize alert_content=_alert_content;
@property(copy, nonatomic) NSString *alert_title; // @synthesize alert_title=_alert_title;
@property(nonatomic) double alertScale; // @synthesize alertScale=_alertScale;
- (id)init;

@end
