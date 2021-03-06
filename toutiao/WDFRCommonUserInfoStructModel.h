//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDFRCommonUserInfoStructModel : JSONModel
{
    NSNumber *_user_id;
    NSString<Optional> *_name;
    NSString<Optional> *_desc;
    NSString<Optional> *_schema;
    NSString<Optional> *_avatar_url;
    NSString<Optional> *_user_auth_info;
    NSString<Optional> *_user_decoration;
}

@property(retain, nonatomic) NSString<Optional> *user_decoration; // @synthesize user_decoration=_user_decoration;
@property(retain, nonatomic) NSString<Optional> *user_auth_info; // @synthesize user_auth_info=_user_auth_info;
@property(retain, nonatomic) NSString<Optional> *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;

@end

