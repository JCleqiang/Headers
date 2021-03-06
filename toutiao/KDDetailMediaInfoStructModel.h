//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface KDDetailMediaInfoStructModel : WDBaseModel
{
    NSNumber<Optional> *_media_id;
    NSString<Optional> *_name;
    NSString<Optional> *_avatar_url;
    NSNumber<Optional> *_subscribed;
}

@property(retain, nonatomic) NSNumber<Optional> *subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSString<Optional> *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(retain, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber<Optional> *media_id; // @synthesize media_id=_media_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

