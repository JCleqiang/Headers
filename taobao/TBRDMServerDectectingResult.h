//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TBRDMServerDectectingResult : NSObject
{
    char *buffer;
    double _rt;
    NSArray *_detectedObject;
}

@property(retain, nonatomic) NSArray *detectedObject; // @synthesize detectedObject=_detectedObject;
@property(nonatomic) double rt; // @synthesize rt=_rt;
- (void).cxx_destruct;
- (void)dealloc;
- (char *)imageGray;
- (id)initWithImage:(char *)arg1 width:(int)arg2 height:(int)arg3;

@end
