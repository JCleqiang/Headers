//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol TBLiveMillionBabyPollingServerDelegate;

@interface TBLiveMillionBabyPollingServer : NSObject
{
    _Bool _needStop;
    id <TBLiveMillionBabyPollingServerDelegate> _delegate;
    NSString *_URLString;
    NSString *_gameId;
    long long _requestCount;
    double _cdnLoopDelay;
}

@property(nonatomic) double cdnLoopDelay; // @synthesize cdnLoopDelay=_cdnLoopDelay;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) _Bool needStop; // @synthesize needStop=_needStop;
@property(copy, nonatomic) NSString *gameId; // @synthesize gameId=_gameId;
@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(nonatomic) __weak id <TBLiveMillionBabyPollingServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)processMessage:(id)arg1 requestResult:(_Bool)arg2 timeStamp:(long long)arg3 needContinuePolling:(_Bool)arg4;
- (void)requestPollingRequestWithGameId:(id)arg1 timeStamp:(long long)arg2;
- (void)sendCDNRequest;
- (void)stopServers;
- (void)startServersWithGameId:(id)arg1 cdnLoopDelay:(long long)arg2;
- (void)dealloc;
- (id)init;

@end
