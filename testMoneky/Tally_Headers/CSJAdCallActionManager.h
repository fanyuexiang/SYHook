//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJAdCallListenModel, CTCallCenter;

@interface CSJAdCallActionManager : NSObject
{
    CSJAdCallListenModel *_Info_NoteBy;
    CTCallCenter *_Sql_AdIDIdfv;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) CTCallCenter *Sql_AdIDIdfv; // @synthesize Sql_AdIDIdfv=_Sql_AdIDIdfv;
@property(retain, nonatomic) CSJAdCallListenModel *Info_NoteBy; // @synthesize Info_NoteBy=_Info_NoteBy;
- (void)Win_TextStmt:(id)arg1;
- (void)Org_SdkBlue:(id)arg1 WithIsWeb:(_Bool)arg2;
- (void)Fail_NoteMs:(id)arg1;
- (void)All_NULLBy:(id)arg1 source:(id)arg2;
- (void)Self_TsAll;
- (_Bool)Org_StdRush:(id)arg1 WithIsWebPage:(_Bool)arg2 context:(id)arg3;
- (void)Org_StdRush:(id)arg1 context:(id)arg2;

@end

