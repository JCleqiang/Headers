//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BDAnimatedImagePlayer, UIImage;

@protocol BDAnimatedImagePlayerDelegate <NSObject>
- (void)imagePlayer:(BDAnimatedImagePlayer *)arg1 didUpdateImage:(UIImage *)arg2 index:(unsigned long long)arg3;

@optional
- (void)imagePlayerDidStopPlay:(BDAnimatedImagePlayer *)arg1;
- (void)imagePlayerStartPlay:(BDAnimatedImagePlayer *)arg1;
@end
