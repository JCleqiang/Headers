//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@interface CIndicatorDMIDataPara : NSObject <NSCoding>
{
    CDStruct_2b56ed6f _pdi;
    CDStruct_2b56ed6f _mdi;
    CDStruct_2b56ed6f _adx;
    CDStruct_2b56ed6f _adxr;
    CDStruct_1ed7117a _date;
}

@property(nonatomic) CDStruct_2b56ed6f adxr; // @synthesize adxr=_adxr;
@property(nonatomic) CDStruct_2b56ed6f adx; // @synthesize adx=_adx;
@property(nonatomic) CDStruct_2b56ed6f mdi; // @synthesize mdi=_mdi;
@property(nonatomic) CDStruct_2b56ed6f pdi; // @synthesize pdi=_pdi;
@property(nonatomic) CDStruct_1ed7117a date; // @synthesize date=_date;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
