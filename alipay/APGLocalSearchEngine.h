//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSTimer;

@interface APGLocalSearchEngine : NSObject
{
    _Bool _isNewInstall;
    NSDictionary *_cachedRegisteredIndexConfigDic;
    NSString *_cachedIndexConfigUserId;
    struct Searcher *_searcher;
    struct LWSearchDataAdapter *_adapter;
    NSDictionary *_scanIntervalInfo;
    NSDictionary *_indexEngineResult;
    NSTimer *_cleanCacheTimer;
}

+ (id)sharedEngine;
+ (_Bool)supportInsertOptimize;
+ (_Bool)supportContactFrend;
+ (_Bool)isSocialImplementInterface;
+ (_Bool)isConfigSupportContactFrend;
@property(nonatomic) _Bool isNewInstall; // @synthesize isNewInstall=_isNewInstall;
@property(retain, nonatomic) NSTimer *cleanCacheTimer; // @synthesize cleanCacheTimer=_cleanCacheTimer;
@property(retain) NSDictionary *indexEngineResult; // @synthesize indexEngineResult=_indexEngineResult;
@property(retain) NSDictionary *scanIntervalInfo; // @synthesize scanIntervalInfo=_scanIntervalInfo;
@property struct LWSearchDataAdapter *adapter; // @synthesize adapter=_adapter;
@property struct Searcher *searcher; // @synthesize searcher=_searcher;
@property(copy) NSString *cachedIndexConfigUserId; // @synthesize cachedIndexConfigUserId=_cachedIndexConfigUserId;
@property(copy, nonatomic) NSDictionary *cachedRegisteredIndexConfigDic; // @synthesize cachedRegisteredIndexConfigDic=_cachedRegisteredIndexConfigDic;
- (void).cxx_destruct;
- (void)deleteIndexDataWithPrimaryKey:(id)arg1 indexConfig:(id)arg2;
- (void)instertIndexDataWithIndexConfig:(id)arg1 primaryKey:(id)arg2 values:(id)arg3;
- (void)insertIndexData:(id)arg1 tableName:(id)arg2 primaryKey:(id)arg3 values:(char **)arg4;
- (id)convertSearchResultToSearchEngineResult:(struct search_result_t *)arg1;
- (_Bool)addDBWithSearchEngineIndex:(id)arg1;
- (_Bool)setupEngine;
- (void)changeFilesAttributeAtPath:(id)arg1;
- (void)prepareSetupEngine;
- (_Bool)readPinyin;
- (_Bool)configIndexWithSearchEngineIndex:(id)arg1 tableName:(id)arg2;
- (id)groupNameByIndexName:(id)arg1;
- (id)searchWithKeyword:(id)arg1 inFields:(id)arg2 atIndexName:(id)arg3 start:(long long)arg4 size:(long long)arg5;
- (id)coreSearchWithKeyword:(id)arg1 inFields:(id)arg2 atIndexName:(id)arg3 start:(long long)arg4 size:(long long)arg5;
- (long long)scanTableWithIndexConfig:(id)arg1 tableName:(id)arg2 userId:(id)arg3 scanCount:(long long *)arg4;
- (long long)scanTableWithIndexConfig:(id)arg1 tableName:(id)arg2 userId:(id)arg3;
- (void)setScanInterval:(long long)arg1 indexName:(id)arg2 tableName:(id)arg3 dbName:(id)arg4;
- (long long)scanInterval:(id)arg1 tableName:(id)arg2 dbName:(id)arg3;
- (_Bool)isIncreaseScanTable:(id)arg1 tableName:(id)arg2 dbName:(id)arg3;
- (void)checkScanInterval;
- (void)saveScanIntervalInfo:(id)arg1;
- (id)readScanIntervalInfo;
- (long long)numberOfFriends;
- (_Bool)isUserLogout:(id)arg1;
- (_Bool)stopHookWithDB:(id)arg1;
- (_Bool)startHookWithDB:(id)arg1 connection:(struct sqlite3 *)arg2;
- (void)ellipsIndexFile:(id)arg1 force:(_Bool)arg2;
- (void)checkEllipsIndexFile;
- (long long)deleteTableDoc:(id)arg1 dbName:(id)arg2 tableName:(id)arg3;
- (void)close;
- (void)unregisterSearchEngineIndex:(id)arg1;
- (_Bool)registerSearchEngineIndex:(id)arg1;
- (_Bool)isSetup;
- (_Bool)isDataBaseNameRegistered:(id)arg1 userId:(id)arg2;
- (void)saveRegisterIndexConfig:(id)arg1 userId:(id)arg2;
- (id)loadRegisterIndexConfig:(id)arg1;

@end

