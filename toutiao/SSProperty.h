//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SSProperty : NSObject
{
    _Bool _readonly;
    NSString *_name;
    Class _type;
    unsigned long long _policy;
}

@property(readonly, nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
@property(readonly, nonatomic) unsigned long long policy; // @synthesize policy=_policy;
@property(readonly, copy, nonatomic) Class type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObjcProperty:(struct objc_property *)arg1;

@end

