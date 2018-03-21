//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRRunner.h"

@class NSObject, NSString;
@protocol FRCounterDAO, OS_dispatch_queue;

@interface FRCounter : FRRunner
{
    NSObject<OS_dispatch_queue> *_counterQueue;
    NSString *_ormFilePath;
    id <FRCounterDAO> _dao;
}

@property(retain, nonatomic) id <FRCounterDAO> dao; // @synthesize dao=_dao;
@property(retain, nonatomic) NSString *ormFilePath; // @synthesize ormFilePath=_ormFilePath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *counterQueue; // @synthesize counterQueue=_counterQueue;
- (void).cxx_destruct;
- (void)incrementWithAmount:(long long)arg1 eventId:(id)arg2 attributes:(id)arg3;
- (void)commit;
- (void)count:(id)arg1 attributes:(id)arg2;
- (id)init;

@end
