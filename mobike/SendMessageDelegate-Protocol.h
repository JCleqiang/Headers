//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIImage, UIView;

@protocol SendMessageDelegate <NSObject>
- (void)sendMessage:(NSArray *)arg1 text:(NSString *)arg2;
- (void)reViewImage:(UIImage *)arg1 superView:(UIView *)arg2;
- (void)openCameraAction:(id)arg1;
@end

