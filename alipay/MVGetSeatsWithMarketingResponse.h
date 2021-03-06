//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVMtopBaseResponse.h"

@class MVEndorseDetailModel, MVHallModel, MVMarketingToolsModel, MVRefundDetailModel, MVScheduleModel, NSArray, NSString;

@interface MVGetSeatsWithMarketingResponse : MVMtopBaseResponse
{
    NSString *_checkReturnCode;
    NSString *_seatMapReturnCode;
    NSString *_marketingReturnCode;
    long long _allowedLockingSeatSize;
    long long _currentLockingSeatSize;
    long long _allowedPayingOrderSize;
    long long _currentPayingOrderSize;
    NSArray *_unPayOrders;
    NSArray *_seatsLocked;
    MVMarketingToolsModel *_marketingToolSolution;
    MVHallModel *_mtopSeatMap;
    NSString *_certMessage;
    NSString *_tipMessage;
    NSString *_noSmsTip;
    MVScheduleModel *_schedule;
    MVRefundDetailModel *_refundDetail;
    MVEndorseDetailModel *_endorseDetail;
    NSArray *_userCinemaMCardStatusList;
    NSString *_mcardTips;
}

+ (Class)userCinemaMCardStatusListElementClass;
+ (Class)seatsLockedElementClass;
+ (Class)unPayOrdersElementClass;
@property(copy, nonatomic) NSString *mcardTips; // @synthesize mcardTips=_mcardTips;
@property(retain, nonatomic) NSArray *userCinemaMCardStatusList; // @synthesize userCinemaMCardStatusList=_userCinemaMCardStatusList;
@property(retain, nonatomic) MVEndorseDetailModel *endorseDetail; // @synthesize endorseDetail=_endorseDetail;
@property(retain, nonatomic) MVRefundDetailModel *refundDetail; // @synthesize refundDetail=_refundDetail;
@property(retain, nonatomic) MVScheduleModel *schedule; // @synthesize schedule=_schedule;
@property(copy, nonatomic) NSString *noSmsTip; // @synthesize noSmsTip=_noSmsTip;
@property(copy, nonatomic) NSString *tipMessage; // @synthesize tipMessage=_tipMessage;
@property(copy, nonatomic) NSString *certMessage; // @synthesize certMessage=_certMessage;
@property(retain, nonatomic) MVHallModel *mtopSeatMap; // @synthesize mtopSeatMap=_mtopSeatMap;
@property(retain, nonatomic) MVMarketingToolsModel *marketingToolSolution; // @synthesize marketingToolSolution=_marketingToolSolution;
@property(retain, nonatomic) NSArray *seatsLocked; // @synthesize seatsLocked=_seatsLocked;
@property(retain, nonatomic) NSArray *unPayOrders; // @synthesize unPayOrders=_unPayOrders;
@property(nonatomic) long long currentPayingOrderSize; // @synthesize currentPayingOrderSize=_currentPayingOrderSize;
@property(nonatomic) long long allowedPayingOrderSize; // @synthesize allowedPayingOrderSize=_allowedPayingOrderSize;
@property(nonatomic) long long currentLockingSeatSize; // @synthesize currentLockingSeatSize=_currentLockingSeatSize;
@property(nonatomic) long long allowedLockingSeatSize; // @synthesize allowedLockingSeatSize=_allowedLockingSeatSize;
@property(copy, nonatomic) NSString *marketingReturnCode; // @synthesize marketingReturnCode=_marketingReturnCode;
@property(copy, nonatomic) NSString *seatMapReturnCode; // @synthesize seatMapReturnCode=_seatMapReturnCode;
@property(copy, nonatomic) NSString *checkReturnCode; // @synthesize checkReturnCode=_checkReturnCode;
- (void).cxx_destruct;
- (_Bool)isCheckReturnSuccess;
- (_Bool)isMarketingReturnSuccess;
- (_Bool)isSeatMapReturnSuccess;

@end

