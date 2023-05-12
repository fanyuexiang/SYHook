//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTFullScreenOverlayMediatorViewDelegate-Protocol.h"
#import "GDTFullScreenOverlayMediatorViewProtocol-Protocol.h"

@class GDTAdBaseModel, GDTFullScreenOverlayMediatorViewParam, NSString;
@protocol GDTFullScreenOverlayMediatorViewDelegate, GDTFullScreenOverlayMediatorViewProtocol><GDTPlayerControlProtocol;

@interface GDTFullScreenOverlayMediatorView : UIView <GDTFullScreenOverlayMediatorViewDelegate, GDTFullScreenOverlayMediatorViewProtocol>
{
    _Bool _useBackupMediatorView;
    GDTFullScreenOverlayMediatorViewParam *_param;
    GDTAdBaseModel *_adModel;
    id <GDTFullScreenOverlayMediatorViewDelegate> _delegate;
    CDUnknownBlockType _mediatorRenderFailInternalBlock;
    UIView<GDTFullScreenOverlayMediatorViewProtocol><GDTPlayerControlProtocol> *_mediatorView;
}

@property(nonatomic) _Bool useBackupMediatorView; // @synthesize useBackupMediatorView=_useBackupMediatorView;
@property(retain, nonatomic) UIView<GDTFullScreenOverlayMediatorViewProtocol><GDTPlayerControlProtocol> *mediatorView; // @synthesize mediatorView=_mediatorView;
@property(copy, nonatomic) CDUnknownBlockType mediatorRenderFailInternalBlock; // @synthesize mediatorRenderFailInternalBlock=_mediatorRenderFailInternalBlock;
@property(nonatomic) __weak id <GDTFullScreenOverlayMediatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (void)GDTfunctiont46Wy9;
- (void)GDTfunctionq09zHc;
- (void)GDTfunctiont46Wy9:(Class)arg1;
- (void)GDTfunctions0RcG8;
- (void)GDTfunctionw0ZAT9;
@property(retain, nonatomic) GDTFullScreenOverlayMediatorViewParam *param; // @synthesize param=_param;
- (id)initLk0QkxC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

