//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAccountChangedProtocol-Protocol.h>

@class NSString, QQC2CMsgTableOperation;

@interface QQC2CMsgTable : NSObject <DBAccountChangedProtocol>
{
    QQC2CMsgTableOperation *_dbOperation;
    struct CDBMaxMsgIdManager *_msgIdManager;
}

- (void).cxx_destruct;
- (void)updateAIOFeedMessage:(id)arg1 MsgID:(long long)arg2 content:(id)arg3 time:(int)arg4 actionUrl:(id)arg5;
- (id)getC2CMessage:(id)arg1 readTime:(int)arg2 count:(int)arg3;
- (_Bool)deleteAccostMsgsWithUin:(id)arg1;
- (void)saveChangeToDB:(id)arg1;
- (_Bool)updateMessageContent:(id)arg1;
- (double)maxValidMessageTimeOfUin:(id)arg1;
- (double)maxMessageTimeOfUin:(id)arg1;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)removeMessage:(id)arg1;
- (id)QQFriendMessage:(id)arg1 MsgID:(long long)arg2 msgCount:(long long)arg3;
- (void)updateC2CRichMsgState:(int)arg1 msgTime:(int)arg2 state:(int)arg3;
- (void)SetC2CMsgSendStateWithMsgID:(id)arg1 state:(int)arg2;
- (id)GetC2CMsgWithTargetUin:(id)arg1 WithType:(id)arg2 beforeOrEqualTime:(long long)arg3 limitCount:(unsigned int)arg4;
- (void)updatePlaceholderFileMsg:(int)arg1 content:(id)arg2;
- (void)transferOnlineFileToOffline:(int)arg1 newContent:(id)arg2;
- (id)getOnlineFileMsg:(id)arg1 fileId:(unsigned int)arg2 time:(int)arg3;
- (id)getOnlineFileMsg:(id)arg1 fileId:(unsigned int)arg2;
- (void)updateOnlineFileStateWithTime:(int)arg1 fromUin:(id)arg2 fileId:(unsigned int)arg3 newState:(int)arg4;
- (void)updateOnlineFileState:(id)arg1 fileId:(unsigned int)arg2 newState:(int)arg3;
- (int)GetC2CMessageCount:(id)arg1 smallerThan:(int)arg2;
- (id)QQFriendMessageAsc:(id)arg1 MsgID:(long long)arg2 msgCount:(long long)arg3 smallerThan:(int)arg4;
- (int)GetC2CMessageCountWithoutRichStateSig:(id)arg1;
- (int)GetC2CMessageCount:(id)arg1;
- (void)deleteMsgWithUin:(id)arg1 msgID:(int)arg2;
- (id)getC2CRichMsg:(id)arg1 beginTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;
- (_Bool)getPTTPICFileFromDB:(id)arg1 len:(int)arg2 type:(int)arg3;
- (void)removeAllAccostMessages;
- (void)upOfflineFileMsg:(id)arg1 uuid:(id)arg2 forContent:(id)arg3;
- (_Bool)updateFileMsgContent:(id)arg1 msgID:(int)arg2 msgTime:(int)arg3 content:(id)arg4;
- (void)upOfflineFileMsg:(id)arg1 uuid:(id)arg2 forRead:(int)arg3;
- (void)upOfflineFileMsg:(id)arg1 time:(int)arg2 forRead:(int)arg3;
- (void)upOffLineFileMsg:(id)arg1 time:(long long)arg2 forRead:(int)arg3;
- (void)upOffLineFileMsg:(id)arg1 msgId:(int)arg2 forRead:(int)arg3;
- (void)clearAllMessage;
- (id)GetVoiceModelList:(id)arg1 msgId:(id)arg2;
- (void)setQQFailStateWithUUid:(id)arg1;
- (void)upVideMsg:(double)arg1 read:(int)arg2 content:(id)arg3;
- (id)QQRomaMessageWithUin:(id)arg1 startTime:(unsigned long long)arg2 pageSize:(unsigned long long)arg3;
- (void)deleteQQMessageWithUin:(id)arg1 FromTime:(int)arg2 toTime:(int)arg3;
- (id)QQMessageWithUinAsc:(id)arg1 pagesize:(unsigned long long)arg2 page:(unsigned long long)arg3;
- (id)QQMessageWithUin:(id)arg1 msgId:(int)arg2 timeStamp:(int)arg3;
- (id)QQMessageWithUin:(id)arg1 msgId:(int)arg2;
- (id)QQMessageWithUin:(id)arg1 timeStamp:(int)arg2;
- (id)systemMessages:(unsigned long long)arg1;
- (void)deleteMsgsWithUin:(id)arg1;
- (void)deleteMsgWithContentArr:(id)arg1:(id)arg2;
- (_Bool)selectQQMsgByTime:(id)arg1;
- (void)setMsgId:(id)arg1;
- (void)insertQQMsgArray:(id)arg1;
- (void)onDBChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initDbOperation;
- (id)getTableName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
