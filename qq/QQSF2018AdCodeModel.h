//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSF2018BaseModel.h>

@class NSString;

@interface QQSF2018AdCodeModel : QQSF2018BaseModel
{
    long long _adCode;
    NSString *_name;
    long long _delayTime1;
    long long _delayTime2;
}

@property(nonatomic) long long delayTime2; // @synthesize delayTime2=_delayTime2;
@property(nonatomic) long long delayTime1; // @synthesize delayTime1=_delayTime1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long adCode; // @synthesize adCode=_adCode;
- (void).cxx_destruct;
- (_Bool)parseDataFromDictionary:(id)arg1;

@end

