//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import "ABUMediaSlotConfigInfo-Protocol.h"
#import "ABUMediationSlotConfigInfo-Protocol.h"

@interface NSString (SKCategory) <ABUMediationSlotConfigInfo, ABUMediaSlotConfigInfo>
+ (double)sk_tallyAmountStringWidth:(id)arg1 height:(double)arg2 font:(id)arg3 color:(id)arg4;
+ (id)sk_doubleFormatterStringWithMaxFractionDigits:(long long)arg1 value:(double)arg2;
+ (id)sk_doubleFormatterStringWithFractionDigits:(long long)arg1 value:(double)arg2;
+ (_Bool)sk_compareAmountEqualWithFromAmount:(id)arg1 toAmount:(id)arg2;
+ (id)sk_tallyAmountToString:(double)arg1;
+ (id)cachedFileNameForKey:(id)arg1;
+ (id)gdt_cachePath;
+ (id)gdt_keyForRequest:(id)arg1;
+ (id)aliURLQueryStringWithDictionary:(id)arg1;
+ (id)keplerUrlEncode:(id)arg1;
+ (id)wv_stringWithBase64EncodedString:(id)arg1;
+ (id)wvURLQueryParameterAllowedCharacterSet;
+ (_Bool)wvIsBlank:(id)arg1;
+ (id)stringWithBase64EncodedString:(id)arg1;
+ (id)abu_tempPath;
+ (id)abu_rootPath;
+ (id)abu_stringFromArray:(id)arg1;
+ (id)abu_stringFromDict:(id)arg1;
+ (id)abu_objcAddressOf:(id)arg1;
+ (id)abu_randomUUIDString;
+ (id)abu_randomStringWithCount:(unsigned long long)arg1;
+ (id)formatter;
+ (id)abu_currentInterval;
+ (id)abu_dateStringSince:(double)arg1;
+ (id)abu_dateNowString;
+ (id)abu_objectWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)abu_urlEncode:(id)arg1;
+ (id)abu_urlParametersStringFromParameters:(id)arg1;
+ (id)abu_urlStringWithOriginUrlString:(id)arg1 appendParameters:(id)arg2;
+ (id)abu_parametersOfURLString:(id)arg1;
+ (id)abu_URLWithURLString:(id)arg1;
+ (id)bu_stringWithBase64EncodedString:(id)arg1;
+ (id)bu_numberShortToW:(long long)arg1 name:(id)arg2;
+ (id)bu_numberToThousand:(long long)arg1;
+ (id)bu_numberToWan:(long long)arg1 wan:(id)arg2;
+ (id)bu_convertNumberFormatter:(id)arg1;
+ (id)bu_urlStringWithUrlString:(id)arg1 parameterString:(id)arg2;
+ (id)bu_urlStringWithBaseUrlString:(id)arg1 requestURLString:(id)arg2;
+ (id)bu_urlParametersStringFromParameters:(id)arg1;
+ (id)bu_urlStringWithOriginUrlString:(id)arg1 appendParameters:(id)arg2;
+ (id)bu_parametersOfURLQueryString:(id)arg1;
+ (id)bu_URLWithURLString:(id)arg1;
+ (id)bu_objectWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)formatter;
+ (id)bu_currentInterval;
+ (id)bu_dateStringSince:(double)arg1;
+ (id)bu_dateNowString;
+ (id)randomStringWithCount:(unsigned long long)arg1;
+ (id)BU_Rely_URLWithURLString:(id)arg1;
+ (id)bu_cachedFileNameForKey:(id)arg1;
+ (id)bu_zf_cachePath;
+ (id)bu_zf_keyForRequest:(id)arg1;
+ (id)Base64StringWithJSONData:(id)arg1;
+ (id)stringWithJSONObject:(id)arg1;
+ (id)bu_queryStringWithParamDictionary:(id)arg1;
+ (_Bool)csj_isSimplifiedChinese;
+ (id)csj_currentLanguage;
+ (_Bool)csj_checkLanguageChanged;
+ (id)csj_getLanguagePath;
+ (id)csj_localizedStringForKey:(id)arg1;
- (id)labelString;
- (_Bool)sk_isCorrect;
- (id)gtm_stringByUnescapingFromURLArgument;
- (id)gtm_stringByEscapingForURLArgument;
- (id)_sanitizedPath;
- (id)wxApi_stringByEncodeUrl;
- (id)wxApi_stringByEncodeByJsonAndUrlEncode;
- (id)wxApi_stringByUnescapingFromURLArgument;
- (id)wxApi_stringByEscapingForURLArgumentOnly;
- (id)wxApi_stringByEscapingForURLArgument;
- (int)wb_wordCount;
- (id)wbsdk_trimmedString;
- (id)wbsdk_stringByReplacingRange:(struct _NSRange)arg1 with:(id)arg2;
- (id)wbsdk_stringEncode;
- (id)wbsdk_URLEncodedString;
- (id)wbsdk_URLEncodedStringWithCFStringEncoding:(unsigned int)arg1;
- (id)weibosdk_mutableObjectFromWBSDKJSONStringWithParseOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)weibosdk_mutableObjectFromWBSDKJSONStringWithParseOptions:(unsigned long long)arg1;
- (id)weibosdk_mutableObjectFromWBSDKJSONString;
- (id)weibosdk_objectFromWBSDKJSONStringWithParseOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)weibosdk_objectFromWBSDKJSONStringWithParseOptions:(unsigned long long)arg1;
- (id)weibosdk_objectFromWBSDKJSONString;
- (id)weibosdk_WBSDKJSONStringWithOptions:(unsigned long long)arg1 includeQuotes:(_Bool)arg2 error:(id *)arg3;
- (id)weibosdk_WBSDKJSONString;
- (id)weibosdk_WBSDKJSONDataWithOptions:(unsigned long long)arg1 includeQuotes:(_Bool)arg2 error:(id *)arg3;
- (id)weibosdk_WBSDKJSONData;
- (id)urlDecode;
- (id)urlEncode;
- (id)alsl_base64Encoded;
- (id)alsl_urlparams;
- (id)alsl_md5;
- (id)alsl_decode;
- (id)alsl_encode;
- (id)aliURLQueryStringToDictionary;
- (id)aliTrim;
- (id)aliUrlEncoded;
- (id)stringNoEncodingByAddingQueryDictionary:(id)arg1;
- (id)aliStringByAddingQueryDictionary:(id)arg1;
- (id)aliStringByAddingURLEncodedQueryDictionary:(id)arg1;
- (id)aliURLDecoding;
- (id)aliQueryDictionary;
- (id)aliQueryDictionaryByAutoDecoding;
- (id)valueForUrlQueryKey:(id)arg1;
- (id)apm_MD5String;
- (id)apm_stringByUnescapingFromURLArgument;
- (void)apm_getUTF32Bytes:(void *)arg1 maxBytes:(unsigned long long)arg2;
- (unsigned long long)apm_UTF32Length;
- (_Bool)isKeplerEqualToString:(id)arg1;
- (id)keplerurlDecode;
- (_Bool)keplerHasURLPrefix:(id)arg1;
- (id)mtopMutableObjectFromJSONString;
- (id)mtopObjectFromJSONString;
- (id)mtopJSONString;
- (id)mtopJSONData;
- (id)dictionaryByParseUrlFromSeparator:(id)arg1;
- (id)stringByEncodeUrl;
- (id)trim;
- (id)URLDecodedString;
- (id)URLEncodedString;
- (id)wpk_URLEncoded;
- (id)wvObjectFromJSONString;
- (id)wv_base64DecodedData;
- (id)wv_base64DecodedString;
- (id)wv_base64EncodedString;
- (id)wv_base64EncodedStringWithWrapWidth:(unsigned long long)arg1;
- (id)wv_URLDecodedString;
- (id)wv_URLEncodedString;
- (id)wvStringByTrimmingEndCharactersInSet:(id)arg1;
- (id)wvStringByTrimmingStartCharactersInSet:(id)arg1;
- (id)wvMD5;
- (id)wvBase64DecodedData;
- (id)wvStringByUnicodeDecoded;
- (id)wvStringByURLDecoded;
- (id)wvStringByURLEncoded;
- (struct _NSRange)wvRangeOfConsecutiveCharacterFromSet:(id)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)wvIndexOfCharacterFromSet:(id)arg1 startWith:(unsigned long long)arg2;
- (unsigned long long)wvIndexOfCharacterFromSet:(id)arg1;
- (unsigned long long)wvIndexOfString:(id)arg1 options:(unsigned long long)arg2 start:(unsigned long long)arg3;
- (unsigned long long)wvIndexOfString:(id)arg1 start:(unsigned long long)arg2;
- (unsigned long long)wvIndexOfString:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)wvIndexOfString:(id)arg1;
- (id)tbsdkMd5;
- (id)base64DecodedData;
- (id)base64DecodedString;
- (id)base64EncodedString;
- (id)base64EncodedStringWithWrapWidth:(unsigned long long)arg1;
- (id)mediationSlotConfig;
- (id)mediaSlotConfigWithMediationSlotID:(id)arg1;
- (id)abu_JSONValue:(id *)arg1;
- (id)abu_DocumentsPath;
- (id)abu_CachePath;
- (id)abu_notRounding:(float)arg1 afterPoint:(int)arg2;
- (id)abu_MD5HashString;
- (id)abu_sha256;
- (id)abu_URLDecodedString;
- (id)abu_URLEncodedString;
- (id)abu_stringByTrim;
- (id)abu_noWhiteSpaceString;
- (id)bu_base64DecodedData;
- (id)bu_base64DecodedString;
- (id)bu_base64EncodedString;
- (id)bu_base64EncodedStringWithWrapWidth:(unsigned long long)arg1;
- (id)bu_URLDecodedString;
- (id)bu_URLEncodedStringWithCustomSet;
- (id)bu_URLEncodedString;
- (id)bu_MD5HashString;
- (id)bu_sha256;
- (id)bu_notRounding:(float)arg1 afterPoint:(int)arg2;
- (id)bu_convertNoWanNumString:(long long)arg1;
- (id)bu_convertNumString:(long long)arg1 value:(long long)arg2 wan:(id)arg3;
- (id)bu_replacingWithPattern:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (id)bu_DocumentsPath;
- (id)bu_CachePath;
- (id)bu_JSONValue:(id *)arg1;
- (struct CGSize)bu_boundingRectWithSize:(struct CGSize)arg1 font:(id)arg2;
- (id)bu_substringWithPattern:(id)arg1;
- (CDUnknownBlockType)ies_appendPath;
- (id)_sanitizedPath;
- (id)dictionaryWithJSONString;
- (id)hmdbucrash_cxxDemangledString;
- (unsigned char)hmdbucrash_valueWithHexChar:(BOOL)arg1;
- (id)hmdbucrash_stringWithHex;
- (id)hmdbu_jsonMutableObject:(id *)arg1;
- (id)hmdbu_jsonObject:(id *)arg1;
- (id)hmdbu_jsonMutableObject;
- (id)hmdbu_jsonObject;
- (id)hmdbu_jsonDict;
- (id)hmdbu_substringWithRange:(struct _NSRange)arg1;
- (id)hmdbu_substringToIndex:(long long)arg1;
- (_Bool)hmdbu_characterAtIndex:(long long)arg1 writeToChar:(char *)arg2;
- (id)bu_urlStringByAddingComponentArray:(id)arg1;
- (id)bu_urlStringByAddingComponentString:(id)arg1;
- (id)bu_stringByURLDecode;
- (id)bu_stringByURLEncode;
- (id)bu_base64DecodedString;
- (id)bu_base64EncodedString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

