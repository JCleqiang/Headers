//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLURLRequest.h"

@class NSString;

@interface WBMLImageTextStreamRequest : WBMLURLRequest
{
    NSString *_live_id;
    unsigned long long _count;
    long long _max_cid;
    NSString *_np;
    unsigned long long _time;
}

@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *np; // @synthesize np=_np;
@property(nonatomic) long long max_cid; // @synthesize max_cid=_max_cid;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
- (void).cxx_destruct;
- (id)path;

@end

