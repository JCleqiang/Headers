//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;
@protocol CNPackageData;

@interface CNPackageDataList : TBJSONModel
{
    NSArray<CNPackageData> *_SIGN;
    NSArray<CNPackageData> *_UNSIGN;
}

@property(retain, nonatomic) NSArray<CNPackageData> *UNSIGN; // @synthesize UNSIGN=_UNSIGN;
@property(retain, nonatomic) NSArray<CNPackageData> *SIGN; // @synthesize SIGN=_SIGN;
- (void).cxx_destruct;

@end

