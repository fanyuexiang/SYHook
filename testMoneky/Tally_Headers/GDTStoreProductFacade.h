//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class GDTAppStoreAdNetWorkModel, GDTAppStoreExitState, GDTCommandInvoker, GDTStoreIdleState, GDTStoreProductController, GDTStoreReadyState, GDTStoreShownState, GDTStoreStateMachine, NSString;

@interface GDTStoreProductFacade : NSObject <SKStoreProductViewControllerDelegate>
{
    GDTStoreProductController *_currentDisplayController;
    GDTStoreProductController *_sharedProductController;
    GDTStoreStateMachine *_stateMachine;
    GDTStoreIdleState *_idleState;
    GDTStoreReadyState *_readyState;
    GDTStoreShownState *_shownState;
    GDTAppStoreExitState *_exitState;
    GDTCommandInvoker *_commandInvoker;
    NSString *_itunesId;
    NSString *_campaignId;
    NSString *_providerId;
    GDTAppStoreAdNetWorkModel *_adNetwork;
}

+ (void)clearAppstoreIfNeededFromRootVC:(id)arg1;
+ (void)forceExitAppstoreIfNeeded;
+ (id)storeProductViewController:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3 adNetwork:(id)arg4;
+ (_Bool)preLoadStoreProductViewControllerItunesId:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3 adNetWork:(id)arg4;
+ (void)presentStoreWithItunesId:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3 viewController:(id)arg4 delegate:(id)arg5 adNetwork:(id)arg6;
+ (id)sharedInstance;
@property(retain, nonatomic) GDTAppStoreAdNetWorkModel *adNetwork; // @synthesize adNetwork=_adNetwork;
@property(copy, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(copy, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(copy, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(retain, nonatomic) GDTCommandInvoker *commandInvoker; // @synthesize commandInvoker=_commandInvoker;
@property(retain, nonatomic) GDTAppStoreExitState *exitState; // @synthesize exitState=_exitState;
@property(retain, nonatomic) GDTStoreShownState *shownState; // @synthesize shownState=_shownState;
@property(retain, nonatomic) GDTStoreReadyState *readyState; // @synthesize readyState=_readyState;
@property(retain, nonatomic) GDTStoreIdleState *idleState; // @synthesize idleState=_idleState;
@property(retain, nonatomic) GDTStoreStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) GDTStoreProductController *sharedProductController; // @synthesize sharedProductController=_sharedProductController;
@property(retain, nonatomic) GDTStoreProductController *currentDisplayController; // @synthesize currentDisplayController=_currentDisplayController;
- (void).cxx_destruct;
- (void)GDTfunctionl93AXk:(id)arg1 didLoadFinishedWithError:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

