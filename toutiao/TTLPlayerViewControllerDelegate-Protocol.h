//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTLPlayerViewController;

@protocol TTLPlayerViewControllerDelegate <NSObject>

@optional
- (void)playerViewController:(TTLPlayerViewController *)arg1 loadStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)playerShowFullScreen:(TTLPlayerViewController *)arg1;
- (void)playerReadyToRender:(TTLPlayerViewController *)arg1;
@end

