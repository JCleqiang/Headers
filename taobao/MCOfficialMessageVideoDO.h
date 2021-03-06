//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCOfficialMessageBaseDO.h"

#import "MCOfficialMessageVideoDOProtocol-Protocol.h"

@class NSString;

@interface MCOfficialMessageVideoDO : MCOfficialMessageBaseDO <MCOfficialMessageVideoDOProtocol>
{
    _Bool _isRetry;
    unsigned long long _sendStatus;
}

@property(nonatomic) unsigned long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(retain, nonatomic) NSString *coverLocalPath;
@property(retain, nonatomic) NSString *coverURL;
@property(retain, nonatomic) NSString *degradeText;
@property(nonatomic) long long size;
@property(nonatomic) long long duration;
@property(retain, nonatomic) NSString *url;
@property(retain, nonatomic) NSString *localPath;
@property(nonatomic) double width;
@property(nonatomic) double height;
- (id)summary;
- (id)initWithPacket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

