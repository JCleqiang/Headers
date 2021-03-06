//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WBPhoto;

@protocol WBPhotoDelegate <NSObject>
- (void)photoDidFailToLoad:(WBPhoto *)arg1 error:(NSError *)arg2;
- (void)photoDidFinishLoading:(WBPhoto *)arg1;

@optional
- (void)photo:(WBPhoto *)arg1 didReceiveBytes:(long long)arg2 totalBytes:(long long)arg3 progress:(double)arg4;
@end

