//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface FRUgcPublishVideoV3CommitRequestModel : TTRequestModel
{
    NSString<Optional> *_title;
    NSString *_video_id;
    NSString *_video_name;
    NSString *_thumb_uri;
    NSNumber *_video_type;
    NSNumber *_video_duration;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber<Optional> *_thumb_source;
    NSNumber<Optional> *_enter_from;
    NSString<Optional> *_title_rich_span;
    NSString<Optional> *_mention_user;
    NSString<Optional> *_mention_concern;
    NSString<Optional> *_category;
    NSString<Optional> *_music_id;
    NSString<Optional> *_challenge_group_id;
}

@property(retain, nonatomic) NSString<Optional> *challenge_group_id; // @synthesize challenge_group_id=_challenge_group_id;
@property(retain, nonatomic) NSString<Optional> *music_id; // @synthesize music_id=_music_id;
@property(retain, nonatomic) NSString<Optional> *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString<Optional> *mention_concern; // @synthesize mention_concern=_mention_concern;
@property(retain, nonatomic) NSString<Optional> *mention_user; // @synthesize mention_user=_mention_user;
@property(retain, nonatomic) NSString<Optional> *title_rich_span; // @synthesize title_rich_span=_title_rich_span;
@property(retain, nonatomic) NSNumber<Optional> *enter_from; // @synthesize enter_from=_enter_from;
@property(retain, nonatomic) NSNumber<Optional> *thumb_source; // @synthesize thumb_source=_thumb_source;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *video_duration; // @synthesize video_duration=_video_duration;
@property(retain, nonatomic) NSNumber *video_type; // @synthesize video_type=_video_type;
@property(retain, nonatomic) NSString *thumb_uri; // @synthesize thumb_uri=_thumb_uri;
@property(retain, nonatomic) NSString *video_name; // @synthesize video_name=_video_name;
@property(retain, nonatomic) NSString *video_id; // @synthesize video_id=_video_id;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

