//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_source;

@interface APPlpelineManager : NSObject
{
    NSMutableDictionary *_pipelineMap;
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_source> *_dispatchTimeOutSource;
    _Bool _idlePipeRun;
}

+ (id)shareMananger;
@property(nonatomic) _Bool idlePipeRun; // @synthesize idlePipeRun=_idlePipeRun;
- (void).cxx_destruct;
- (float)cpu_usage;
- (id)getPipelineByName:(id)arg1;
- (void)cleanIdleTask;
- (void)checkIdleTask;
- (void)receivePipelineIdleNoti:(id)arg1;
- (void)createTimeOutSource;
- (void)dealloc;
- (id)init;

@end
