//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KLSessionDelegate-Protocol.h"

@class KLSession, NSMutableArray, NSString, TKStateMachine;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface KLSessionManager : NSObject <KLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_operationQueue;
    TKStateMachine *_stateMachine;
    NSMutableArray *_launchingSessions;
    NSMutableArray *_abandonSessions;
    int _heartBeatTime;
    NSObject<OS_dispatch_source> *_timer;
    KLSession *_session;
    int _connectTimes;
    int _nextReconnectDelay;
    _Bool _isBackground;
}

+ (id)shareInstance;
@property _Bool isBackground; // @synthesize isBackground=_isBackground;
- (void).cxx_destruct;
- (void)unregisterSession:(CDUnknownBlockType)arg1;
- (void)sendHeartBeat;
- (void)heartBeat;
- (void)handleConfig:(id)arg1;
- (void)registerSession;
- (void)reachabilityChanged:(id)arg1;
- (void)disableReachabilityNotify;
- (void)enableReachabilityNotify;
- (void)handleLinkError:(long long)arg1 message:(id)arg2;
- (void)didReceiveLinkErrorResponse:(id)arg1 response:(id)arg2;
- (void)didReceiveInvalidPacket;
- (void)didSessionError:(id)arg1 error:(id)arg2;
- (void)didOpenFailed:(id)arg1 error:(id)arg2;
- (void)didOpenSuccess:(id)arg1;
- (void)nextServerProfile:(id)arg1;
- (void)updateSession:(id)arg1;
- (void)abandonAllSession;
- (_Bool)isLaunchingSession:(id)arg1;
- (_Bool)isAbandonSession:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)launchSession;
- (_Bool)isAvailable;
- (_Bool)isLaunching;
- (_Bool)isInvalid;
- (_Bool)send:(id)arg1 timeout:(double)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)logout:(CDUnknownBlockType)arg1;
- (void)close;
- (void)reOpen;
- (void)open;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)initStateMachine;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

