//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface KdNCCommentModel : NSObject
{
    _Bool _like;
    _Bool _author_selection;
    _Bool _myself;
    _Bool _firstCommentInSecondPage;
    int _level;
    NSString *_comment_id;
    NSString *_comment_content;
    NSArray *_gif_list;
    unsigned long long _like_count;
    unsigned long long _comment_time;
    unsigned long long _rank;
    NSString *_nick_name;
    NSString *_avatar;
    unsigned long long _sub_comments_total;
    NSMutableArray *_sub_comments;
    NSString *_homepage;
    unsigned long long _uin;
    NSString *_author_comment;
    unsigned long long _to;
    NSString *_to_homepage;
    NSString *_to_nickname;
    NSMutableDictionary *_commentsLayout;
}

@property(retain, nonatomic) NSMutableDictionary *commentsLayout; // @synthesize commentsLayout=_commentsLayout;
@property(nonatomic) _Bool firstCommentInSecondPage; // @synthesize firstCommentInSecondPage=_firstCommentInSecondPage;
@property(retain, nonatomic) NSString *to_nickname; // @synthesize to_nickname=_to_nickname;
@property(retain, nonatomic) NSString *to_homepage; // @synthesize to_homepage=_to_homepage;
@property(nonatomic) unsigned long long to; // @synthesize to=_to;
@property(retain, nonatomic) NSString *author_comment; // @synthesize author_comment=_author_comment;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *homepage; // @synthesize homepage=_homepage;
@property(nonatomic) _Bool myself; // @synthesize myself=_myself;
@property(retain, nonatomic) NSMutableArray *sub_comments; // @synthesize sub_comments=_sub_comments;
@property(nonatomic) unsigned long long sub_comments_total; // @synthesize sub_comments_total=_sub_comments_total;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *nick_name; // @synthesize nick_name=_nick_name;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(nonatomic) _Bool author_selection; // @synthesize author_selection=_author_selection;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) _Bool like; // @synthesize like=_like;
@property(nonatomic) unsigned long long comment_time; // @synthesize comment_time=_comment_time;
@property(nonatomic) unsigned long long like_count; // @synthesize like_count=_like_count;
@property(retain, nonatomic) NSArray *gif_list; // @synthesize gif_list=_gif_list;
@property(retain, nonatomic) NSString *comment_content; // @synthesize comment_content=_comment_content;
@property(retain, nonatomic) NSString *comment_id; // @synthesize comment_id=_comment_id;
- (void).cxx_destruct;
- (id)description;
- (void)setCommentLayoutWithType:(int)arg1 layout:(id)arg2;
- (id)getCommentLayoutWithType:(int)arg1;
- (id)createSecondComment;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithType:(int)arg1 commentId:(id)arg2 commentContent:(id)arg3 toUin:(unsigned long long)arg4 toNickname:(id)arg5;
- (id)initWithDic:(id)arg1;
- (id)cellClassName;
- (id)cellIdentifier;

@end

