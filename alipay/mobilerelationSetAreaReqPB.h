//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface mobilerelationSetAreaReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *area; // @dynamic area;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(readonly) _Bool hasArea; // @dynamic hasArea;
@property(readonly) _Bool hasCountry; // @dynamic hasCountry;
@property(readonly) _Bool hasProvince; // @dynamic hasProvince;
@property(retain, nonatomic) NSString *province; // @dynamic province;

@end
