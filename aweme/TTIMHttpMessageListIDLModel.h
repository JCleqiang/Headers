//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray;
@protocol Optional, TTIMHttpGroupIdMessageModel><Optional;

@interface TTIMHttpMessageListIDLModel : JSONModel
{
    NSArray<TTIMHttpGroupIdMessageModel><Optional> *_groupIDMessages;
    NSArray<Optional> *_groupIds;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSArray<Optional> *groupIds; // @synthesize groupIds=_groupIds;
@property(copy, nonatomic) NSArray<TTIMHttpGroupIdMessageModel><Optional> *groupIDMessages; // @synthesize groupIDMessages=_groupIDMessages;
- (void).cxx_destruct;
- (id)transformToGroupPBModel;
- (id)transformToPBModel;

@end
