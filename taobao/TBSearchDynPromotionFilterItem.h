//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchJSONModel.h"

@class NSDictionary, NSString;

@interface TBSearchDynPromotionFilterItem : TBSearchJSONModel
{
    NSString *_paramKey;
    NSString *_paramValue;
    NSDictionary *_normal;
    NSDictionary *_selected;
    NSDictionary *_processedNormalData;
    NSDictionary *_processedSelectedData;
    NSString *_status;
    NSString *_trace;
}

@property(retain, nonatomic) NSString *trace; // @synthesize trace=_trace;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSDictionary *processedSelectedData; // @synthesize processedSelectedData=_processedSelectedData;
@property(retain, nonatomic) NSDictionary *processedNormalData; // @synthesize processedNormalData=_processedNormalData;
@property(retain, nonatomic) NSDictionary *selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSDictionary *normal; // @synthesize normal=_normal;
@property(retain, nonatomic) NSString *paramValue; // @synthesize paramValue=_paramValue;
@property(retain, nonatomic) NSString *paramKey; // @synthesize paramKey=_paramKey;
- (void).cxx_destruct;
- (void)parseData;
- (id)getItemData:(id)arg1;
- (id)getProcessData:(id)arg1;

@end

