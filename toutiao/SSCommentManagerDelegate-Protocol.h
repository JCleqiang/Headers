//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SSCommentManager;

@protocol SSCommentManagerDelegate <NSObject>

@optional
- (void)articleInfoManager:(SSCommentManager *)arg1 shouldShowAddForum:(_Bool)arg2;
- (void)articleInfoManager:(SSCommentManager *)arg1 refreshCommentsCount:(unsigned long long)arg2;
@end

