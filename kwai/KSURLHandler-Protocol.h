//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;

@protocol KSURLHandler <NSObject>
- (_Bool)handleOpenURL:(NSURL *)arg1 source:(id)arg2 annotation:(id)arg3;

@optional
- (_Bool)canOpenURL:(NSURL *)arg1;
@end

