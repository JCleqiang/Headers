//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIViewController;

@protocol MCPluginContextProtocol <NSObject>
@property(retain, nonatomic) NSString *key;
@property(retain, nonatomic) NSString *pageName;
@property(nonatomic) __weak UIViewController *viewController;

@optional
@property(retain, nonatomic) NSDictionary *userInfo;
@end

