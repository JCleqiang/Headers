//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class AUHTTPServer, NSData, NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString;

@interface AUHTTPConnection : NSObject <NSStreamDelegate>
{
    id delegate;
    NSData *peerAddress;
    AUHTTPServer *server;
    NSMutableArray *requests;
    NSInputStream *istream;
    NSOutputStream *ostream;
    NSMutableData *ibuffer;
    NSMutableData *obuffer;
    _Bool isValid;
    _Bool firstResponseDone;
}

- (void)performDefaultRequestHandling:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)processOutgoingBytes;
- (_Bool)processIncomingBytes;
- (void)invalidate;
- (_Bool)isValid;
- (id)nextRequest;
- (id)server;
- (id)peerAddress;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithPeerAddress:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 forServer:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

