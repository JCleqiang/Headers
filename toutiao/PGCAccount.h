//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface PGCAccount : NSObject <NSCoding>
{
    _Bool _liked;
    NSString *_screenName;
    NSString *_userDesc;
    NSString *_avatarURLString;
    NSString *_verifiedDesc;
    NSString *_shareURL;
    NSString *_mediaID;
    NSString *_userAuthInfo;
    NSString *_enterItemId;
}

@property(retain, nonatomic) NSString *enterItemId; // @synthesize enterItemId=_enterItemId;
@property(copy, nonatomic) NSString *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(nonatomic) _Bool liked; // @synthesize liked=_liked;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(copy, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(copy, nonatomic) NSString *verifiedDesc; // @synthesize verifiedDesc=_verifiedDesc;
@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(copy, nonatomic) NSString *userDesc; // @synthesize userDesc=_userDesc;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isLoginUser;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

