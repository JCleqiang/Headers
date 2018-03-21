//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/TVKLitePreCacheManagerDelegate-Protocol.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSString, TVKLitePreCacheManager;
@protocol OS_dispatch_queue;

@interface QQReadInJoyVideoPreloadManager : NSObject <TVKLitePreCacheManagerDelegate>
{
    _Bool _async;
    int _duration;
    NSMutableDictionary *_preloadingTasks;
    TVKLitePreCacheManager *_tvkPrecacheManager;
    NSMutableArray *_preloadedQueue;
    NSCountedSet *_preloadCache;
    NSMutableDictionary *_preloadTasks;
    NSMutableDictionary *_preloadedTasks;
    NSMutableDictionary *_report_playID_VID_Map;
    NSObject<OS_dispatch_queue> *_videoPreloadQueue;
}

+ (_Bool)enablePreload;
+ (_Bool)videoID:(id)arg1 isPreloadedWithDuration:(int)arg2 ServiceType:(int)arg3 ClipNo:(int)arg4 VideoSource:(unsigned long long)arg5;
+ (_Bool)videoIsCachedWithVideoID:(id)arg1 atDuration:(int)arg2 ServiceType:(int)arg3 ClipNo:(int)arg4 VideoSource:(unsigned long long)arg5;
+ (_Bool)videoFileID:(id)arg1 isPreloadedWithDuration:(int)arg2 ServiceType:(int)arg3 ClipNo:(int)arg4 VideoSource:(unsigned long long)arg5;
+ (long long)videoSizeShouldPreloadWithFileID:(id)arg1 Duration:(int)arg2 VideoSource:(unsigned long long)arg3;
+ (long long)videoFileSizeWithvideoID:(id)arg1 serviceType:(int)arg2 clipNo:(int)arg3 videoSource:(unsigned long long)arg4;
+ (id)fetchFileIDWithTencentVideoID:(id)arg1;
+ (id)fetchFileIDWithThirdVideoID:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoPreloadQueue; // @synthesize videoPreloadQueue=_videoPreloadQueue;
@property(nonatomic, getter=isAsync) _Bool async; // @synthesize async=_async;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableDictionary *report_playID_VID_Map; // @synthesize report_playID_VID_Map=_report_playID_VID_Map;
@property(retain, nonatomic) NSMutableDictionary *preloadedTasks; // @synthesize preloadedTasks=_preloadedTasks;
@property(retain, nonatomic) NSMutableDictionary *preloadTasks; // @synthesize preloadTasks=_preloadTasks;
@property(retain, nonatomic) NSCountedSet *preloadCache; // @synthesize preloadCache=_preloadCache;
@property(retain, nonatomic) NSMutableArray *preloadedQueue; // @synthesize preloadedQueue=_preloadedQueue;
@property(retain, nonatomic) TVKLitePreCacheManager *tvkPrecacheManager; // @synthesize tvkPrecacheManager=_tvkPrecacheManager;
- (void).cxx_destruct;
- (_Bool)canPreloadVideoWithVideoID:(id)arg1;
- (void)startPreCacheTaskCallbackForVid:(id)arg1 ResultPlayId:(int)arg2 FileID:(id)arg3;
- (void)stopAllPreloadExceptForVideoIDs:(id)arg1;
- (int)_stopPreloadWithPlayID:(int)arg1;
- (void)starPreloadWithPlayID:(int)arg1 taskModel:(id)arg2 fileID:(id)arg3 isSync:(_Bool)arg4;
- (int)_startPreloadWithPlayID:(int)arg1 taskModel:(id)arg2;
- (unsigned long long)createTaskWithTaskModels:(id)arg1 Async:(_Bool)arg2;
- (_Bool)createTaskWithTaskModel:(id)arg1;
- (void)setPrecacheManagerWithServiceType:(int)arg1;
- (id)init;
- (id)getCacheURLWithVideoID:(id)arg1;
- (void)fetchHDVideoURLWithVideoID:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)fetchVideoURLWithVideoID:(id)arg1 Completion:(CDUnknownBlockType)arg2;
@property(retain) NSMutableDictionary *preloadingTasks; // @synthesize preloadingTasks=_preloadingTasks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
