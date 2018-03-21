//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KLConnectionDelegate-Protocol.h"
#import "KLReceiveBufferDelegate-Protocol.h"

@class KLAccessPoint, KLReceiveBuffer, NSMutableDictionary, NSString, TKStateMachine;
@protocol KLConnectionProtocol, KLSessionDelegate, OS_dispatch_queue;

@interface KLSession : NSObject <KLConnectionDelegate, KLReceiveBufferDelegate>
{
    id <KLConnectionProtocol> _connection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    KLReceiveBuffer *_buffer;
    NSMutableDictionary *_requests;
    TKStateMachine *_stateMachine;
    NSString *_clientIp;
    KLAccessPoint *_accessPoint;
    id <KLSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <KLSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) KLAccessPoint *accessPoint; // @synthesize accessPoint=_accessPoint;
- (void).cxx_destruct;
- (id)defaultMonitorParamWithErrorCode:(long long)arg1;
- (void)montor:(id)arg1 request:(id)arg2 errorCode:(long long)arg3;
- (void)handlePush:(id)arg1 withError:(id)arg2;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 withError:(id)arg3;
- (void)didReceive:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didDisConnected:(id)arg1;
- (void)didConnected;
- (void)makeRequestsTimeout;
- (void)ping;
- (void)handShake;
- (void)handleRequest:(id)arg1;
- (void)initStateMachine;
- (_Bool)isAvailable;
- (void)checkRequestsTimeOut;
- (void)close;
- (void)open:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
