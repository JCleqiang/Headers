//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class AddFriendSendMsgHeaderUpload, NSDictionary;

@protocol AddFriendSendMsgHeaderUploadDelegate <NSObject>

@optional
- (void)onFinishFileUpload:(AddFriendSendMsgHeaderUpload *)arg1 info:(NSDictionary *)arg2;
- (void)onFileUploadProcess:(AddFriendSendMsgHeaderUpload *)arg1 process:(double)arg2;
- (void)onStartFileUpload:(AddFriendSendMsgHeaderUpload *)arg1;
@end

