//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber;
@protocol Optional;

@interface KDHighlightStructModel : WDBaseModel
{
    NSNumber<Optional> *_start;
    NSNumber<Optional> *_end;
}

@property(retain, nonatomic) NSNumber<Optional> *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber<Optional> *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
