//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTIMMsgQueueItemConfig : NSObject
{
    _Bool _needAck;
    _Bool _isRemoveDuplication;
    int _priority;
    int _maxRetry;
    int _timeOuts;
    int _wsMaxRetryBeforeHttp;
}

@property(nonatomic) int wsMaxRetryBeforeHttp; // @synthesize wsMaxRetryBeforeHttp=_wsMaxRetryBeforeHttp;
@property(nonatomic) _Bool isRemoveDuplication; // @synthesize isRemoveDuplication=_isRemoveDuplication;
@property(nonatomic) int timeOuts; // @synthesize timeOuts=_timeOuts;
@property(nonatomic) _Bool needAck; // @synthesize needAck=_needAck;
@property(nonatomic) int maxRetry; // @synthesize maxRetry=_maxRetry;
@property(nonatomic) int priority; // @synthesize priority=_priority;
- (id)init;

@end

