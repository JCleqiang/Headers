//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>

@class NSString;

@interface HotPicThirdPartyInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_appid;
    NSString *_iconDownloadURL;
    NSString *_name;
    NSString *_jumpUrl;
}

@property(copy) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *iconDownloadURL; // @synthesize iconDownloadURL=_iconDownloadURL;
@property(copy) NSString *appid; // @synthesize appid=_appid;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
