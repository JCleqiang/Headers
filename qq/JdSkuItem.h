//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface JdSkuItem : NSObject
{
    NSString *_detailUrl;
    NSString *_imageUrl;
    NSString *_skuId;
    NSString *_skuName;
    NSString *_skuPrice;
}

@property(retain, nonatomic) NSString *skuPrice; // @synthesize skuPrice=_skuPrice;
@property(retain, nonatomic) NSString *skuName; // @synthesize skuName=_skuName;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
- (void).cxx_destruct;
- (void)printLog;

@end
