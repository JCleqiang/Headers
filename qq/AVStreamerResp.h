//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVStreamerResp : NSObject
{
    unsigned int _recordTaskId;
    unsigned long long _channelID;
    NSArray *_urls;
}

@property(nonatomic) unsigned int recordTaskId; // @synthesize recordTaskId=_recordTaskId;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(nonatomic) unsigned long long channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;

@end
