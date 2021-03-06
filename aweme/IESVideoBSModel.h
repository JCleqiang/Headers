//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "IESVideoBSModelProtocol-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface IESVideoBSModel : MTLModel <MTLJSONSerializing, IESVideoBSModelProtocol>
{
    NSString *_gearName;
    NSNumber *_qualityType;
    NSNumber *_bitrate;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *bitrate; // @synthesize bitrate=_bitrate;
@property(retain, nonatomic) NSNumber *qualityType; // @synthesize qualityType=_qualityType;
@property(copy, nonatomic) NSString *gearName; // @synthesize gearName=_gearName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

