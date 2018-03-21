//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString;
@protocol QQOIDBSSORequestDelegate;

@interface QQOIDBSSORequest : NSObject <IEngineDispatchDelegate>
{
    int _seq;
    unsigned int _serviceType;
    unsigned int _cmd;
    CDUnknownBlockType _requestCompleteBlock;
    id _userInfo;
    id <QQOIDBSSORequestDelegate> _requestDelegate;
}

@property(nonatomic) __weak id <QQOIDBSSORequestDelegate> requestDelegate; // @synthesize requestDelegate=_requestDelegate;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType requestCompleteBlock; // @synthesize requestCompleteBlock=_requestCompleteBlock;
@property(nonatomic) unsigned int cmd; // @synthesize cmd=_cmd;
@property(nonatomic) unsigned int serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)failWithError:(id)arg1 resultData:(id)arg2;
- (void)successWithBuf:(basic_string_075b6133)arg1 OIDBCmd:(unsigned int)arg2 serviceType:(unsigned int)arg3;
- (void)cancel;
- (id)initWithOIDBCmd:(unsigned int)arg1 serviceType:(unsigned int)arg2 requestBodyData:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (id)initWithOIDBCmd:(unsigned int)arg1 serviceType:(unsigned int)arg2 requestBodyData:(id)arg3 delegate:(id)arg4;
- (id)initWithOIDBCmd:(unsigned int)arg1 serviceType:(unsigned int)arg2 requestBodyData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
