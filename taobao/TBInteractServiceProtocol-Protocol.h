//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBCameraSetting, UIViewController;

@protocol TBInteractServiceProtocol <NSObject>
+ (void)publishPhotoFromViewController:(UIViewController *)arg1 withSetting:(TBCameraSetting *)arg2 completion:(void (^)(NSArray *, long long))arg3;
@end

