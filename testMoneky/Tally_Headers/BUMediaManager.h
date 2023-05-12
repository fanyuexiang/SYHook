//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class BUPlayableAd, NSDictionary, NSString;

@interface BUMediaManager : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    BUPlayableAd *_playableAd;
    NSDictionary *_photoParams;
    unsigned long long _eventType;
}

+ (void)savePhotosOrOpenSettingsWithParams:(id)arg1;
+ (void)openPhotosOrSettingsWithParams:(id)arg1;
+ (void)openCameraOrSettings;
+ (_Bool)isMicrophoneAuthorizationDeclared;
+ (_Bool)isPhotosAuthorizationDeclared;
+ (_Bool)isCameraAuthorizationDeclared;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSDictionary *photoParams; // @synthesize photoParams=_photoParams;
@property(nonatomic) __weak BUPlayableAd *playableAd; // @synthesize playableAd=_playableAd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

