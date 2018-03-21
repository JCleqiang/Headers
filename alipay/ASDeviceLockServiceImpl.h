//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ASDeviceLockService-Protocol.h"

@class NSString;

@interface ASDeviceLockServiceImpl : NSObject <ASDeviceLockService>
{
}

+ (id)convertDateFromString:(id)arg1 format:(id)arg2;
- (void)monitorOneKeyToken:(_Bool)arg1;
- (void)monitorNotification:(id)arg1;
- (void)monitorLoginClicked;
- (void)monitorFindPasswordClicked;
- (id)pickFuckDateFromString:(id)arg1:(id)arg2;
- (double)calcNotificationTimeWith:(id)arg1;
- (_Bool)isSyncValid:(id)arg1;
- (_Bool)isOneKeyTokenValid:(id)arg1;
- (_Bool)isOneKeyLoginEnable;
- (void)buttonClickWith:(unsigned long long)arg1 params:(id)arg2;
- (void)showDeviceLockAlert:(id)arg1;
- (void)handleOpContent:(id)arg1;
- (void)onDeviceLockNotification:(id)arg1;
- (void)onLoginNotification:(id)arg1;
- (void)willDestroy;
- (void)didCreate;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
