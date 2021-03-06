//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/CIMFriendsSvrEngineDelegate-Protocol.h>
#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>

@class NSString;

@interface FlistSvrEngine : NSObject <CIMFriendsSvrEngineDelegate, DBAsyncCallbackProtocol>
{
    id respondEngine;
    int _cHasOtherRespFlag;
}

+ (unsigned long long)updateItem;
+ (void)setUpdateItem:(unsigned long long)arg1;
+ (void)addUpdateItem:(unsigned long long)arg1;
+ (id)parseSnsUpateBufferForFriendMask:(const struct SnsUpdateBuffer *)arg1;
+ (id)parseSnsUpateItem:(const struct SnsUpdateBuffer *)arg1;
+ (id)parseSnsUpateBufferValue:(const char *)arg1 length:(int)arg2;
+ (void)exitInstance;
+ (id)GetInstance;
@property(retain, nonatomic) id respondEngine; // @synthesize respondEngine;
- (void)p_asynSaveNeedUpTroopsInfo:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (int)RequestAutoInfo:(long long)arg1 sourceID:(int)arg2 sourceSubID:(int)arg3;
- (void)RequestMoveGroupMem2:(id)arg1 groupId:(id)arg2;
- (void)dealloc;
- (void)CIMFriendsSvrEngine:(id)arg1 didRecievedMsg:(CDStruct_7895f40e)arg2;
- (void)RequestGetTroopAppointRemark:(long long)arg1 groupCode:(long long)arg2 groupUin:(long long)arg3 vecUinList:(id)arg4;
- (int)RequestGetTroopRemark:(long long)arg1 groupCode:(long long)arg2 groupUin:(long long)arg3 seq:(long long)arg4 NextUin:(long long)arg5;
- (void)RequestGetTroopInfo:(long long)arg1 groupCode:(long long)arg2 groupUin:(long long)arg3;
- (int)RequestGetTroopMemberStatus:(long long)arg1 groupCode:(long long)arg2 fromUin:(long long)arg3 groupUin:(long long)arg4;
- (int)RequestGetTroopMemberList:(long long)arg1 groupCode:(long long)arg2 fromUin:(long long)arg3 groupUin:(long long)arg4 reqType:(unsigned int)arg5 getListAppointTime:(unsigned int)arg6;
- (int)RequestGetTroopListV2:(long long)arg1 filterFlag:(_Bool)arg2 cookie:(id)arg3;
- (int)RequestGetTroopLis:(long long)arg1;
- (void)RequestModifyGroupCard:(unsigned int)arg1 uin:(long long)arg2 groupNick:(id)arg3 gender:(BOOL)arg4 phone:(id)arg5 mail:(id)arg6 remark:(id)arg7;
- (void)RequestModifyGroupInfo:(unsigned int)arg1 groupName:(id)arg2 groupPost:(id)arg3 groupMemo:(id)arg4 groupRichMemo:(id)arg5 groudAdmissionType:(int)arg6 groupCategory:(int)arg7 groupFaceId:(int)arg8;
- (int)RequestGroupInfo:(unsigned int)arg1;
- (int)RequestCheckFriend:(long long)arg1 checkUin:(long long)arg2;
- (int)AnswerAddedFriend:(long long)arg1 addUin:(long long)arg2 myAllowFlag:(int)arg3 myfriendgroupid:(unsigned char)arg4 refuseReason:(id)arg5;
- (int)RequestGetDisplayNetStatus:(unsigned long long)arg1;
- (int)RequestSetDisplayNetStatus:(_Bool)arg1;
- (void)RequestSpecialPersonalOnlineInfo:(unsigned int)arg1 reqUin:(unsigned long long)arg2 strMobile:(id)arg3;
- (void)sendGetOnlineInfoRequestWithObject:(id)arg1;
- (int)RequestDeleteFriend:(long long)arg1 fuin:(long long)arg2;
- (int)RequestUserAddFriendSetting:(id)arg1 params:(id)arg2;
- (int)RequestGroupList;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

