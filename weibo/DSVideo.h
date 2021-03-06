//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DSBaseObject.h"

@class NSString;

@interface DSVideo : DSBaseObject
{
    NSString *description;
    NSString *video_url;
    NSString *img;
    NSString *img_height;
    NSString *img_width;
    NSString *duration;
    NSString *playAtTime;
    NSString *expires;
    NSString *live;
    NSString *_h5_schema;
    NSString *_miduid;
    NSString *_object_id;
}

+ (id)objectWithJsonDataDictionary:(id)arg1;
@property(retain, nonatomic) NSString *object_id; // @synthesize object_id=_object_id;
@property(retain, nonatomic) NSString *miduid; // @synthesize miduid=_miduid;
@property(retain, nonatomic) NSString *h5_schema; // @synthesize h5_schema=_h5_schema;
@property(retain, nonatomic) NSString *live; // @synthesize live;
@property(retain, nonatomic) NSString *expires; // @synthesize expires;
@property(retain, nonatomic) NSString *playAtTime; // @synthesize playAtTime;
@property(retain, nonatomic) NSString *duration; // @synthesize duration;
@property(retain, nonatomic) NSString *img_height; // @synthesize img_height;
@property(retain, nonatomic) NSString *img_width; // @synthesize img_width;
@property(retain, nonatomic) NSString *img; // @synthesize img;
@property(retain, nonatomic) NSString *video_url; // @synthesize video_url;
@property(retain, nonatomic) NSString *description; // @synthesize description;
- (void).cxx_destruct;

@end

