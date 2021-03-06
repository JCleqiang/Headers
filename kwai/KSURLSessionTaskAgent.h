//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSURLSessionTaskAgentGroup, NSProgress, NSURLRequest;

@interface KSURLSessionTaskAgent : NSObject
{
    NSProgress *_progress;
    NSURLRequest *_request;
    long long _state;
    CDUnknownBlockType _completionHandler;
    KSURLSessionTaskAgentGroup *_agentGroup;
}

+ (id)taskAgentWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak KSURLSessionTaskAgentGroup *agentGroup; // @synthesize agentGroup=_agentGroup;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)task;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)dealloc;

@end

