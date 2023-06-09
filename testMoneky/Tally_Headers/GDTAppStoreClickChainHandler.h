//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseChainHandler.h"

#import "GDTDynamicChainHandlerProtocol-Protocol.h"
#import "GDTStoreProductFacadeDelegate-Protocol.h"

@class GDTClickParam, NSString;
@protocol GDTClickFacadeDelegate;

@interface GDTAppStoreClickChainHandler : GDTBaseChainHandler <GDTStoreProductFacadeDelegate, GDTDynamicChainHandlerProtocol>
{
    id <GDTClickFacadeDelegate> _delegate;
    GDTClickParam *_clickParam;
}

@property(retain, nonatomic) GDTClickParam *clickParam; // @synthesize clickParam=_clickParam;
@property(nonatomic) __weak id <GDTClickFacadeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)GDTfunctionb7te6c;
- (void)GDTfunctiong0gRbE;
- (void)GDTfunctione5fTSH;
- (void)GDTfunctionp5X8Ql;
- (void)GDTfunctionk72c1q;
- (void)GDTfunctionk0QJwG:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

