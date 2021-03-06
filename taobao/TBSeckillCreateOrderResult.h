//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSeckillCreateOrderResult : TBJSONModel
{
    NSString *_bizOrderId;
    NSString *_alipayOrderId;
    NSString *_buyerNumId;
    NSString *_nextUrl;
    NSString *_secrityPay;
    NSString *_time;
    NSString *_orderKey;
    NSString *_simplePay;
    NSString *_signStr;
    NSString *_backUrl;
    NSString *_unSuccessUrl;
}

@property(retain, nonatomic) NSString *unSuccessUrl; // @synthesize unSuccessUrl=_unSuccessUrl;
@property(retain, nonatomic) NSString *backUrl; // @synthesize backUrl=_backUrl;
@property(retain, nonatomic) NSString *signStr; // @synthesize signStr=_signStr;
@property(retain, nonatomic) NSString *simplePay; // @synthesize simplePay=_simplePay;
@property(retain, nonatomic) NSString *orderKey; // @synthesize orderKey=_orderKey;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *secrityPay; // @synthesize secrityPay=_secrityPay;
@property(retain, nonatomic) NSString *nextUrl; // @synthesize nextUrl=_nextUrl;
@property(retain, nonatomic) NSString *buyerNumId; // @synthesize buyerNumId=_buyerNumId;
@property(retain, nonatomic) NSString *alipayOrderId; // @synthesize alipayOrderId=_alipayOrderId;
@property(retain, nonatomic) NSString *bizOrderId; // @synthesize bizOrderId=_bizOrderId;
- (void).cxx_destruct;
- (_Bool)isSimplePay;
- (_Bool)isSecrityPaySelected;
- (id)alipayOrderIdArray;
- (_Bool)isSecrityPay;

@end

