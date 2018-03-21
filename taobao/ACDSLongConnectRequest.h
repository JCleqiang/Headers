//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface ACDSLongConnectRequest : NSObject
{
    float _timeout;
    NSData *_data;
    NSString *_routeId;
    NSString *_userId;
    NSString *_flag;
    NSString *_unitInfo;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *unitInfo; // @synthesize unitInfo=_unitInfo;
@property(nonatomic) float timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *routeId; // @synthesize routeId=_routeId;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end
