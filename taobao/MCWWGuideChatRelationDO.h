//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCRelationDO.h"

@class NSString, TBWWUserProfile;

@interface MCWWGuideChatRelationDO : MCRelationDO
{
    NSString *_selfUserId;
    NSString *_selfUserNick;
    NSString *_targetUserNick;
    TBWWUserProfile *_targetUser;
}

@property(copy, nonatomic) TBWWUserProfile *targetUser; // @synthesize targetUser=_targetUser;
@property(copy, nonatomic) NSString *targetUserNick; // @synthesize targetUserNick=_targetUserNick;
@property(copy, nonatomic) NSString *selfUserNick; // @synthesize selfUserNick=_selfUserNick;
@property(copy, nonatomic) NSString *selfUserId; // @synthesize selfUserId=_selfUserId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)relationType;

@end

