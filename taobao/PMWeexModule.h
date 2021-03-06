//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface PMWeexModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (void)bizCallback:(CDUnknownBlockType)arg1 context:(id)arg2 error:(id)arg3 data:(id)arg4;
+ (id)wx_export_method_504;
+ (id)wx_export_method_449;
+ (id)wx_export_method_413;
+ (id)wx_export_method_373;
+ (id)wx_export_method_333;
+ (id)wx_export_method_302;
+ (id)wx_export_method_271;
+ (id)wx_export_method_241;
+ (id)wx_export_method_211;
+ (id)wx_export_method_180;
+ (id)wx_export_method_149;
+ (id)wx_export_method_127;
+ (id)wx_export_method_87;
+ (id)wx_export_method_54;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)requestTopicStatus:(id)arg1 withTopic:(id)arg2 context:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)requestTopicUserList:(id)arg1 withTopic:(id)arg2 withIndex:(id)arg3 pageSize:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
- (void)sendMessage:(id)arg1 withMsg:(id)arg2 context:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)sendTextMessage:(id)arg1 withMsg:(id)arg2 context:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)count:(id)arg1 withTopic:(id)arg2 withAck:(id)arg3 withParam:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
- (void)multiUnSubscribeByTag:(id)arg1 withTopic:(id)arg2 from:(id)arg3 bizTag:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
- (void)unSubscribeByTag:(id)arg1 withTopic:(id)arg2 from:(id)arg3 bizTag:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
- (void)unSubscribe:(id)arg1 withTopic:(id)arg2 from:(id)arg3 context:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
- (void)multiSubscribeByTag:(id)arg1 withTopic:(id)arg2 from:(id)arg3 bizTag:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
- (void)subscribeByTag:(id)arg1 withTopic:(id)arg2 from:(id)arg3 bizTag:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
- (void)subscribe:(id)arg1 withTopic:(id)arg2 from:(id)arg3 context:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
- (void)setMsgFetchMode:(id)arg1 mode:(long long)arg2;
- (void)multiRegisterCallback:(id)arg1 callback:(id)arg2;
- (void)registerCallback:(id)arg1 callback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

