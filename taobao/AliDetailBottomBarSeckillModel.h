//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBottomBarItemModel.h"

@class NSString;

@interface AliDetailBottomBarSeckillModel : AliDetailBottomBarItemModel
{
    _Bool _buyEnable;
    long long _quantity;
    NSString *_itemId;
    long long _startTime;
}

@property(nonatomic) _Bool buyEnable; // @synthesize buyEnable=_buyEnable;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end
