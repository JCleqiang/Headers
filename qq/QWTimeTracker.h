//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QWTimeTracker : NSObject
{
    NSMutableDictionary *_allBeginTimeMap;
}

+ (id)shareTracker;
- (void).cxx_destruct;
- (void)endTrackWithOPName:(id)arg1 userType:(int)arg2 result:(_Bool)arg3;
- (double)timeCostWithOPName:(id)arg1;
- (void)startTrackWithOPName:(id)arg1;
- (id)init;

@end
