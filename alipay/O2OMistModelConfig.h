//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface O2OMistModelConfig : NSObject
{
    _Bool _forceSilent;
    NSString *_bundleName;
    NSString *_pageName;
}

+ (id)defaultConfig;
@property(nonatomic) _Bool forceSilent; // @synthesize forceSilent=_forceSilent;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (void).cxx_destruct;

@end

