//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FRLogDBBaseEntity : NSObject
{
    long long _m_id;
}

+ (id)parsePropertiesOfClass:(Class)arg1;
+ (id)parsePropertiesOfCurrentClass:(Class)arg1;
+ (id)arrayWithPropertiesOfClass:(Class)arg1;
@property(nonatomic) long long m_id; // @synthesize m_id=_m_id;
- (id)initWithFMResultSet:(id)arg1;
- (id)dictionaryWithProperties;

@end
