//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMModel.h"

#import "MIMessageForChat-Protocol.h"
#import "MIMessageGroup-Protocol.h"

@class MMGroup, MMGroupNoticeTemplates, MMGroupNoticeViewObject, MMUser, NSArray, NSString, WBMessageGroup;

@interface MMGroupNotice : MMModel <MIMessageGroup, MIMessageForChat>
{
    _Bool _isNew;
    int _type;
    int _status;
    long long _noticeId;
    MMGroup *_chatGroup;
    WBMessageGroup *_group;
    MMUser *_from;
    MMUser *_target;
    long long _time;
    MMGroupNoticeViewObject *_noticeVO;
    NSString *_content;
    NSString *_buttonAction;
    NSString *_itemAction;
    NSString *_warningMessage;
    MMGroupNoticeTemplates *_templates;
}

+ (_Bool)validGroupNotice:(id)arg1;
+ (id)createWithGroupNotice:(id)arg1;
+ (id)createWithMAPIDictionary:(id)arg1;
@property(retain, nonatomic) MMGroupNoticeTemplates *templates; // @synthesize templates=_templates;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *warningMessage; // @synthesize warningMessage=_warningMessage;
@property(copy, nonatomic) NSString *itemAction; // @synthesize itemAction=_itemAction;
@property(copy, nonatomic) NSString *buttonAction; // @synthesize buttonAction=_buttonAction;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) MMGroupNoticeViewObject *noticeVO; // @synthesize noticeVO=_noticeVO;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(retain, nonatomic) MMUser *target; // @synthesize target=_target;
@property(retain, nonatomic) MMUser *from; // @synthesize from=_from;
@property(nonatomic) WBMessageGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) MMGroup *chatGroup; // @synthesize chatGroup=_chatGroup;
@property(nonatomic) long long noticeId; // @synthesize noticeId=_noticeId;
- (void).cxx_destruct;
- (void)reinitializeViewObject:(long long)arg1;
- (_Bool)needAddImUnreadCount;
- (int)chatType;
- (long long)chatId;
- (long long)globalId;
- (long long)messageId;
- (void)fromResultSet:(id)arg1;
@property(readonly, nonatomic) long long primaryId;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) NSArray *users;
- (id)invalidGroupNoticeViewObject;
- (void)uiReinitializeViewObject:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

