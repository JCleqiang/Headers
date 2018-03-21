//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSArray, NSDictionary, NSString, O2OLocationCityInfo;

@interface GO2OHomePageResponse : GO2OServiceObject
{
    _Bool _success;
    _Bool _cityOpen;
    NSString *_resultCode;
    NSString *_desc;
    NSString *_templateType;
    NSArray *_blocks;
    NSDictionary *_blockTemplates;
    O2OLocationCityInfo *_cityInfo;
    NSString *_activityJumpAddress;
    NSString *_safeTips;
}

@property(retain, nonatomic) NSString *safeTips; // @synthesize safeTips=_safeTips;
@property(retain, nonatomic) NSString *activityJumpAddress; // @synthesize activityJumpAddress=_activityJumpAddress;
@property(retain, nonatomic) O2OLocationCityInfo *cityInfo; // @synthesize cityInfo=_cityInfo;
@property(nonatomic) _Bool cityOpen; // @synthesize cityOpen=_cityOpen;
@property(retain, nonatomic) NSDictionary *blockTemplates; // @synthesize blockTemplates=_blockTemplates;
@property(retain, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
