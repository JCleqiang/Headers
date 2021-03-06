//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface TTCommonwealManager : NSObject
{
    NSDate *_appEnterForegroundDate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *appEnterForegroundDate; // @synthesize appEnterForegroundDate=_appEnterForegroundDate;
- (void).cxx_destruct;
- (void)dealloc;
- (double)_appDidEnterBackgroundNotification;
- (void)_appWillEnterForegroundNotification;
- (id)_dateStrWithDate:(id)arg1;
- (_Bool)_getHasShowTips;
- (void)_setHasShowTips:(_Bool)arg1;
- (id)_getCommonwealURL;
- (void)_setCommonwealURL:(id)arg1;
- (double)_getReceiveMoney;
- (void)_setReceiveMoney:(double)arg1;
- (_Bool)_getReceiveMoneyEnable;
- (void)_setReceiveMoneyEnable:(_Bool)arg1;
- (id)_timeDict;
- (void)_setTimeDict:(id)arg1;
- (double)_updateTodayUsingTimeWithInterval:(double)arg1 currentDate:(id)arg2;
- (void)uploadTodayUsingTimeWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)getHasShowCommonwealTips;
- (void)setHasShowCommonwealTips:(_Bool)arg1;
- (_Bool)shouldShowTips;
- (double)receiveMoney;
- (_Bool)receiveMoneyEnable;
- (void)trackerWithSource:(id)arg1;
- (id)commonwealSkipURL;
- (double)todayUsingTime;
- (void)startMonitor;

@end

