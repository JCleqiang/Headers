//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/IVoipService-Protocol.h>

@class MSFLoginProcessor, NSString, VoipLoginProcessor;

@interface VoipService : NSObject <IVoipService, IEngineDispatchDelegate>
{
    _Bool _bVoipEnabled;
    _Bool _bVoipLogin;
    _Bool _bVoipForegroundEver;
    _Bool _bMFSLogin;
    MSFLoginProcessor *_msfLoginProcessor;
    VoipLoginProcessor *_voipLoginProcessor;
    _Bool _isRecvP2PReq;
}

+ (id)shareInstance;
- (void)sendWupBufferForACKAfterLaunch;
- (void)sendWupBufferForACK:(char *)arg1 cmd:(const char *)arg2;
- (int)sendWupBuffer:(char *)arg1 cmd:(const char *)arg2;
- (void)handleMultiPush:(id)arg1 Withasu:(long long)arg2;
- (void)handleC2CPush:(id)arg1 WithFruin:(long long)arg2;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)requestVoipClose;
- (void)startHeartPing;
- (_Bool)isConnecting;
- (_Bool)isConnected;
- (_Bool)isVoipLogin;
- (void)onBgNetworkStateChanged:(id)arg1;
- (void)onNetworkStateChanged:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)endCall;
- (void)enableVoipChannel:(_Bool)arg1;
- (_Bool)isVoipChannelEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
