//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FTSRlIndexDBUpInfo : NSObject
{
    NSObject<OS_dispatch_queue> *_queue_index_dbup;
    NSMutableDictionary *_dbUpInfo;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSMutableDictionary *dbUpInfo; // @synthesize dbUpInfo=_dbUpInfo;
- (void).cxx_destruct;
- (void)ftsUpdateCreatIndexProgress:(id)arg1 rlType:(long long)arg2 uin:(id)arg3;
- (id)ftsGetUnFinishedSetsWithUin:(id)arg1 rlType:(long long)arg2;
- (void)ftsAsynSaveToPlist:(id)arg1 rlType:(long long)arg2;
- (id)init;

@end

