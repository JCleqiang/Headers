//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, UIColor;

@protocol KSLiveQuizSelectSheetDataItem <NSObject>
@property(readonly, nonatomic) _Bool canBeSelected;
@property(readonly, nonatomic) NSString *previewButtonTitle;
@property(readonly, nonatomic) _Bool previewButtonUserinterfaceEnabled;
@property(readonly, nonatomic) UIColor *previewButtonColor;
@property(readonly, nonatomic) UIColor *countColor;
@property(readonly, nonatomic) UIColor *descColor;
@property(readonly, nonatomic) UIColor *prizeColor;
@property(readonly, nonatomic) UIColor *titleColor;
@property(readonly, nonatomic) NSNumber *ksCoin;
@property(readonly, nonatomic) NSArray *questions;
@property(readonly, nonatomic) NSString *prizeInfo;
@property(readonly, nonatomic) NSString *countInfo;
@property(readonly, nonatomic) _Bool selected;
@property(readonly, nonatomic) NSString *desc;
@property(readonly, nonatomic) NSString *title;
@end

