//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GetFacePersonInfoService : NSObject
{
}

+ (id)shareInstance;
- (id)decodeStructuredXMLMessageBuffer:(const basic_string_075b6133 *)arg1;
- (id)parserFaceScorePersonInfoRsp:(const void *)arg1 len:(int)arg2;
- (void *)getFacePersonInfoReq:(id)arg1 tinyId:(unsigned long long)arg2 isSuperLove:(int)arg3;

@end
