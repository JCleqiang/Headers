//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCRBaseRespVO.h"

@class CCRRepaymentResultRecommendRespVO, NSString;

@interface CCRGetRepaymentResultRespVO : CCRBaseRespVO
{
    NSString *_billStatus;
    NSString *_repayStatus;
    NSString *_createTime;
    NSString *_payTime;
    NSString *_arriveTime;
    NSString *_arriveTimeDesc;
    NSString *_failureReason;
    NSString *_remindDay;
    NSString *_remindStatus;
    NSString *_repayAmount;
    NSString *_ebankTips;
    CCRRepaymentResultRecommendRespVO *_recommendInfo;
}

@property(retain, nonatomic) CCRRepaymentResultRecommendRespVO *recommendInfo; // @synthesize recommendInfo=_recommendInfo;
@property(retain, nonatomic) NSString *ebankTips; // @synthesize ebankTips=_ebankTips;
@property(retain, nonatomic) NSString *repayAmount; // @synthesize repayAmount=_repayAmount;
@property(retain, nonatomic) NSString *remindStatus; // @synthesize remindStatus=_remindStatus;
@property(retain, nonatomic) NSString *remindDay; // @synthesize remindDay=_remindDay;
@property(retain, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(retain, nonatomic) NSString *arriveTimeDesc; // @synthesize arriveTimeDesc=_arriveTimeDesc;
@property(retain, nonatomic) NSString *arriveTime; // @synthesize arriveTime=_arriveTime;
@property(retain, nonatomic) NSString *payTime; // @synthesize payTime=_payTime;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *repayStatus; // @synthesize repayStatus=_repayStatus;
@property(retain, nonatomic) NSString *billStatus; // @synthesize billStatus=_billStatus;
- (void).cxx_destruct;

@end

