//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQPMessage-Protocol.h"

@class MQPCodedInputStream, MQPExtensionRegistry, NSData, NSInputStream;
@protocol MQPGeneratedMessageProtocol;

@protocol MQPGeneratedMessageProtocol <MQPMessage>
+ (id <MQPGeneratedMessageProtocol>)parseFromData:(NSData *)arg1;

@optional
+ (id <MQPGeneratedMessageProtocol>)parseFromCodedInputStream:(MQPCodedInputStream *)arg1 extensionRegistry:(MQPExtensionRegistry *)arg2;
+ (id <MQPGeneratedMessageProtocol>)parseFromCodedInputStream:(MQPCodedInputStream *)arg1;
+ (id <MQPGeneratedMessageProtocol>)parseFromInputStream:(NSInputStream *)arg1 extensionRegistry:(MQPExtensionRegistry *)arg2;
+ (id <MQPGeneratedMessageProtocol>)parseFromInputStream:(NSInputStream *)arg1;
+ (id <MQPGeneratedMessageProtocol>)parseFromData:(NSData *)arg1 extensionRegistry:(MQPExtensionRegistry *)arg2;
@end

