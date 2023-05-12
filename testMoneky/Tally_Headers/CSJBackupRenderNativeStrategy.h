//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJBackupRenderStrategy.h"

#import "CSJCoverViewDelegate-Protocol.h"

@class CSJCoverView, NSString;

@interface CSJBackupRenderNativeStrategy : CSJBackupRenderStrategy <CSJCoverViewDelegate>
{
    CSJCoverView *_coverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJCoverView *coverView; // @synthesize coverView=_coverView;
- (id)logKeyName;
- (long long)renderType;
- (long long)playerTotalTime;
- (double)playerCurrentTime;
- (void)coverViewClickDownload:(id)arg1 clickExtraInfo:(id)arg2;
- (void)coverViewClickAdLogo:(id)arg1;
- (void)coverViewClickClose:(id)arg1;
- (void)coverViewClickVideo:(id)arg1;
- (void)coverViewClick:(id)arg1 areaCategory:(long long)arg2 clickExtraInfo:(id)arg3;
- (void)updateWithThemeStatus:(long long)arg1;
- (void)render_really;
- (void)async_to_main_render_really;
- (void)render;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

