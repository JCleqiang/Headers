//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBFavoriteNewContentService : NSObject
{
}

+ (id)dictionaryFromQueryComponents:(id)arg1;
+ (id)sortParamsForURLString:(id)arg1;
+ (long long)hashCode:(id)arg1;
+ (id)getURLParamBlacklistConfigFromOrange;
+ (_Bool)validateUrl:(id)arg1;
+ (long long)generateFeedIdByURLString:(id)arg1;
+ (void)removeConentFavWithBizId:(unsigned long long)arg1 feedId:(unsigned long long)arg2 contentUrl:(id)arg3 block:(CDUnknownBlockType)arg4 needShowToast:(_Bool)arg5;
+ (void)isConentFavWithBizId:(unsigned long long)arg1 feedId:(unsigned long long)arg2 contentUrl:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (void)addConentFavWithBizId:(unsigned long long)arg1 feedId:(unsigned long long)arg2 title:(id)arg3 summary:(id)arg4 imgUrl:(id)arg5 contentUrl:(id)arg6 block:(CDUnknownBlockType)arg7 needShowToast:(_Bool)arg8;

@end
