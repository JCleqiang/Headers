//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBVideoSetting : NSObject
{
    NSString *_bizCode;
    double _minRecordDuration;
    double _maxRecordDuration;
    double _maxImportDuration;
    double _minImportDuration;
}

@property(nonatomic) double minImportDuration; // @synthesize minImportDuration=_minImportDuration;
@property(nonatomic) double maxImportDuration; // @synthesize maxImportDuration=_maxImportDuration;
@property(nonatomic) double maxRecordDuration; // @synthesize maxRecordDuration=_maxRecordDuration;
@property(nonatomic) double minRecordDuration; // @synthesize minRecordDuration=_minRecordDuration;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
- (void).cxx_destruct;
- (id)init;

@end

