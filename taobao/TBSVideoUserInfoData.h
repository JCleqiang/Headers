//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBSVideoUserInfoData : NSObject
{
    _Bool _bMarked;
    NSString *_nick;
    NSString *_title;
    NSString *_iconUrl;
    NSString *_userID;
    NSString *_accountId;
    NSString *_shopUrl;
    NSString *_mediaId;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool bMarked; // @synthesize bMarked=_bMarked;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) NSString *shopUrl; // @synthesize shopUrl=_shopUrl;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (void).cxx_destruct;
- (_Bool)isInvaildUserInfo;
- (void)updateWithTalentData:(id)arg1;
- (void)updateWithShopData:(id)arg1;

@end

