//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBMeasureMSOAData : TBJSONModel
{
    NSString *_msoaToken;
    NSString *_msoaData;
}

@property(retain, nonatomic) NSString *msoaData; // @synthesize msoaData=_msoaData;
@property(retain, nonatomic) NSString *msoaToken; // @synthesize msoaToken=_msoaToken;
- (void).cxx_destruct;
- (id)initWithToken:(id)arg1 data:(id)arg2;

@end

