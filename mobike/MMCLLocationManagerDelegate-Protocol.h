//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLHeading, CLLocation, MMCLLocationManager, NSError;

@protocol MMCLLocationManagerDelegate <NSObject>
- (void)manager:(MMCLLocationManager *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)manager:(MMCLLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)manager:(MMCLLocationManager *)arg1 didUpdateToLocation:(CLLocation *)arg2 fromLocation:(CLLocation *)arg3;
@end
