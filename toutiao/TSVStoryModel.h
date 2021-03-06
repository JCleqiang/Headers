//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSDictionary, NSString, TSVStoryOriginalData;
@protocol Ignore, Optional, TSVStoryItemModel><Optional;

@interface TSVStoryModel : JSONModel
{
    TSVStoryOriginalData<Ignore> *_storyOriginalData;
    long long _uiStyle;
    NSString<Optional> *_title;
    NSArray<TSVStoryItemModel><Optional> *_stories;
    NSDictionary<Optional> *_logPb;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSDictionary<Optional> *logPb; // @synthesize logPb=_logPb;
@property(copy, nonatomic) NSArray<TSVStoryItemModel><Optional> *stories; // @synthesize stories=_stories;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(nonatomic) long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) __weak TSVStoryOriginalData<Ignore> *storyOriginalData; // @synthesize storyOriginalData=_storyOriginalData;
- (void).cxx_destruct;
- (void)save;

@end

