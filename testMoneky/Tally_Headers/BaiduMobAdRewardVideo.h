//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdFeedRequestParameters, BaiduMobAdRewardVideoSlot, NSString;
@protocol BaiduMobAdRewardVideoDelegate;

@interface BaiduMobAdRewardVideo : NSObject
{
    _Bool _enableLocation;
    _Bool _useRewardCountdown;
    _Bool _useSkipAlertView;
    _Bool _available;
    _Bool _isPlaying;
    int _bidFloor;
    id <BaiduMobAdRewardVideoDelegate> _delegate;
    BaiduMobAdFeedRequestParameters *_requestParameters;
    NSString *_publisherId;
    NSString *_AdUnitTag;
    NSString *_userID;
    NSString *_extraInfo;
    BaiduMobAdRewardVideoSlot *_videoSlot;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) BaiduMobAdRewardVideoSlot *videoSlot; // @synthesize videoSlot=_videoSlot;
@property(nonatomic) int bidFloor; // @synthesize bidFloor=_bidFloor;
@property(nonatomic) _Bool useSkipAlertView; // @synthesize useSkipAlertView=_useSkipAlertView;
@property(retain, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool useRewardCountdown; // @synthesize useRewardCountdown=_useRewardCountdown;
@property(nonatomic) _Bool enableLocation; // @synthesize enableLocation=_enableLocation;
@property(copy, nonatomic) NSString *AdUnitTag; // @synthesize AdUnitTag=_AdUnitTag;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(retain, nonatomic) BaiduMobAdFeedRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(nonatomic) __weak id <BaiduMobAdRewardVideoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)callbackAdFailCode:(id)arg1 msg:(id)arg2;
- (void)sendVideoLog:(id)arg1 reason:(id)arg2;
- (void)showFromViewController:(id)arg1;
- (void)show;
- (void)buildCallbackBlock;
- (void)biddingFail:(id)arg1 winInfo:(id)arg2;
- (void)biddingFail:(id)arg1;
- (void)biddingSuccess:(id)arg1;
- (id)getECPMLevel;
- (id)buildSlotInfo:(id)arg1;
- (void)loadBiddingAd:(id)arg1;
- (void)setBiddingData:(id)arg1;
- (id)getBiddingToken;
- (_Bool)initConfig;
- (void)load;
- (_Bool)isReady;
- (_Bool)isExpire;

@end
