//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ABUDeviceLocation : NSObject
{
    NSString *_timeZone;
    NSString *_countryCode;
    NSString *_city;
    NSString *_timeZoneName;
    NSString *_localeLanguage;
    NSNumber *_timeZoneOffset;
    NSString *_language;
    CDUnknownBlockType _listener;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType listener; // @synthesize listener=_listener;
@property(copy) NSString *language; // @synthesize language=_language;
@property(retain) NSNumber *timeZoneOffset; // @synthesize timeZoneOffset=_timeZoneOffset;
@property(copy) NSString *localeLanguage; // @synthesize localeLanguage=_localeLanguage;
@property(copy) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(copy) NSString *city; // @synthesize city=_city;
@property(copy) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy) NSString *timeZone; // @synthesize timeZone=_timeZone;
- (id)_getLanguage;
- (id)_getLocaleLanguage;
- (id)_getTimeZone;
- (void)_intervalUpdate:(_Bool)arg1;
- (id)initWithUpdateListener:(CDUnknownBlockType)arg1;

@end

