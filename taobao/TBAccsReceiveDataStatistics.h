//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBAccsStatistics.h"

@class NSDate, NSString;

@interface TBAccsReceiveDataStatistics : TBAccsStatistics
{
    _Bool _repeat;
    int _dataLength;
    NSString *_dataID;
    NSString *_serviceID;
    NSDate *_receiveDate;
    NSDate *_toBZDate;
}

@property(nonatomic) _Bool repeat; // @synthesize repeat=_repeat;
@property(nonatomic) int dataLength; // @synthesize dataLength=_dataLength;
@property(retain, nonatomic) NSDate *toBZDate; // @synthesize toBZDate=_toBZDate;
@property(retain, nonatomic) NSDate *receiveDate; // @synthesize receiveDate=_receiveDate;
@property(retain, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(retain, nonatomic) NSString *dataID; // @synthesize dataID=_dataID;
- (void).cxx_destruct;
- (void)commit;
- (id)init;

@end
