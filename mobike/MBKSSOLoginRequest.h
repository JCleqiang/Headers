//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSNumber, NSString;

@interface MBKSSOLoginRequest : MBKMobikeRequest
{
    NSString *_source;
    NSString *_unionId;
    NSString *_openId;
    NSString *_nickName;
    NSString *_avatar;
    NSNumber *_expTime;
    double _latitude;
    double _longitude;
}

@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSNumber *expTime; // @synthesize expTime=_expTime;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *unionId; // @synthesize unionId=_unionId;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)configureRequestWithData:(id)arg1;
- (id)init;

@end
