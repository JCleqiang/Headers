//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MKTBizConfig-Protocol.h"

@class NSString;

@interface TBQQGBizConfig : NSObject <MKTBizConfig>
{
}

- (_Bool)canCustomFunctionalMenuWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canEditGroupAnnouncementWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canShowQRCodeItemWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canShowGroupNameWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canShowDeleteEntranceWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canShowAddEntranceWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)isNeedCheckJoinConditionWithGroupInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

