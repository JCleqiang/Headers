//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBLiveMillionBabyQAKeyModel : NSObject
{
    long long _sequence;
    NSString *_key;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;

@end
