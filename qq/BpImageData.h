//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface BpImageData : NSObject
{
    NSData *_data;
    long long _width;
    long long _height;
    long long _orientation;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) long long height; // @dynamic height;
@property(nonatomic) long long orientation; // @dynamic orientation;
@property(nonatomic) long long width; // @dynamic width;

@end
