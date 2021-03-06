//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber;

@interface TDMPerformanceManager : NSObject
{
    NSNumber *_startTime;
}

+ (void)recordPage:(id)arg1 loadTime:(double)arg2 cellsTime:(double)arg3 isDynamicOpen:(_Bool)arg4;
+ (void)registerPageLoadStat;
+ (double)decimalNumberHandle:(double)arg1;
+ (void)commitStat:(long long)arg1 template:(id)arg2 tag:(id)arg3 pageName:(id)arg4 time:(double)arg5;
+ (void)registerComponentStat;
+ (void)finishMeasurePerformance:(id)arg1 tag:(id)arg2 pageName:(id)arg3 type:(long long)arg4;
+ (void)startMeasurePerformance:(id)arg1 tag:(id)arg2 pageName:(id)arg3 type:(long long)arg4;
+ (id)sharedInstance;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;

@end

