//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;
@protocol MCOfficialMessageDOProtocol;

@protocol MCOfficialDataSourceMessageSendDelegate <NSObject>

@optional
- (void)officalAccount:(NSString *)arg1 sendMessageFail:(id <MCOfficialMessageDOProtocol>)arg2 error:(NSError *)arg3;
- (void)officalAccount:(NSString *)arg1 sendMessageSuccess:(id <MCOfficialMessageDOProtocol>)arg2;
- (void)officalAccount:(NSString *)arg1 sendMessageBegin:(id <MCOfficialMessageDOProtocol>)arg2;
@end
