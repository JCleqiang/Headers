//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMRequestItem.h>

@class NSString;

@interface VASSCUpdateReqItem : SAMRequestItem
{
    NSString *_reqCmd;
    NSString *_jsonContent;
}

- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

// Remaining properties
@property(retain, nonatomic) NSString *jsonContent; // @dynamic jsonContent;
@property(retain, nonatomic) NSString *reqCmd; // @dynamic reqCmd;

@end

