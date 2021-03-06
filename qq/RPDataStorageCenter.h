//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, VASLockDictionary;

@interface RPDataStorageCenter : NSObject
{
    VASLockDictionary *_cachedRedPointMap;
    NSMutableArray *_redPointPathsSyncers;
    NSMutableDictionary *_cacheNumRedpointCountListMap;
    NSMutableDictionary *_cacheNumRedpointMsgListMap;
    NSObject *numRedPotLock;
    VASLockDictionary *_currentUinAppinfoCache;
    NSString *_currentUinKey;
}

+ (id)shareCenter;
- (void).cxx_destruct;
- (id)getNumRedPointMsgBusiByMsgid:(unsigned long long)arg1;
- (id)getNumRedBusiByAppid:(long long)arg1;
- (id)getAllNumRedBusi;
- (void)updateCacheNumMsgBusi:(id)arg1;
- (void)updateCacheNumRedBusi:(id)arg1;
- (void)updateNumRedBusi:(id)arg1;
- (void)updateCacheNumMsgBusis:(id)arg1;
- (void)updateNumMsgBusis:(id)arg1;
- (void)incrUpdateNumRedBusi:(id)arg1;
- (_Bool)saveNumRedBusiByRspBody:(struct CPBMessageDecoder *)arg1;
- (id)resetAppInfoFromPushPBDecoder:(struct CPBMessageDecoder *)arg1;
- (_Bool)checkPushDismissRedPoint:(struct CPBMessageDecoder *)arg1;
- (_Bool)isRedPointValid:(id)arg1;
- (void)saveNewPushAppInfos:(struct CPBMessageDecoder *)arg1;
- (_Bool)saveAppInfosWithPBDecoder:(struct CPBMessageDecoder *)arg1;
- (void)ensureInNumRedPots;
- (void)ensurePluginsInAppInfos;
- (void)updateAppInfos:(id)arg1;
- (void)updateCachedAppInfos:(id)arg1;
- (id)getAppInfoByPath:(id)arg1;
- (id)getAllAppInfos;
- (void)updateAppInfo:(id)arg1;
- (void)updateCachedAppInfo:(id)arg1;
- (id)getUserCacheByType:(int)arg1;
- (void)p_storeToDisk;
- (void)storeToDisk;
- (void)loadFromDisk;
- (void)loadDefaultToUserCache;
- (void)addRPPathsSyncer:(id)arg1;
- (id)init;

@end

