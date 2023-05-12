//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTClickFacadeDelegate-Protocol.h"
#import "GDTRewardInfoDelegate-Protocol.h"

@class GDTBaseChainHandler, GDTClickHandleRequest, NSString, UIViewController;
@protocol GDTClickFacadeDelegate><GDTRewardInfoDelegate;

@interface GDTClickFacade : NSObject <GDTClickFacadeDelegate, GDTRewardInfoDelegate>
{
    id <GDTClickFacadeDelegate><GDTRewardInfoDelegate> _delegate;
    UIViewController *_viewController;
    GDTBaseChainHandler *_clickChainHandler;
    GDTClickHandleRequest *_request;
}

+ (id)clickDefaultChainArray;
+ (id)clickOnlyReportChainArray;
+ (id)clickCTAChainArray;
@property(retain, nonatomic) GDTClickHandleRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GDTBaseChainHandler *clickChainHandler; // @synthesize clickChainHandler=_clickChainHandler;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <GDTClickFacadeDelegate><GDTRewardInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)GDTfunctionx6YXf7:(id)arg1;
- (void)GDTfunctiont5TMzD:(long long)arg1;
- (void)GDTfunctiong85AEt:(id)arg1;
- (void)GDTfunctionr1pGyp;
- (void)GDTfunctions4VuM4;
- (void)GDTfunctionl0jnur;
- (void)GDTfunctionm3ITfn;
- (void)GDTfunctiona3U30I;
- (void)GDTfunctiono6GO2z;
- (void)resignActive;
- (void)GDTfunctions3tC5u:(id)arg1;
- (void)GDTfunctiond7XLrH;
- (void)GDTfunctionm6X1t6:(id)arg1;
- (void)GDTfunctionz9Osr4;
- (id)initLc0d0VB:(id)arg1;
- (void)GDTfunctionu5fRD2:(id)arg1;
- (void)GDTfunctionl5BALf:(id *)arg1;
- (void)GDTfunctionc9LWyM:(id)arg1;
- (id)GDTfunctiont5z31I;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
