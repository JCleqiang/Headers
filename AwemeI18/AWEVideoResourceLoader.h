//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"
#import "AWEVideoCacheRequestTaskDelegate-Protocol.h"

@class AWEVideoCachePlayTask, NSError, NSMutableArray, NSString, NSURL;
@protocol AWEVideoPlayerInternalDelegate, AWEVideoResourceLoaderDelegate, OS_dispatch_queue;

@interface AWEVideoResourceLoader : NSObject <AWEVideoCacheRequestTaskDelegate, AVAssetResourceLoaderDelegate>
{
    _Bool _stopped;
    id <AWEVideoResourceLoaderDelegate> _delegate;
    NSError *_error;
    NSURL *_requestURL;
    NSString *_requestURLKey;
    NSMutableArray *_requestList;
    AWEVideoCachePlayTask *_playTask;
    NSObject<OS_dispatch_queue> *_taskQueue;
    id <AWEVideoPlayerInternalDelegate> _internalDelegate;
}

+ (id)resourceLoaderWithURL:(id)arg1 queue:(id)arg2 internalDelegate:(id)arg3;
@property(nonatomic) __weak id <AWEVideoPlayerInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) _Bool stopped; // @synthesize stopped=_stopped;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) AWEVideoCachePlayTask *playTask; // @synthesize playTask=_playTask;
@property(retain, nonatomic) NSMutableArray *requestList; // @synthesize requestList=_requestList;
@property(copy, nonatomic) NSString *requestURLKey; // @synthesize requestURLKey=_requestURLKey;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <AWEVideoResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishLoadingWithLoadingRequest:(id)arg1;
- (void)processRequestList;
- (_Bool)requestedDataCached:(id)arg1;
- (void)removeLoadingRequest:(id)arg1;
- (void)addLoadingRequest:(id)arg1;
- (void)requestTask:(id)arg1 didFailWithError:(id)arg2;
- (void)requestTaskDidFinishLoading:(id)arg1;
- (void)requestTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestTask:(id)arg1 didReceiveData:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)dataRequestDescription:(id)arg1;
- (void)stopLoading;
- (void)getCacheLengthWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 queue:(id)arg2 internalDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

