//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class BaseInfoModel, NSArray, NSDictionary, NSString;

@protocol ListSyncDelegate <NSObject>

@optional
- (void)Callback_GetCollection2Group:(int)arg1 ErrorType:(int)arg2 userInfo:(NSDictionary *)arg3;
- (void)Callback_ModCollection2Group:(int)arg1 ErrorType:(int)arg2 userInfo:(NSDictionary *)arg3;
- (void)Callback_GetCustomGroup:(int)arg1 ErrorType:(int)arg2 userInfo:(NSDictionary *)arg3;
- (void)Callback_DelCustomGroup:(int)arg1 ErrorType:(int)arg2 userInfo:(NSDictionary *)arg3;
- (void)Callback_ModCustomGroup:(int)arg1 ErrorType:(int)arg2 userInfo:(NSDictionary *)arg3;
- (void)Callback_AddCustomGroup:(int)arg1 ErrorType:(int)arg2 userInfo:(NSDictionary *)arg3;
- (void)Callback_ModifyFav:(int)arg1 errorType:(int)arg2 model:(BaseInfoModel *)arg3 userInfo:(NSDictionary *)arg4;
- (void)Callback_GetSummary:(int)arg1 ErrorType:(int)arg2 favList:(NSArray *)arg3;
- (void)Callback_GetCompatibleHtmlInfo:(int)arg1 ErrorType:(int)arg2 Cid:(NSString *)arg3 HtmlContent:(NSString *)arg4 ResourceList:(NSArray *)arg5;
- (void)Callback_GetShareUrl:(int)arg1 ErrorType:(int)arg2 Cid:(NSString *)arg3 Url:(NSString *)arg4;
- (void)Callback_DelFav:(int)arg1 ErrorType:(int)arg2 CId:(NSString *)arg3;
- (void)Callback_AddFav:(int)arg1 errorType:(int)arg2 model:(BaseInfoModel *)arg3 userInfo:(NSDictionary *)arg4;
- (void)Callback_DetailFetch:(int)arg1 ErrorType:(int)arg2 model:(BaseInfoModel *)arg3;
- (void)Callback_ListFetchDescending:(int)arg1 ErrorType:(int)arg2 addList:(NSArray *)arg3 delList:(NSArray *)arg4;
- (void)Callback_ListFetch:(int)arg1 ErrorType:(int)arg2 addList:(NSArray *)arg3 delList:(NSArray *)arg4;
@end

