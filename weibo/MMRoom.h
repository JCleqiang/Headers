//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMModel.h"

@class MMUser, NSString;

@interface MMRoom : MMModel
{
    _Bool _isSaved;
    _Bool _isOwner;
    _Bool _hasFans;
    long long _roomId;
    NSString *_name;
    NSString *_avatar;
    MMUser *_owner;
    unsigned long long _memberCount;
    NSString *_tips;
    NSString *_superManagers;
    NSString *_managers;
}

+ (id)createWithMAPIResp:(id)arg1 mySelf:(long long)arg2;
+ (id)createWithRoomResp:(id)arg1 mySelf:(long long)arg2;
@property(copy, nonatomic) NSString *managers; // @synthesize managers=_managers;
@property(copy, nonatomic) NSString *superManagers; // @synthesize superManagers=_superManagers;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) unsigned long long memberCount; // @synthesize memberCount=_memberCount;
@property(retain, nonatomic) MMUser *owner; // @synthesize owner=_owner;
@property(nonatomic) _Bool hasFans; // @synthesize hasFans=_hasFans;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(nonatomic) _Bool isSaved; // @synthesize isSaved=_isSaved;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)fromResultSet:(id)arg1;
- (id)initWithRoomId:(long long)arg1;

@end

