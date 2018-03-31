//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol CNStationPackageItem;

@interface CNMultiPackageItem : TBJSONModel
{
    NSString *_stationId;
    NSString *_stationName;
    NSArray<CNStationPackageItem> *_packageInfos;
}

@property(retain, nonatomic) NSArray<CNStationPackageItem> *packageInfos; // @synthesize packageInfos=_packageInfos;
@property(copy, nonatomic) NSString *stationName; // @synthesize stationName=_stationName;
@property(copy, nonatomic) NSString *stationId; // @synthesize stationId=_stationId;
- (void).cxx_destruct;

@end
