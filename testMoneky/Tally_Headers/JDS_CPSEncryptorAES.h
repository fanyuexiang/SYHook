//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDS_CPSEncryptorAES : NSObject
{
}

+ (id)dataForHexString:(id)arg1;
+ (id)hexStringForData:(id)arg1;
+ (id)generateIv;
+ (id)decryptBase64String:(id)arg1 keyString:(id)arg2;
+ (id)encryptBase64String:(id)arg1 keyString:(id)arg2 separateLines:(_Bool)arg3;
+ (id)decryptData:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)encryptData:(id)arg1 key:(id)arg2 iv:(id)arg3;

@end
