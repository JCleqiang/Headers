//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KS_user_info.h"

@class NSDate, NSNumber, NSString;

@interface KS_mail_list : KS_user_info
{
    _Bool _canRefresh;
    NSString *_last_message;
    NSNumber *_new_count;
    NSNumber *_timestamp;
    NSDate *_date;
    NSString *_timeString;
    NSNumber *_refreshInterval;
}

@property(nonatomic) NSNumber *refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) _Bool canRefresh; // @synthesize canRefresh=_canRefresh;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic, getter=the_new_count) NSNumber *new_count; // @synthesize new_count=_new_count;
@property(retain, nonatomic) NSString *last_message; // @synthesize last_message=_last_message;
- (void).cxx_destruct;

@end
