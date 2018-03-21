//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GrowingNetworkConfig : NSObject
{
    NSString *_customTrackerHost;
    NSString *_zone;
}

+ (id)generateValidEndPoint:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *zone; // @synthesize zone=_zone;
@property(copy, nonatomic) NSString *customTrackerHost; // @synthesize customTrackerHost=_customTrackerHost;
- (void).cxx_destruct;
- (id)growingTrackEndPoint;
- (id)appCircleEndPointWithAi:(id)arg1;
- (id)wsEndPoint;
- (id)tagsHost;
- (id)growingApiHost;
- (id)buildEndPointWithPath:(id)arg1 accountId:(id)arg2 andStm:(unsigned long long)arg3;
- (id)zonePrefix;
- (id)buildCustomEventEndPointWithAi:(id)arg1 andStm:(unsigned long long)arg2;
- (id)buildNormalEventEndPointWithAi:(id)arg1 andStm:(unsigned long long)arg2;

@end
