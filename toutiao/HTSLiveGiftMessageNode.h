//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HTSLiveCocosUser, NSNumber, NSString;

@interface HTSLiveGiftMessageNode : NSObject
{
    _Bool _isSendToAnchor;
    _Bool _isNormalGift;
    _Bool _end;
    NSNumber *_messageID;
    NSNumber *_giftID;
    NSNumber *_roomID;
    NSNumber *_ticketCount;
    NSNumber *_repeatCount;
    NSString *_describe;
    NSString *_imageUrl;
    NSString *_endDes;
    NSString *_userStr;
    HTSLiveCocosUser *_user;
    HTSLiveCocosUser *_toUser;
}

@property(retain, nonatomic) HTSLiveCocosUser *toUser; // @synthesize toUser=_toUser;
@property(retain, nonatomic) HTSLiveCocosUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *userStr; // @synthesize userStr=_userStr;
@property(copy, nonatomic) NSString *endDes; // @synthesize endDes=_endDes;
@property(nonatomic) _Bool end; // @synthesize end=_end;
@property(nonatomic) _Bool isNormalGift; // @synthesize isNormalGift=_isNormalGift;
@property(nonatomic) _Bool isSendToAnchor; // @synthesize isSendToAnchor=_isSendToAnchor;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *describe; // @synthesize describe=_describe;
@property(retain, nonatomic) NSNumber *repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) NSNumber *ticketCount; // @synthesize ticketCount=_ticketCount;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSNumber *giftID; // @synthesize giftID=_giftID;
@property(retain, nonatomic) NSNumber *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;

@end

