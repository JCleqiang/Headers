//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"

@class NSMutableData, NSString, NSURL, NSURLRequest, NSURLSession, NSURLSessionDataTask;
@protocol AWEVideoCacheRequestTaskDelegate, OS_dispatch_queue;

@interface AWEVideoCacheRequestTask : NSObject <NSURLConnectionDataDelegate, NSURLSessionDataDelegate>
{
    NSURL *_requestURL;
    id <AWEVideoCacheRequestTaskDelegate> _delegate;
    unsigned long long _fileLength;
    NSString *_mimeType;
    unsigned long long _cacheLength;
    NSURLRequest *_videoRequest;
    NSString *_requestURLKey;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSURLSession *_session;
    NSURLSessionDataTask *_runningTask;
    long long _state;
    unsigned long long _memCacheOffset;
    NSMutableData *_dataCache;
    double _dataReceiveStartTime;
    unsigned long long _downloadSize;
    struct _NSRange _requestRange;
}

@property(nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) double dataReceiveStartTime; // @synthesize dataReceiveStartTime=_dataReceiveStartTime;
@property(retain, nonatomic) NSMutableData *dataCache; // @synthesize dataCache=_dataCache;
@property(nonatomic) unsigned long long memCacheOffset; // @synthesize memCacheOffset=_memCacheOffset;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSURLSessionDataTask *runningTask; // @synthesize runningTask=_runningTask;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) struct _NSRange requestRange; // @synthesize requestRange=_requestRange;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(copy, nonatomic) NSString *requestURLKey; // @synthesize requestURLKey=_requestURLKey;
@property(retain, nonatomic) NSURLRequest *videoRequest; // @synthesize videoRequest=_videoRequest;
@property(nonatomic) unsigned long long cacheLength; // @synthesize cacheLength=_cacheLength;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) unsigned long long fileLength; // @synthesize fileLength=_fileLength;
@property(nonatomic) __weak id <AWEVideoCacheRequestTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (void).cxx_destruct;
- (void)__URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)syncDataWithURLSession:(id)arg1 dataTask:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)__URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)__URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelNetworkRequest;
- (_Bool)startTaskWithRange:(struct _NSRange)arg1 priority:(float)arg2;
- (id)sessionQueue;
- (id)initWithURL:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

