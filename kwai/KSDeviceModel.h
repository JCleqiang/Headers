//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSDeviceModel : NSObject
{
    unsigned long long _category;
    long long _majorVersion;
    long long _minorversion;
}

+ (id)deviceModelWithString:(id)arg1;
@property(nonatomic) long long minorversion; // @synthesize minorversion=_minorversion;
@property(nonatomic) long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
- (id)description;

@end

