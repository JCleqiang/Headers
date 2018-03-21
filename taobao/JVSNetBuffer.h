//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSUUID;

@interface JVSNetBuffer : NSObject
{
    NSMutableArray *_inputNodes;
    NSMutableArray *_outputNodes;
    NSUUID *_uuid;
    unsigned long long _type;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *outputNodes;
@property(readonly, nonatomic) NSMutableArray *inputNodes;
@property(readonly, nonatomic) int channels;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
- (_Bool)hasInputs:(id)arg1;
@property(readonly, nonatomic) unsigned long long readCount;
@property(readonly, nonatomic) _Bool isInputs;
@property(readonly, nonatomic) int outputSize;
@property(readonly, nonatomic) int size;
- (int)outputChannels;
- (int)outputHeight;
- (int)outputWidth;
- (int)inputChannels;
- (int)inputHeight;
- (int)inputWidth;
@property(readonly, nonatomic) int inputSize;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 name:(id)arg3;

@end
