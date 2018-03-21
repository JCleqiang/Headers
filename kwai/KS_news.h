//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KS_feed, KS_user_info, NSDate, NSMutableArray, NSMutableAttributedString, NSNumber, NSString;

@interface KS_news : NSObject
{
    NSNumber *_news_type;
    NSNumber *_from_user;
    NSMutableArray *_photos;
    KS_feed *_photo_info;
    NSNumber *_photos_count;
    NSNumber *_timestamp;
    NSDate *_date;
    NSNumber *_to_user;
    KS_user_info *_user_info;
    NSMutableArray *_users;
    NSNumber *_users_count;
    NSString *_timeString;
    NSMutableAttributedString *_contentAttributedString;
    long long _type;
    struct CGSize _lableSize;
}

+ (id)mj_objectClassInArray;
@property(nonatomic) struct CGSize lableSize; // @synthesize lableSize=_lableSize;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableAttributedString *contentAttributedString; // @synthesize contentAttributedString=_contentAttributedString;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) NSNumber *users_count; // @synthesize users_count=_users_count;
@property(retain, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property(retain, nonatomic) KS_user_info *user_info; // @synthesize user_info=_user_info;
@property(retain, nonatomic) NSNumber *to_user; // @synthesize to_user=_to_user;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *photos_count; // @synthesize photos_count=_photos_count;
@property(retain, nonatomic) KS_feed *photo_info; // @synthesize photo_info=_photo_info;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSNumber *from_user; // @synthesize from_user=_from_user;
@property(retain, nonatomic) NSNumber *news_type; // @synthesize news_type=_news_type;
- (void).cxx_destruct;
- (id)nameListWithUserInfos:(id)arg1 role:(id)arg2;
- (id)richNameWithFeed:(id)arg1 role:(id)arg2;
- (id)richUserNameWithUserInfoWithRole:(id)arg1;
- (id)classWithid:(long long)arg1;
- (id)createSomeLikeOne;
- (id)createOneLikeMore;
- (id)createSomeFollowOne;
- (id)createOneFollowMore;
- (void)updateAttributedString;

@end
