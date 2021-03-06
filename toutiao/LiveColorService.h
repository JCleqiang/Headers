//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;
@protocol LiveColorServiceProtocol;

@interface LiveColorService : NSObject
{
    id <LiveColorServiceProtocol> _implementation;
    NSDictionary *_colors;
}

+ (id)colorWithHexString:(id)arg1;
+ (id)sharedInstance;
+ (void)load;
@property(retain, nonatomic) NSDictionary *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) id <LiveColorServiceProtocol> implementation; // @synthesize implementation=_implementation;
- (void).cxx_destruct;
- (void)start;
- (id)init;

@end

