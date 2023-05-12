//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSString;

@interface BaiduMobAdLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _locationUpdating;
    double _timestamp;
    CLLocationManager *_location;
    CLLocation *_mapSdkLocation;
    struct CLLocationCoordinate2D _currentLocation;
    struct CLLocationCoordinate2D _currentCoordinate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D currentCoordinate; // @synthesize currentCoordinate=_currentCoordinate;
@property(retain, nonatomic) CLLocation *mapSdkLocation; // @synthesize mapSdkLocation=_mapSdkLocation;
@property(nonatomic) _Bool locationUpdating; // @synthesize locationUpdating=_locationUpdating;
@property(nonatomic) struct CLLocationCoordinate2D currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) CLLocationManager *location; // @synthesize location=_location;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)dealloc;
- (_Bool)isAuthorizationStatusEnable;
- (_Bool)isLocationPlistSet;
- (void)setCookie:(id)arg1 andValue:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setCookieLocationForCPU;
- (void)stopUserLocationServiceForCPU;
- (void)startUserLocationServiceForCPU;
- (id)updateRequestInfoWithNative:(_Bool)arg1;
- (void)updateLocationOnce;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

