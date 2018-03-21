//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSFileManager, NSMutableDictionary, NSString, WeAppEngine, WeAppEnviroment, WeAppNetwork, WeAppViewCacheStrategy;
@protocol OS_dispatch_queue;

@interface WeAppViewCacheManager : NSObject
{
    NSFileManager *weappCacheFileManager;
    _Bool _isUpdating;
    NSString *_version;
    NSString *_apiName;
    WeAppEnviroment *_enviroment;
    WeAppNetwork *_network;
    WeAppEngine *_engine;
    NSString *_configPath;
    NSString *_cachFilePath;
    NSString *_statePath;
    NSMutableDictionary *_pageState;
    NSDictionary *_pageStrategys;
    WeAppViewCacheStrategy *_defaultStrategy;
    NSObject<OS_dispatch_queue> *_ioQueue;
    id _clearObserve;
}

+ (id)getServiceParam:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) id clearObserve; // @synthesize clearObserve=_clearObserve;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) WeAppViewCacheStrategy *defaultStrategy; // @synthesize defaultStrategy=_defaultStrategy;
@property(retain, nonatomic) NSDictionary *pageStrategys; // @synthesize pageStrategys=_pageStrategys;
@property(retain, nonatomic) NSMutableDictionary *pageState; // @synthesize pageState=_pageState;
@property(retain, nonatomic) NSString *statePath; // @synthesize statePath=_statePath;
@property(retain, nonatomic) NSString *cachFilePath; // @synthesize cachFilePath=_cachFilePath;
@property(retain, nonatomic) NSString *configPath; // @synthesize configPath=_configPath;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) __weak WeAppEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak WeAppNetwork *network; // @synthesize network=_network;
@property(nonatomic) __weak WeAppEnviroment *enviroment; // @synthesize enviroment=_enviroment;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)clearInvalidCache;
- (void)clearAllCache;
- (void)dealloc;
- (id)setupPageDict:(id)arg1 withQueryParam:(id)arg2;
- (void)mergeCacheData:(id)arg1 byPage:(id)arg2;
- (id)updateCache:(id)arg1 byKey:(id)arg2 withQueryParam:(id)arg3;
- (id)getPageStrategy:(id)arg1;
- (id)getSafeString:(id)arg1;
- (id)getCacheKeyString:(id)arg1 withQueryParam:(id)arg2;
- (id)readCache:(id)arg1 withQueryParam:(id)arg2;
- (void)loadConfigByDict:(id)arg1;
- (void)updateCacheData:(id)arg1;
- (void)updateCacheConfig;
- (void)loadLocalConfig;
- (_Bool)needUseIoQueue;
- (id)getFileManager;
- (id)getPageVerify:(id)arg1 withQueryParam:(id)arg2;
- (_Bool)isCacheValid:(id)arg1 withQueryParam:(id)arg2;
- (int)getCacheLoadType:(id)arg1;
- (void)updateViewCacheConfig:(id)arg1;
- (void)updateModule:(id)arg1;
- (void)loadPage:(id)arg1 withParam:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)loadPage:(id)arg1 withParam:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4 startProcess:(CDUnknownBlockType)arg5;
- (id)init;

@end
