//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol IWXLoginService;

@protocol WXLoginDelegate <NSObject>

@optional
- (void)loginBiz:(id <IWXLoginService>)arg1 didNeedForceUpdateToVersion:(NSString *)arg2 withErrorMsg:(NSString *)arg3;
- (void)loginBiz:(id <IWXLoginService>)arg1 didAutoLoginFailedWithErrorMsg:(NSString *)arg2 errCode:(long long)arg3;
- (void)loginBizDidLoginTimeout:(id <IWXLoginService>)arg1;
- (void)loginBiz:(id <IWXLoginService>)arg1 didLoginFailedWithErrorMsg:(NSString *)arg2 errCode:(long long)arg3;
- (void)loginBizDidLoginSuccess:(id <IWXLoginService>)arg1;
@end
