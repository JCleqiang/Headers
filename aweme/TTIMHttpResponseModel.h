//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary, NSNumber;

@interface TTIMHttpResponseModel : JSONModel
{
    NSDictionary *_result;
    NSNumber *_cmd;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSNumber *cmd; // @synthesize cmd=_cmd;
@property(copy, nonatomic) NSDictionary *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

