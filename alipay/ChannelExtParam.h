//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface ChannelExtParam : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasChannelId;
    int _channelId;
    NSMutableArray *_extParams;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) int channelId; // @synthesize channelId=_channelId;
@property(readonly) _Bool hasChannelId; // @synthesize hasChannelId=_hasChannelId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExtParams:(id)arg1;
- (void)setExtParamsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
