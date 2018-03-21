//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface TWTRGCOAuth : NSObject
{
    NSString *signatureSecret;
    NSDictionary *OAuthParameters;
    NSDictionary *__parameters;
    NSString *__method;
    NSURL *__url;
}

+ (_Bool)isJSONRequest:(id)arg1;
+ (_Bool)isMultipartFormRequest:(id)arg1;
+ (id)hostAndPortForURL:(id)arg1;
+ (id)URLRequestForPath:(id)arg1 POSTParameters:(id)arg2 scheme:(id)arg3 host:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 accessToken:(id)arg7 tokenSecret:(id)arg8;
+ (id)URLRequestForPath:(id)arg1 POSTParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;
+ (id)URLRequestForPath:(id)arg1 DELETEParameters:(id)arg2 scheme:(id)arg3 host:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 accessToken:(id)arg7 tokenSecret:(id)arg8;
+ (id)URLRequestForPath:(id)arg1 DELETEParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;
+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 scheme:(id)arg3 host:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 accessToken:(id)arg7 tokenSecret:(id)arg8;
+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;
+ (id)URLRequestFromRequest:(id)arg1 consumerKey:(id)arg2 consumerSecret:(id)arg3 accessToken:(id)arg4 tokenSecret:(id)arg5;
+ (id)URLRequestForPath:(id)arg1 HTTPMethod:(id)arg2 parameters:(id)arg3 scheme:(id)arg4 host:(id)arg5 consumerKey:(id)arg6 consumerSecret:(id)arg7 accessToken:(id)arg8 tokenSecret:(id)arg9;
+ (id)queryStringFromParameters:(id)arg1;
+ (id)timeStamp;
+ (id)nonce;
+ (void)setHTTPShouldHandleCookies:(_Bool)arg1;
+ (void)setTimeStampOffset:(long long)arg1;
+ (void)setUserAgent:(id)arg1;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=__url;
@property(copy, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=__method;
@property(copy, nonatomic) NSDictionary *requestParameters; // @synthesize requestParameters=__parameters;
- (void).cxx_destruct;
- (id)signatureBase;
- (id)signature;
- (id)authorizationHeader;
- (id)request;
- (id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 accessToken:(id)arg3 tokenSecret:(id)arg4;

@end
