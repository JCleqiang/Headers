//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveBarragePublishInputParam : TBJSONModel
{
    NSString *_groupName;
    NSString *_targetId;
    NSString *_targetAccountId;
    NSString *_content;
    NSString *_vtime;
    NSString *_extra;
}

@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *vtime; // @synthesize vtime=_vtime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *targetAccountId; // @synthesize targetAccountId=_targetAccountId;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;

@end

