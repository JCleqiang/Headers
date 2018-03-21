//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppsFlyerUtils : NSObject
{
}

+ (id)getOneLinkPath:(id)arg1;
+ (_Bool)isValidDeeplink:(id)arg1;
+ (_Bool)isJailBreakon;
+ (id)getDateFormatterForRemoteDebug;
+ (id)getDateFormatter;
+ (_Bool)isICloudServiceEnabled;
+ (id)develomentPlatformName;
+ (id)md5:(id)arg1;
+ (id)sha256:(id)arg1;
+ (id)sha1:(id)arg1;
+ (id)URLQueryParameters:(id)arg1;
+ (void)logRequestContent:(long long)arg1 url:(id)arg2 body:(id)arg3;
+ (id)getJsonDataFromDictionary:(id)arg1;
+ (id)getJsonStringFromDictionary:(id)arg1;
+ (id)getStoreReceipt;
+ (id)base64forData:(id)arg1;
+ (unsigned int)getUTF8Length:(id)arg1;
+ (id)toHexString:(char *)arg1 length:(unsigned int)arg2;
+ (void)recursivelyRemoveNulls:(id)arg1;
+ (void)recursivelyRemoveNullsFromArray:(id)arg1;

@end
