//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASAuthorizationControllerDelegate-Protocol.h"

@interface _TtC5Tally15AppLoginManager : NSObject <ASAuthorizationControllerDelegate>
{
    // Error parsing type: , name: handlerSuccess
    // Error parsing type: , name: handlerFailure
    // Error parsing type: , name: handlerFailureReason
    // Error parsing type: , name: handlerFailureCode
    // Error parsing type: , name: networkRequesting
    // Error parsing type: , name: performType
}

- (void).cxx_destruct;
- (id)init;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (void)changeBindActionWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)bindActionWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)loginActionWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(nonatomic, copy) CDUnknownBlockType networkRequesting;
@property(nonatomic, copy) CDUnknownBlockType handlerFailureCode;
@property(nonatomic, copy) CDUnknownBlockType handlerFailureReason;
@property(nonatomic, copy) CDUnknownBlockType handlerFailure;
@property(nonatomic, copy) CDUnknownBlockType handlerSuccess;

@end

