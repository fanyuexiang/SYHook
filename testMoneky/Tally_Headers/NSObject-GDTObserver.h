//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (GDTObserver)
+ (id)yy_modelWithDictionary:(id)arg1;
+ (id)yy_modelWithJSON:(id)arg1;
+ (id)_yy_dictionaryWithJSON:(id)arg1;
+ (_Bool)wv_swizzle:(Class)arg1 ClassMethod:(SEL)arg2 withClassMethod:(SEL)arg3;
+ (_Bool)wv_swizzle:(Class)arg1 Method:(SEL)arg2 withMethod:(SEL)arg3;
+ (_Bool)wvSwizzleClassMethod:(SEL)arg1 withClass:(Class)arg2 withClassMethod:(SEL)arg3;
+ (_Bool)wvSwizzleClassMethod:(SEL)arg1 withClassMethod:(SEL)arg2;
+ (_Bool)wvSwizzleMethod:(SEL)arg1 withClass:(Class)arg2 withMethod:(SEL)arg3;
+ (_Bool)wvSwizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;
+ (void)setAbu_db_table:(id)arg1;
+ (id)abu_db_table;
+ (id)databaseName;
+ (id)selectLastOneFromTable;
+ (id)table;
+ (unsigned long long)parseTypeFromCode:(id)arg1;
+ (id)readProperty;
+ (id)readPropertyIfNeeded;
+ (void)createTableIfNeeded;
+ (id)classTableCreateMap;
+ (id)classPropertyMap;
+ (id)formatConvert:(id)arg1;
+ (id)bu_aryAfterFormatWithOriginAry:(id)arg1;
+ (id)bu_dictAfterFormatWithOriginDict:(id)arg1;
+ (id)bu_convertToStringWithOrignalObj:(id)arg1;
+ (id)BUYY_modelWithDictionary:(id)arg1;
+ (id)BUYY_modelWithJSON:(id)arg1;
+ (id)_BUYY_dictionaryWithJSON:(id)arg1;
+ (id)hmdbu_allAttributeMapDictionary;
+ (id)hmdbu_attributeMapDictionary;
+ (id)hmdbu_objectsWithDictionaries:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)hmdbu_objectWithDictionary:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)hmdbu_objectsWithDictionaries:(id)arg1;
+ (id)hmdbu_objectWithDictionary:(id)arg1;
+ (id)hmdbu_primaryKey;
+ (id)hmdbu_managedProperties;
+ (Class)hmdbu_anstorClass;
+ (id)hmdbu_className;
+ (id)attributeMapCache_noLock;
+ (id)ghPropertyWithProperty:(struct objc_property *)arg1;
+ (id)hmdbu_properties;
+ (id)bucn_safePerformWithInstance:(id)arg1 selectorString:(id)arg2 object:(id)arg3 object2:(id)arg4 isVoidReturnType:(_Bool)arg5 error:(id *)arg6;
+ (id)bucn_safePerformWithInstance:(id)arg1 selectorString:(id)arg2 object:(id)arg3 isVoidReturnType:(_Bool)arg4 error:(id *)arg5;
+ (id)bucn_safePerformWithInstance:(id)arg1 selectorString:(id)arg2 isVoidReturnType:(_Bool)arg3 error:(id *)arg4;
+ (void)setB1u2_db_table:(id)arg1;
+ (id)b1u2_db_table;
+ (id)b1u2_selectLastOneFromTable;
+ (id)b1u2_table;
+ (id)b1u2_databaseName;
+ (unsigned long long)b1u2_parseTypeFromCode:(id)arg1;
+ (id)b1u2_readProperty;
+ (id)b1u2_readPropertyIfNeeded;
+ (void)b1u2_createTableIfNeeded;
+ (id)b1u2_classTableCreateMap;
+ (id)b1u2_classPropertyMap;
+ (_Bool)csj_isEmpty_object:(id)arg1;
+ (void)csj_async_main_gaosiViewWithURLString:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)GDTfunctionn1y2Zh:(id)arg1 forKeyPath:(id)arg2;
- (void)GDTfunctione2Mbj3:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)GDTfunctionf2i1zp;
- (void)GDTfunctionv99tkx:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)gdt_observers;
- (id)yy_modelDescription;
- (_Bool)yy_modelIsEqual:(id)arg1;
- (unsigned long long)yy_modelHash;
- (id)yy_modelInitWithCoder:(id)arg1;
- (void)yy_modelEncodeWithCoder:(id)arg1;
- (id)yy_modelCopy;
- (id)yy_modelToJSONString;
- (id)yy_modelToJSONData;
- (id)yy_modelToJSONObject;
- (_Bool)yy_modelSetWithDictionary:(id)arg1;
- (_Bool)yy_modelSetWithJSON:(id)arg1;
- (double)wvInvokeWithDoubleResult:(SEL)arg1;
- (_Bool)wvTryInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4;
- (_Bool)wvTryInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (_Bool)wvTryInvoke:(SEL)arg1 withObject:(id)arg2 withBOOLResult:(_Bool *)arg3;
- (_Bool)wvTryInvoke:(SEL)arg1 withInt:(int)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1 withBOOL:(_Bool)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1 withObject:(id)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1 withBOOLResult:(_Bool *)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1 withResult:(id *)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1;
- (long long)wvInvokeWithIntegerResult:(SEL)arg1;
- (_Bool)wvInvokeWithBOOLResult:(SEL)arg1;
- (id)wvInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4 withObject:(id)arg5;
- (id)wvInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4;
- (id)wvInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)wvInvoke:(SEL)arg1 withObject:(id)arg2;
- (id)wvInvoke:(SEL)arg1;
- (id)abu_db_table;
- (void)convertWithCoder:(id)arg1;
- (void)buildWithCoder:(id)arg1;
- (void)encodeWithABUDBCoder:(id)arg1;
- (id)initWithABUDBCoder:(id)arg1;
- (void)deleteFromTable;
- (void)insertOrUpdateToTable;
- (id)table;
- (void)setBu_observeredDeallocLinstener:(id)arg1;
- (id)bu_observeredDeallocLinstener;
- (void)setBu_observerProxy:(id)arg1 key:(const void *)arg2;
- (id)bu_observerProxyWithKey:(const void *)arg1;
- (void)bu_removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)bu_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)bu_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)BUYY_modelDescription;
- (_Bool)BUYY_modelIsEqual:(id)arg1;
- (unsigned long long)BUYY_modelHash;
- (id)BUYY_modelInitWithCoder:(id)arg1;
- (void)BUYY_modelEncodeWithCoder:(id)arg1;
- (id)BUYY_modelCopy;
- (id)BUYY_modelToJSONString;
- (id)BUYY_modelToJSONData;
- (id)BUYY_modelToJSONObject;
- (_Bool)BUYY_modelSetWithDictionary:(id)arg1;
- (_Bool)BUYY_modelSetWithJSON:(id)arg1;
- (void)hmdbu_async_trace_performWithWrapperObject:(id)arg1;
- (void)hmdbu_async_trace_performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)hmdbu_async_trace_performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(_Bool)arg4 modes:(id)arg5;
- (id)hmdbu_customDescription;
- (id)hmdbu_dataDictionary;
- (void)hmdbu_setAttributes:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)gh_valueForProperty:(id)arg1;
- (void)gh_setValue:(id)arg1 forProperty:(id)arg2;
- (void)hmdbu_setAttributes:(id)arg1;
- (_Bool)hmdbu_validate;
- (_Bool)checkHookConflictAndInvokeSelector:(SEL)arg1 withArguments:(id)arg2 retureValue:(void *)arg3;
- (_Bool)checkHookConflictAndInvokeSelector:(SEL)arg1 withArguments:(id)arg2;
- (id)b1u2_db_table;
- (void)b1u2_convertWithCoder:(id)arg1;
- (void)b1u2_buildWithCoder:(id)arg1;
- (void)encodeWith_b1u2_DBCoder:(id)arg1;
- (id)initWith_b1u2_DBCoder:(id)arg1;
- (void)b1u2_deleteFromTable;
- (void)b1u2_insertOrUpdateToTable;
- (id)b1u2_table;
- (id)csj_as_Dictionary;
- (id)csj_as_Array;
- (id)csj_as_JSONObject;
- (_Bool)csj_instanceof_Dictionary;
- (_Bool)csj_instanceof_JSONObject;
- (_Bool)csj_instanceof_Array;
- (_Bool)csj_instanceof_Object;
- (id)csj_stringWithPropertyArray:(id)arg1;
@end

