//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPSetBlacklistPacket : AMPNetPacket
{
    _Bool _userStatus;
    NSString *_userId;
}

@property(readonly, nonatomic) _Bool userStatus; // @synthesize userStatus=_userStatus;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithModifyBlacklistUserId:(id)arg1 userStatus:(_Bool)arg2;

@end
