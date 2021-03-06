//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WBArSession, WBMediaEditorCache;
@protocol WBStoryMediaCache;

@protocol WBArSessionStateListener <NSObject>

@optional
- (void)arSeesion:(WBArSession *)arg1 didChangeTrackingState:(unsigned long long)arg2;
- (void)arSeesion:(WBArSession *)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)arSeesion:(WBArSession *)arg1 didFinishWithMediaCache:(WBMediaEditorCache<WBStoryMediaCache> *)arg2;
- (void)arSeesion:(WBArSession *)arg1 didFailWithError:(NSError *)arg2;
@end

