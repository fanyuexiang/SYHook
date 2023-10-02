//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (CouponSafeValue)
+ (id)gdt_safeDictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)yy_modelDictionaryWithClass:(Class)arg1 dictionary:(id)arg2;
+ (id)yy_modelDictionaryWithClass:(Class)arg1 json:(id)arg2;
+ (id)apm_dictionaryWithHttpArgumentsString:(id)arg1;
+ (id)bu_dictionaryWithJSONString:(id)arg1 error:(id *)arg2;
+ (id)bu_dictionaryWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)BUYY_modelDictionaryWithClass:(Class)arg1 dictionary:(id)arg2;
+ (id)BUYY_modelDictionaryWithClass:(Class)arg1 json:(id)arg2;
+ (id)hmdBU_dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)abu_dictionaryWithJSONString:(id)arg1 error:(id *)arg2;
+ (id)abu_dictionaryWithJSONData:(id)arg1 error:(id *)arg2;
- (id)doubleNumberForKey:(id)arg1;
- (id)integerNumberForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (int)intForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)nonullStringForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)doubleNumberForKey:(id)arg1;
- (id)integerNumberForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (int)intForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)nonullStringForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (_Bool)wxApi_boolForKey:(id)arg1;
- (double)wxApi_doubleForKey:(id)arg1;
- (float)wxApi_floatForKey:(id)arg1;
- (long long)wxApi_integerForKey:(id)arg1;
- (id)wxApi_dataForKey:(id)arg1;
- (id)wxApi_dictionaryForKey:(id)arg1;
- (id)wxApi_arrayForKey:(id)arg1;
- (id)wxApi_numberForKey:(id)arg1;
- (id)wxApi_stringForKey:(id)arg1;
- (id)weibosdk_WBSDKJSONStringWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingDelegate:(id)arg2 selector:(SEL)arg3 error:(id *)arg4;
- (id)weibosdk_WBSDKJSONStringWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)weibosdk_WBSDKJSONString;
- (id)weibosdk_WBSDKJSONDataWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingDelegate:(id)arg2 selector:(SEL)arg3 error:(id *)arg4;
- (id)weibosdk_WBSDKJSONDataWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)weibosdk_WBSDKJSONData;
- (id)weibosdk_WBSDKJSONStringWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)weibosdk_WBSDKJSONDataWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)alsl_jsonString;
- (id)aliObjectForKey:(id)arg1;
- (id)toJSONDictionary;
- (id)modelDictionaryWithClass:(Class)arg1 strictMode:(_Bool)arg2;
- (id)modelDictionaryWithClass:(Class)arg1;
- (id)apm_queryString;
- (id)dictionaryToJson;
- (id)mtopJSONString;
- (id)mtopJSONData;
- (void)wpk_removeObjectForKeyPath:(id)arg1;
- (void)wpk_removeObjectForDeepKey:(id)arg1;
- (void)wpk_setObject:(id)arg1 forKeyPath:(id)arg2;
- (void)wpk_setObject:(id)arg1 forDeepKey:(id)arg2;
- (id)wpk_objectForKeyPath:(id)arg1;
- (id)wpk_objectForDeepKey:(id)arg1;
- (id)wvHttpHeaderAccessControlAllowOrigin;
- (double)wvHttpHeaderAge;
- (unsigned long long)wvHttpHeaderContentLength;
- (id)wvHttpHeaderContentType;
- (id)wvHttpHeaderUserAgent;
- (id)wvHttpHeaderSetCookie;
- (id)wvHttpHeaderReferrer;
- (id)wvHttpHeaderLocation;
- (id)wvHttpHeaderDate;
- (id)wvHttpHeaderVia;
- (id)wvDictionaryValue:(id)arg1;
- (id)wvArrayValue:(id)arg1;
- (id)wvStringValue:(id)arg1 default:(id)arg2;
- (id)wvStringValue:(id)arg1;
- (double)wvDoubleValue:(id)arg1 default:(double)arg2;
- (double)wvDoubleValue:(id)arg1;
- (double)wvFloatValue:(id)arg1 default:(double)arg2;
- (double)wvFloatValue:(id)arg1;
- (unsigned long long)wvUnsignedLongLongValue:(id)arg1 default:(unsigned long long)arg2;
- (unsigned long long)wvUnsignedLongLongValue:(id)arg1;
- (long long)wvLongLongValue:(id)arg1 default:(long long)arg2;
- (long long)wvLongLongValue:(id)arg1;
- (unsigned long long)wvUnsignedIntegerValue:(id)arg1 default:(unsigned long long)arg2;
- (unsigned long long)wvUnsignedIntegerValue:(id)arg1;
- (long long)wvIntegerValue:(id)arg1 default:(long long)arg2;
- (long long)wvIntegerValue:(id)arg1;
- (BOOL)wvTristateValue:(id)arg1;
- (_Bool)wvBoolValue:(id)arg1 default:(_Bool)arg2;
- (_Bool)wvBoolValue:(id)arg1;
- (id)wvJSONData;
- (id)wvJSONString;
- (id)bu_cc_objectForInsensitiveKey:(id)arg1;
- (id)bu_cc_dictionaryValueForKey:(id)arg1 defalutValue:(id)arg2;
- (id)bu_cc_arrayValueForKey:(id)arg1 defaultValue:(id)arg2;
- (id)bu_cc_stringValueForKey:(id)arg1 defaultValue:(id)arg2;
- (long long)bu_cc_longlongValueForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)bu_cc_integerValueForKey:(id)arg1 defaultValue:(long long)arg2;
- (int)bu_cc_intValueForKey:(id)arg1 defaultValue:(int)arg2;
- (id)bu_cc_dictionaryValueForKey:(id)arg1;
- (id)bu_cc_arrayValueForKey:(id)arg1;
- (id)bu_cc_stringValueForKey:(id)arg1;
- (long long)bu_cc_longlongValueForKey:(id)arg1;
- (long long)bu_cc_integerValueForKey:(id)arg1;
- (int)bu_cc_intValueForKey:(id)arg1;
- (id)bu_dictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (id)bu_arrayForKey:(id)arg1 defaultValue:(id)arg2;
- (float)bu_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (double)bu_timeIntervalForKey:(id)arg1 defaultValue:(double)arg2;
- (long long)bu_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)bu_longForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)bu_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)bu_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)bu_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (void)bu_forEachWithBlock:(CDUnknownBlockType)arg1;
- (id)bu_JSONRepresentation:(id *)arg1;
- (void)bu_parserWithKey:(id)arg1 stringValue:(id *)arg2 dictValue:(id *)arg3 aryValue:(id *)arg4;
- (id)csj_forcedDictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (id)Ugen_dictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (id)Ugen_arrayForKey:(id)arg1 defaultValue:(id)arg2;
- (float)Ugen_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (double)Ugen_timeIntervalForKey:(id)arg1 defaultValue:(double)arg2;
- (long long)Ugen_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)Ugen_longForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)Ugen_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)Ugen_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)Ugen_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)embed_arrayValueForKey:(id)arg1;
- (id)embed_dictionaryValueForKey:(id)arg1;
- (id)embed_stringValueForKey:(id)arg1;
- (long long)embed_longlongValueForKey:(id)arg1;
- (unsigned long long)embed_unsignedIntegerValueForKey:(id)arg1;
- (long long)embed_integerValueForKey:(id)arg1;
- (double)embed_doubleValueForKey:(id)arg1;
- (_Bool)embed_boolValueForKey:(id)arg1;
- (id)hmdBU_jsonData:(id *)arg1;
- (id)hmdBU_jsonData;
- (id)hmdBU_jsonString:(id *)arg1;
- (id)hmdBU_jsonString;
- (_Bool)hmdBU_isValidJSONObject;
- (id)hmdBU_arrayForKey:(id)arg1;
- (id)hmdBU_dictForKey:(id)arg1;
- (double)hmdBU_doubleForKey:(id)arg1;
- (float)hmdBU_floatForKey:(id)arg1;
- (unsigned long long)hmdBU_unsignedLongLongForKey:(id)arg1;
- (long long)hmdBU_longLongForKey:(id)arg1;
- (unsigned long long)hmdBU_unsignedLongForKey:(id)arg1;
- (long long)hmdBU_longForKey:(id)arg1;
- (unsigned long long)hmdBU_unsignedIntegerForKey:(id)arg1;
- (_Bool)hmdBU_boolForKey:(id)arg1;
- (long long)hmdBU_integerForKey:(id)arg1;
- (unsigned int)hmdBU_unsignedIntForKey:(id)arg1;
- (int)hmdBU_intForKey:(id)arg1;
- (id)hmdBU_stringForKey:(id)arg1;
- (id)hmdBU_objectForKey:(id)arg1 class:(Class)arg2;
- (id)hmdBU_safeObjectForKey:(id)arg1;
- (_Bool)hmdBU_hasKey:(id)arg1;
- (id)abu_JSONRepresentation:(id *)arg1;
- (id)abu_dictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (id)abu_arrayForKey:(id)arg1 defaultValue:(id)arg2;
- (float)abu_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (double)abu_timeIntervalForKey:(id)arg1 defaultValue:(double)arg2;
- (long long)abu_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)abu_longForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)abu_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)abu_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)abu_valueForKeyPathSafely:(id)arg1;
- (id)abu_valueForKeySafely:(id)arg1;
- (id)abu_objectForKeySafely:(id)arg1;
- (_Bool)abu_isNull:(id)arg1;
- (id)abu_toJsonString;
@end

