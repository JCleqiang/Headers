//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBSDKMTOPEnvConfig : NSObject
{
    _Bool _useSecurityGuard;
    int _environment;
    NSString *_appkey;
    NSString *_appSecret;
    NSString *_gatewayDomain;
    NSString *_customMtopRequestURL;
}

+ (id)urlEncodeString:(id)arg1;
+ (id)shareInstance;
+ (void)initialize;
@property(retain, nonatomic) NSString *customMtopRequestURL; // @synthesize customMtopRequestURL=_customMtopRequestURL;
@property(retain, nonatomic) NSString *gatewayDomain; // @synthesize gatewayDomain=_gatewayDomain;
@property(nonatomic) int environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool useSecurityGuard; // @synthesize useSecurityGuard=_useSecurityGuard;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;
- (id)init;

@end
