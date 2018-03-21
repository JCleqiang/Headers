//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor;

@protocol NBProgressViewProtocol <NSObject>
- (void)cancel;
- (void)reset;
- (void)completeProgress;
- (void)startProgress;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;

@optional
- (void)setTrackTintColor:(UIColor *)arg1;
- (void)setProgressTintColor:(UIColor *)arg1;
@end
