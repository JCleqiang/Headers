//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBAudioSource-Protocol.h"
#import "WBAudioStreamPlayerModelProtocol-Protocol.h"

@class NSString, NSURL, WBMusicItemMemberModel, WBMusicItemMigu;

@interface WBMusicItem : WBModelObject <WBAudioSource, WBAudioStreamPlayerModelProtocol>
{
    _Bool _cache;
    _Bool _enablePlay;
    _Bool _canShare;
    _Bool _reward;
    _Bool _is_indefault;
    NSURL *_url;
    double _duration;
    NSString *_identifier;
    NSURL *_audioURL;
    NSString *_title;
    NSString *_artist;
    NSString *_albumName;
    NSString *_albumCover;
    NSString *_lyric;
    NSString *_sourceName;
    NSString *_sourceLogo;
    NSString *_sourceScheme;
    NSString *_sourceAppUrl;
    NSString *_add_link;
    NSString *_delete_link;
    NSString *_songLink;
    NSString *_uids;
    NSString *_object_id;
    NSString *_shareableURL;
    NSString *_source_id;
    NSString *_page_id;
}

@property(copy, nonatomic) NSString *page_id; // @synthesize page_id=_page_id;
@property(copy, nonatomic) NSString *source_id; // @synthesize source_id=_source_id;
@property(copy, nonatomic) NSString *shareableURL; // @synthesize shareableURL=_shareableURL;
@property(copy, nonatomic) NSString *object_id; // @synthesize object_id=_object_id;
@property(copy, nonatomic) NSString *uids; // @synthesize uids=_uids;
@property(copy, nonatomic) NSString *songLink; // @synthesize songLink=_songLink;
@property(copy, nonatomic) NSString *delete_link; // @synthesize delete_link=_delete_link;
@property(copy, nonatomic) NSString *add_link; // @synthesize add_link=_add_link;
@property(nonatomic) _Bool is_indefault; // @synthesize is_indefault=_is_indefault;
@property(nonatomic, getter=isReward) _Bool reward; // @synthesize reward=_reward;
@property(nonatomic) _Bool canShare; // @synthesize canShare=_canShare;
@property(copy, nonatomic) NSString *sourceAppUrl; // @synthesize sourceAppUrl=_sourceAppUrl;
@property(copy, nonatomic) NSString *sourceScheme; // @synthesize sourceScheme=_sourceScheme;
@property(copy, nonatomic) NSString *sourceLogo; // @synthesize sourceLogo=_sourceLogo;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(copy, nonatomic) NSString *albumCover; // @synthesize albumCover=_albumCover;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool enablePlay; // @synthesize enablePlay=_enablePlay;
@property(nonatomic, getter=isCache) _Bool cache; // @synthesize cache=_cache;
@property(copy, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getSongId;
- (id)dictionaryWithValues;
- (void)cloneWithModel:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSString *open_scheme;
@property(nonatomic) _Bool open_musicVc;
@property(retain, nonatomic) WBMusicItemMemberModel *memberModel;
@property(retain, nonatomic) WBMusicItemMigu *call_up_opt;
@property(nonatomic) unsigned long long is_call_up;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

