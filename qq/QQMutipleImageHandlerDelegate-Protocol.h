//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSError, QQMutipleImageHandler;

@protocol QQMutipleImageHandlerDelegate <NSObject>

@optional
- (void)mutipleImageHandlerStartHanldeImages:(QQMutipleImageHandler *)arg1;
- (void)mutipleImageHandlerContinuePrepared:(QQMutipleImageHandler *)arg1;
- (void)mutipleImageHandlerPausePrepared:(QQMutipleImageHandler *)arg1;
- (void)mutipleImageHandler:(QQMutipleImageHandler *)arg1 didPreparedWithError:(NSError *)arg2;
@end

