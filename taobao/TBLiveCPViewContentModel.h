//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBLiveCPViewContentDataModel;

@interface TBLiveCPViewContentModel : TBJSONModel
{
    NSString *_type;
    TBLiveCPViewContentDataModel *_data;
}

@property(retain, nonatomic) TBLiveCPViewContentDataModel *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
