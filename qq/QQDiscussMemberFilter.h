//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRelationSearchFilter.h>

@class NSMutableArray, NSMutableDictionary;

@interface QQDiscussMemberFilter : QQRelationSearchFilter
{
    NSMutableArray *_discussGroups;
    NSMutableDictionary *_friends;
}

- (void).cxx_destruct;
- (id)copyAllSearchResults:(id)arg1 excludeUinList:(id)arg2 inDisGroupUin:(long long)arg3;
- (unsigned long long)_calcDisMemberTotalCount:(id)arg1;
- (void)_checkDisMemberResults:(id)arg1 forKeyword:(id)arg2;
- (id)copyAllSearchResults:(id)arg1 excludeUinList:(id)arg2;
- (id)init;

@end

