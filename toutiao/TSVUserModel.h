//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface TSVUserModel : JSONModel
{
    _Bool _isFollowed;
    _Bool _isFollowing;
    _Bool _isFriend;
    _Bool _isRealFriend;
    NSString<Optional> *_avatarURL;
    NSString<Optional> *_name;
    NSString<Optional> *_schema;
    NSString<Optional> *_userAuthInfo;
    NSString<Optional> *_userID;
    NSString<Optional> *_verifiedContent;
    NSString<Optional> *_desc;
    NSString<Optional> *_userDecoration;
    NSString<Optional> *_realName;
    long long _followingsCount;
    long long _followersCount;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) long long followersCount; // @synthesize followersCount=_followersCount;
@property(nonatomic) long long followingsCount; // @synthesize followingsCount=_followingsCount;
@property(nonatomic) _Bool isRealFriend; // @synthesize isRealFriend=_isRealFriend;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(copy, nonatomic) NSString<Optional> *realName; // @synthesize realName=_realName;
@property(copy, nonatomic) NSString<Optional> *userDecoration; // @synthesize userDecoration=_userDecoration;
@property(copy, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString<Optional> *verifiedContent; // @synthesize verifiedContent=_verifiedContent;
@property(copy, nonatomic) NSString<Optional> *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString<Optional> *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(copy, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString<Optional> *avatarURL; // @synthesize avatarURL=_avatarURL;
- (void).cxx_destruct;

@end
