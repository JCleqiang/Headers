//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APConfigObserver : NSObject
{
    id _observer;
    NSString *_key;
}

+ (id)initWithObserver:(id)arg1 key:(id)arg2;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithObserver:(id)arg1 key:(id)arg2;

@end

