//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBShopUtil : NSObject
{
}

+ (unsigned int)hexStrToInt:(id)arg1;
+ (id)trimmedString:(id)arg1;
+ (id)formatStringForNumber:(long long)arg1;
+ (id)roundDownStringForNumber:(double)arg1 afterPoint:(long long)arg2;
+ (_Bool)isShopBizSpecialErrorWithCode:(id)arg1;
+ (id)createFeaturesForContext:(id)arg1;
+ (id)createWeAppConfigFotContext:(id)arg1;
+ (id)createWeexConfigFotContext:(id)arg1;
+ (id)mergeQuery:(id)arg1 targetQuery:(id)arg2;
+ (id)removeQuery:(id)arg1 fromNSURL:(id)arg2;
+ (id)addQuery:(id)arg1 forNSURL:(id)arg2;
+ (id)mergeNSURL:(id)arg1 targetURL:(id)arg2;
+ (id)urlAddedSchemaForUrl:(id)arg1;
+ (id)creatorNSURL:(id)arg1 host:(id)arg2 path:(id)arg3 query:(id)arg4 fragment:(id)arg5;
+ (id)creatorStrURL:(id)arg1 host:(id)arg2 path:(id)arg3 query:(id)arg4 fragment:(id)arg5;
+ (void)bindBtnViewModel:(id)arg1 forButton:(id)arg2;
+ (void)bindImageViewModel:(id)arg1 forImageView:(id)arg2;
+ (id)findMainScrollerViewInView:(id)arg1;
+ (_Bool)isCoveredOverHalfView:(id)arg1 inContainer:(id)arg2;
+ (long long)timeStamp;
+ (void)commitStatForModule:(id)arg1 point:(id)arg2 dimension:(id)arg3 measure:(id)arg4;

@end
