//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSMutableDictionary;

@interface AMPBatchGetUserPacket : AMPNetPacket
{
    NSMutableDictionary *_listUserId;
    NSMutableDictionary *_listNick;
    unsigned long long _channel;
}

@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSMutableDictionary *listNick; // @synthesize listNick=_listNick;
@property(retain, nonatomic) NSMutableDictionary *listUserId; // @synthesize listUserId=_listUserId;
- (void).cxx_destruct;
- (_Bool)conbineWaitingPacket:(id)arg1;
- (long long)getDicValueCount:(id)arg1;
- (_Bool)filterNewPacket:(id)arg1;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithUserIds:(id)arg1 nicks:(id)arg2 channel:(long long)arg3;

@end
