//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JVSCPUBuffer, JVSNetBuffer, MPSImage, NSString;
@protocol MTLBuffer;

@interface JVSBuffer : NSObject
{
    JVSNetBuffer *_netBuffer;
    id <MTLBuffer> _metalBuffer;
    unsigned long long _offset;
    JVSCPUBuffer *_buffer;
    NSString *_name;
    unsigned long long _size;
    MPSImage *_imageBuffer;
}

@property(nonatomic) __weak MPSImage *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) JVSCPUBuffer *buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) JVSNetBuffer *netBuffer; // @synthesize netBuffer=_netBuffer;
@property(retain, nonatomic) id <MTLBuffer> metalBuffer; // @synthesize metalBuffer=_metalBuffer;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 size:(unsigned long long)arg2 buffer:(id)arg3 offset:(unsigned long long)arg4;
- (id)initWithName:(id)arg1 size:(unsigned long long)arg2 metalBuffer:(id)arg3 offset:(unsigned long long)arg4;
- (id)initWithName:(id)arg1 size:(unsigned long long)arg2 netBuffer:(id)arg3 offset:(unsigned long long)arg4;

@end
