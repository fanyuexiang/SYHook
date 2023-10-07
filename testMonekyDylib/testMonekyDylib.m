//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  testMonekyDylib.m
//  testMonekyDylib
//
//  Created by 超级犀牛 on 2020/12/21.
//  Copyright (c) 2020 ___ORGANIZATIONNAME___. All rights reserved.
//

#import "testMonekyDylib.h"
#import <CaptainHook/CaptainHook.h>
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>
#import <MDCycriptManager.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <Photos/Photos.h>
//#import <DoraemonKit/DoraemonManager.h>

CHConstructor{
    printf(INSERT_SUCCESS_WELCOME);
    
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
//        [[DoraemonManager shareInstance] installWithPid:@"6ea7eae49388b382bf516ef78df9c1a0"];
        
#ifndef __OPTIMIZE__
        CYListenServer(6666);

        MDCycriptManager* manager = [MDCycriptManager sharedInstance];
        [manager loadCycript:NO];

        NSError* error;
        NSString* result = [manager evaluateCycript:@"UIApp" error:&error];
        NSLog(@"result: %@", result);
        if(error.code != 0){
            NSLog(@"error: %@", error.localizedDescription);
        }
#endif
        
    }];
}


CHDeclareClass(CustomViewController)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

//add new method
CHDeclareMethod1(void, CustomViewController, newMethod, NSString*, output){
    NSLog(@"This is a new method : %@", output);
}

#pragma clang diagnostic pop

CHOptimizedClassMethod0(self, void, CustomViewController, classMethod){
    NSLog(@"hook class method");
    CHSuper0(CustomViewController, classMethod);
}

CHOptimizedMethod0(self, NSString*, CustomViewController, getMyName){
    //get origin value
    NSString* originName = CHSuper(0, CustomViewController, getMyName);
    
    NSLog(@"origin name is:%@",originName);
    
    //get property
    NSString* password = CHIvar(self,_password,__strong NSString*);
    
    NSLog(@"password is %@",password);
    
    [self newMethod:@"output"];
    
    //set new property
    self.newProperty = @"newProperty";
    
    NSLog(@"newProperty : %@", self.newProperty);
    
    //change the value
    return @"超级犀牛";
    
}

CHDeclareClass(AFHTTPSessionManager)

CHMethod7(NSURLSessionDataTask *, AFHTTPSessionManager, dataTaskWithHTTPMethod, NSString *, method, URLString, NSString *, URLString, parameters, id, parameters, uploadProgress, progressBlock, uploadProgress, downloadProgress, progressBlock, downloadProgress, success, successBlock, success, failure, failureBlock, failure) {
    
    successBlock successB = ^(NSURLSessionDataTask *task, id _Nullable responseObject) {
        
        NSLog(@"网络请求：AFHTTPSessionManager:\nmethod=%@ \nURLString=%@ \nparameters=%@ \nresponseObject=%@", method, URLString, parameters, responseObject);
        !success ? : success(task, responseObject);
    };
    
    NSMutableDictionary *header = [[self valueForKey:@"requestSerializer"] valueForKey:@"mutableHTTPRequestHeaders"];
    NSURLSessionDataTask *task = CHSuper7(AFHTTPSessionManager, dataTaskWithHTTPMethod, method, URLString, URLString, parameters, parameters, uploadProgress, uploadProgress, downloadProgress, downloadProgress, success, successB, failure, failure);
    
    return task;
}


#pragma mark - 广点通SDK
CHDeclareClass(GDTSDKConfig)
CHClassMethod1(void, GDTSDKConfig, registerAppId, NSString *, arg1) {
    NSLog(@"Hook: 广点通SDK 启动, appId: %@", arg1);
//    CHSuper1(GDTSDKConfig, registerAppId, arg1);
}

#pragma mark - 穿山甲SDK
CHDeclareClass(BUAdSDKManager)
CHClassMethod1(BOOL, BUAdSDKManager, setAppID, NSString *, arg1) {
    NSLog(@"Hook: BUAdSDKManager SDK 启动, appId: %@", arg1);
//    CHSuper1(BUAdSDKManager, setAppID, arg1);
    return NO;
}

CHClassMethod1(void, BUAdSDKManager, startWithAsyncCompletionHandler, BUAdSDKManagerStartBlock, arg1) {
//    NSLog(@"Hook: BUAdSDKManager SDK 启动, appId: %@", arg1);
//    CHSuper1(BUAdSDKManager, startWithAsyncCompletionHandler, arg1);
}

CHDeclareClass(ABUAdSDKManager)
CHClassMethod1(BOOL, ABUAdSDKManager, setAppID, NSString *, arg1) {
    NSLog(@"Hook: ABUAdSDKManager SDK 启动, appId: %@", arg1);
//    CHSuper1(BUAdSDKManager, setAppID, arg1);
    return NO;
}
CHDeclareClass(UserInfoManager)
CHMethod0(BOOL, UserInfoManager, isVip) {
    return YES;
}

CHDeclareClass(InviteFriendsPromotiosView)
CHClassMethod1(void, InviteFriendsPromotiosView, showHome, id, arg1) {
    CHSuper1(InviteFriendsPromotiosView, showHome, arg1);
}

CHDeclareClass(DLGlobal)

CHMethod0(BOOL, DLGlobal, isVip) {
    id user = [self valueForKey:@"user"];
    [user setValue:@(1) forKey:@"isVip"];
    [user setValue:@(1) forKey:@"isSuper"];
    [user setValue:@(3) forKey:@"vipType"];
    return YES;
}

//add new property
CHPropertyRetainNonatomic(CustomViewController, NSString*, newProperty, setNewProperty);

CHConstructor{
//    CHLoadLateClass(CustomViewController);
//    CHClassHook0(CustomViewController, getMyName);
//    CHClassHook0(CustomViewController, classMethod);
    
    
    
//    CHLoadLateClass(AFHTTPSessionManager);
//    CHHook7(AFHTTPSessionManager, dataTaskWithHTTPMethod, URLString, parameters, uploadProgress, downloadProgress, success, failure);
    
    // 广点通SDK
    CHLoadLateClass(GDTSDKConfig);
    CHClassHook1(GDTSDKConfig, registerAppId);
    
    // 穿山甲SDK
    CHLoadLateClass(BUAdSDKManager);
    CHClassHook1(BUAdSDKManager, setAppID);
    CHClassHook1(BUAdSDKManager, startWithAsyncCompletionHandler);
    
    CHLoadLateClass(ABUAdSDKManager);
    CHClassHook1(ABUAdSDKManager, setAppID);
    
    // 用户管理
    CHLoadLateClass(UserInfoManager);
    CHHook0(UserInfoManager, isVip);
    
    CHLoadLateClass(InviteFriendsPromotiosView);
    CHClassHook1(InviteFriendsPromotiosView, showHome);
    
    // 墨记会员
//    CHLoadLateClass(DLGlobal);
//    CHHook0(DLGlobal, isVip);

}
