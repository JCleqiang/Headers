//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_MBKRideHailingOrderStatusMonitorDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MBKRideHailingOrderManager : NSObject <_MBKRideHailingOrderStatusMonitorDelegate>
{
    NSMutableDictionary *_monitors;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *monitors; // @synthesize monitors=_monitors;
- (void).cxx_destruct;
- (void)monitorDidStop:(id)arg1;
- (id)orderWithOrderId:(id)arg1;
- (void)monitorOrderWithSubscriber:(id)arg1 interval:(double)arg2;
- (id)subscribeOrderStatusWithOrderId:(id)arg1 interval:(double)arg2 orderUpdateSucceeded:(CDUnknownBlockType)arg3 orderUpdateFailed:(CDUnknownBlockType)arg4 orderMonitorDidStopBlock:(CDUnknownBlockType)arg5;
- (void)removeSubscriber:(id)arg1;
- (void)removeMonitor:(id)arg1;
- (void)addMonitor:(id)arg1;
- (void)cancelOrder:(id)arg1 reason:(id)arg2 callback:(CDUnknownBlockType)arg3 errorCallback:(CDUnknownBlockType)arg4;
- (void)updateOrderWithOrderId:(id)arg1 orderUpdateSucceeded:(CDUnknownBlockType)arg2 orderUpdateFailed:(CDUnknownBlockType)arg3;
- (void)updateOrderWithOrderId:(id)arg1 orderUpdateSucceeded:(CDUnknownBlockType)arg2;
- (void)updateOrderWithOrderId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
