//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BaiduMobAdUtils : NSObject
{
}

+ (id)coreBlurImage:(id)arg1 withBlurNumber:(double)arg2;
+ (id)imageResize:(id)arg1 andResizeTo:(struct CGSize)arg2;
+ (_Bool)stringMatchWith:(id)arg1 regular:(id)arg2;
+ (_Bool)checkIdsValidWithHexadecimal:(id)arg1 number:(id)arg2;
+ (id)parseJsonStringToArray:(id)arg1;
+ (id)parseJsonStringToDic:(id)arg1 andError:(id *)arg2;
+ (id)parseJsonStringToDic:(id)arg1;
+ (id)dicToJson:(id)arg1;
+ (id)resizeImageSize:(id)arg1 targetSize:(struct CGSize)arg2;
+ (id)dicToString:(id)arg1;
+ (id)base64Decode:(id)arg1;
+ (_Bool)isBangsScreen;
+ (_Bool)isStringPureInt:(id)arg1;
+ (id)getAppStoreIdFromURL:(id)arg1;
+ (_Bool)isAppStoreUrlString:(id)arg1;
+ (void)openURL:(id)arg1 universalLinkURL:(id)arg2 universalLinkScheme:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)imageWithResoureFromBundle:(id)arg1;
+ (id)adjustArrayValue:(id)arg1 itemName:(id)arg2;
+ (id)appendURLWithSupportProtocol:(id)arg1 supportHttps:(_Bool)arg2;
+ (id)replaceURLWithSupportProtocol:(id)arg1;
+ (id)handleEmptyValue:(id)arg1 withDefaut:(id)arg2;
+ (id)objectFromUdefDict:(id)arg1 withKey:(id)arg2 withDefault:(id)arg3;
+ (id)objectFromDict:(id)arg1 withKey:(id)arg2 withDefault:(id)arg3;
+ (id)createWebview;
+ (void)setWebView:(id)arg1 scrollEnabled:(_Bool)arg2;
+ (void)setWebView:(id)arg1 scrollsToTop:(_Bool)arg2;
+ (id)systemVersionString;
+ (double)systemVersion;
+ (unsigned int)longScreenDimension;
+ (unsigned int)shortScreenDimension;
+ (_Bool)isNilOrEmptyString:(id)arg1;
+ (id)newStringWithData:(id)arg1;
+ (id)userAgentForHTTPHeaderField;
+ (id)userAgent;
+ (_Bool)isAvailableUrl:(id)arg1;
+ (id)model;
+ (void)sendStats:(id)arg1;
+ (_Bool)useStats;
+ (id)colorWithHexString:(id)arg1;
+ (id)getRecommendReasonWithoutAlreadyExists:(id)arg1;
+ (id)colorContrastFromSmartColorHexString:(id)arg1 colorModel:(id)arg2;
+ (id)decimalNumberIntoBinary:(id)arg1 binaryLength:(unsigned long long)arg2 defaultBinary:(id)arg3;
+ (void)setView:(id)arg1 ifNotEqualTransform:(struct CGAffineTransform)arg2 bounds:(struct CGRect)arg3 center:(struct CGPoint)arg4;
+ (id)MIMETypeForImageData:(id)arg1;
+ (unsigned long long)UIInterfaceOrientationMaskFromOrientation:(long long)arg1;
+ (double)UIInterfaceOrientationAngleOfOrientation:(long long)arg1;
+ (struct CGPoint)pointInWindowBounds:(struct CGRect)arg1 statusBarOrientation:(long long)arg2 statusBarHeight:(double)arg3;
+ (struct CGRect)rectInWindowBounds:(struct CGRect)arg1 statusBarOrientation:(long long)arg2 statusBarHeight:(double)arg3;
+ (double)getStatusBarHeight;
+ (void)postLogwithUrl:(id)arg1 body:(id)arg2 retry:(_Bool)arg3;
+ (void)pseudeoHttpGetUrl:(id)arg1 target:(id)arg2 callback:(SEL)arg3;
+ (void)sendLogwithLogUrl:(id)arg1 retry:(_Bool)arg2;
+ (id)urlDecodeComponent:(id)arg1;
+ (id)urlEncodeComponent:(id)arg1;
+ (id)urlEncodeString:(id)arg1;
+ (_Bool)dayInterval:(id)arg1 d2:(id)arg2;
+ (_Bool)inSameDay:(id)arg1 d2:(id)arg2;
+ (id)fileModificationDate:(id)arg1;
+ (id)createImageFromDataStr:(id)arg1;
+ (id)decodeFromBase64String:(id)arg1;
+ (id)base64forString:(id)arg1;
+ (id)base64StringFromData:(id)arg1 length:(long long)arg2;
+ (id)customResoureForName:(id)arg1 ofType:(id)arg2;
+ (id)md5:(id)arg1;
+ (id)requestIdWithSN:(id)arg1 publishId:(id)arg2 adId:(id)arg3;
+ (_Bool)isMSSP;
+ (id)cachePath;
+ (id)publisherId;
+ (void)setPublisherId:(id)arg1;
+ (void)preloadResource;
+ (void)initialize;

@end
