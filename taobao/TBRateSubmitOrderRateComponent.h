//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, TBRateDoRateMainOrderInfo;
@protocol TBRateDoRateSubOrderRateInfo;

@interface TBRateSubmitOrderRateComponent : TBJSONModel
{
    TBRateDoRateMainOrderInfo *_mainOrderRateInfo;
    NSMutableArray<TBRateDoRateSubOrderRateInfo> *_subOrderRateInfos;
}

+ (id)getObjectInternal:(id)arg1;
+ (id)getObjectData:(id)arg1;
+ (id)getJSON:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSMutableArray<TBRateDoRateSubOrderRateInfo> *subOrderRateInfos; // @synthesize subOrderRateInfos=_subOrderRateInfos;
@property(retain, nonatomic) TBRateDoRateMainOrderInfo *mainOrderRateInfo; // @synthesize mainOrderRateInfo=_mainOrderRateInfo;
- (void).cxx_destruct;
- (id)init;

@end
