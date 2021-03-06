//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEUserModel, NSArray, NSNumber;

@interface AWEStoryFeedModel : AWEBaseApiModel
{
    NSNumber *_status;
    AWEUserModel *_userInfo;
    NSNumber *_updateTime;
    long long _type;
    NSArray *_videosArray;
}

+ (id)videosArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *videosArray; // @synthesize videosArray=_videosArray;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) AWEUserModel *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

