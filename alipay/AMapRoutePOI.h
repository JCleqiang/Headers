//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSString;

@interface AMapRoutePOI : AMapSearchObject
{
    NSString *_uid;
    NSString *_name;
    AMapGeoPoint *_location;
    long long _distance;
    long long _duration;
}

+ (id)ajo_mapping;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)init;

@end

