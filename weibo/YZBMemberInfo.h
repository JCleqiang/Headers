//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString;

@interface YZBMemberInfo : YXModel
{
    long long _achieve_value;
    NSString *_avatar;
    NSString *_desc;
    long long _fansCount;
    long long _followCount;
    NSString *_nickname;
    long long _sex;
}

@property(nonatomic) long long sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long achieve_value; // @synthesize achieve_value=_achieve_value;
- (void).cxx_destruct;

@end

