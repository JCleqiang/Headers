//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMRequestItem.h>

@class GSCache, NSObject, NSString;
@protocol GSRequestCallBackDelegate, GSRequestInterceptor, GSRequestProtocol;

@interface GSBaseRequest : SAMRequestItem
{
    _Bool _isLoading;
    _Bool _openDebugMode;
    _Bool _enableEmptyRequest;
    unsigned int _serviceType;
    unsigned int _pkgResult;
    id <GSRequestCallBackDelegate> _delegate;
    id <GSRequestInterceptor> _interceptor;
    unsigned long long _errorType;
    NSString *_errorMessage;
    CDUnknownBlockType _successCompletionBlock;
    CDUnknownBlockType _failureCompletionBlock;
    NSObject<GSRequestProtocol> *_child;
    GSCache *_cache;
}

@property(retain, nonatomic) GSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak NSObject<GSRequestProtocol> *child; // @synthesize child=_child;
@property(copy, nonatomic) CDUnknownBlockType failureCompletionBlock; // @synthesize failureCompletionBlock=_failureCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType successCompletionBlock; // @synthesize successCompletionBlock=_successCompletionBlock;
@property(nonatomic) _Bool enableEmptyRequest; // @synthesize enableEmptyRequest=_enableEmptyRequest;
@property(nonatomic) _Bool openDebugMode; // @synthesize openDebugMode=_openDebugMode;
@property(nonatomic) unsigned int pkgResult; // @synthesize pkgResult=_pkgResult;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) __weak id <GSRequestInterceptor> interceptor; // @synthesize interceptor=_interceptor;
@property(nonatomic) __weak id <GSRequestCallBackDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (id)translateHeaderCode:(unsigned int)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (void)willBeginSending;
- (void)showDebugInfo:(id)arg1;
- (void)afterPerformRequest;
- (void)beforePerformRequest;
- (void)afterPerformFailWithUserInfo:(id)arg1;
- (void)beforePerformFailWithUserInfo:(id)arg1;
- (void)afterPerformSuccessWithUserInfo:(id)arg1;
- (void)beforePerformSuccessWithUserInfo:(id)arg1;
- (void)performcallBackWithUserInfo:(id)arg1;
- (void)callBackWithUserInfo:(id)arg1;
- (void)doSendRequest;
- (void)addAdditionalParameters;
- (void)setCompletionBlockSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)doLoad:(_Bool)arg1;
- (id)cacheKey;
- (long long)cacheTimeInSeconds;
- (_Bool)shouldCache;
- (void)cleanStatus;
- (void)cancel;
- (void)loadWithCompletionBlockSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)loadWithoutCache;
- (void)load;
- (_Bool)shouldCallBackOnMainThread;
- (_Bool)isReachable;
- (id)serviceCmd;
- (void)dealloc;
- (id)init;

@end
