//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class NSString;

@interface QQTroopRemarkTableOperation : NSObject <IQQDBOperationBase>
{
}

- (_Bool)removeRemarkWith:(id)arg1 memUin:(id)arg2 inDb:(id)arg3;
- (id)getAllTroopRemarkListInDb:(id)arg1;
- (void)addColumnToTroopTable:(id)arg1;
- (void)CreateTroopRemarkTableIndex:(id)arg1;
- (id)fillModelWith:(id)arg1;
- (id)getRemarkModelWith:(id)arg1 memUin:(id)arg2 inDb:(id)arg3;
- (id)getTroopRemarkList:(id)arg1 inDb:(id)arg2;
- (void)insertTroopRemarkListBatchUseTransaction:(id)arg1 inDb:(id)arg2;
- (void)insertTroopRemarkListBatch:(id)arg1 inDb:(id)arg2;
- (void)createTroopRemarkTable:(id)arg1 withVersion:(int)arg2;
- (void)dropRemarkTable:(id)arg1;
- (void)transferQQDBDataRemarkTable;
- (void)createTroopRemarkTable:(id)arg1;
- (unsigned long long)getTableSign;
- (void)insertTroopRemarkListWithDb:(long long)arg1 GroupUin:(long long)arg2 MemUin:(long long)arg3 strNick:(id)arg4 strRemark:(id)arg5 phoneNumber:(id)arg6 job:(id)arg7 glamourLevel:(long long)arg8 torchbearerFlag:(long long)arg9 globalGroupChatLevel:(long long)arg10 DB:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

