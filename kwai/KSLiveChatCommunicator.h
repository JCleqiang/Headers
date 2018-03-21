//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OnRoomStatusNotifyDelegate-Protocol.h"

@class KSLiveChatClient, KSLiveChatClientConnectRequest, KSState, KSStateMachine, KSStateMachineTransitionsHandler, NSError, NSNumber, NSString;

@interface KSLiveChatCommunicator : NSObject <OnRoomStatusNotifyDelegate>
{
    KSLiveChatClient *_client;
    CDUnknownBlockType _selfDisconnectionBlock;
    CDUnknownBlockType _remoteDisconnectionBlock;
    KSStateMachine *_stateMachine;
    KSStateMachineTransitionsHandler *_transitionHandler;
    KSState *_idle;
    KSState *_preparing;
    KSState *_prepared;
    KSState *_pendingPrepared;
    KSState *_stopping;
    KSState *_connecting;
    KSState *_pendingDisconnect;
    KSState *_disconnecting;
    KSState *_connected;
    NSNumber *_userID;
    KSLiveChatClientConnectRequest *_connectRequest;
    CDUnknownBlockType _beginCompletion;
    CDUnknownBlockType _endCompletion;
    NSError *_error;
    long long _audioCategoryIndex;
    long long _audioModeIndex;
    long long _audioSampleRateIndex;
}

@property(nonatomic) long long audioSampleRateIndex; // @synthesize audioSampleRateIndex=_audioSampleRateIndex;
@property(nonatomic) long long audioModeIndex; // @synthesize audioModeIndex=_audioModeIndex;
@property(nonatomic) long long audioCategoryIndex; // @synthesize audioCategoryIndex=_audioCategoryIndex;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType endCompletion; // @synthesize endCompletion=_endCompletion;
@property(copy, nonatomic) CDUnknownBlockType beginCompletion; // @synthesize beginCompletion=_beginCompletion;
@property(retain, nonatomic) KSLiveChatClientConnectRequest *connectRequest; // @synthesize connectRequest=_connectRequest;
@property(readonly, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) KSState *connected; // @synthesize connected=_connected;
@property(retain, nonatomic) KSState *disconnecting; // @synthesize disconnecting=_disconnecting;
@property(retain, nonatomic) KSState *pendingDisconnect; // @synthesize pendingDisconnect=_pendingDisconnect;
@property(retain, nonatomic) KSState *connecting; // @synthesize connecting=_connecting;
@property(retain, nonatomic) KSState *stopping; // @synthesize stopping=_stopping;
@property(retain, nonatomic) KSState *pendingPrepared; // @synthesize pendingPrepared=_pendingPrepared;
@property(retain, nonatomic) KSState *prepared; // @synthesize prepared=_prepared;
@property(retain, nonatomic) KSState *preparing; // @synthesize preparing=_preparing;
@property(retain, nonatomic) KSState *idle; // @synthesize idle=_idle;
@property(retain, nonatomic) KSStateMachineTransitionsHandler *transitionHandler; // @synthesize transitionHandler=_transitionHandler;
@property(retain, nonatomic) KSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) CDUnknownBlockType remoteDisconnectionBlock; // @synthesize remoteDisconnectionBlock=_remoteDisconnectionBlock;
@property(copy, nonatomic) CDUnknownBlockType selfDisconnectionBlock; // @synthesize selfDisconnectionBlock=_selfDisconnectionBlock;
@property(retain, nonatomic) KSLiveChatClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)onRemoteDisconnected;
- (void)onSelfDisconnected:(int)arg1 errorInfo:(id)arg2;
- (void)onExit;
- (void)onConnect:(int)arg1 errorInfo:(id)arg2;
- (void)onPrepared:(int)arg1 errorInfo:(id)arg2;
- (void)didBecomeNotConnected;
- (void)didBecomeConnected;
- (void)didBecomePrepared;
- (void)didBecomeIdle;
- (void)stop;
- (void)disconnect;
- (void)connect;
- (void)prepare;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)destroyAll;
- (void)beginWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fillLiveChatEventWithQoSMetrics:(id)arg1;
@property(retain, nonatomic) KSState *currentState;
- (id)initWithUserID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
