//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLBaseModel.h"

@class NSString, WBMLVideoUserInfoModel;

@interface WBMLVideoCheckLivingLiveInfoModel : WBMLBaseModel
{
    NSString *_user_text;
    NSString *_user_image;
    NSString *_user_name;
    NSString *_scheme;
    NSString *_status_text;
    NSString *_containerid;
    NSString *_object_id;
    NSString *_object_image;
    WBMLVideoUserInfoModel *_owner_info;
}

@property(retain, nonatomic) WBMLVideoUserInfoModel *owner_info; // @synthesize owner_info=_owner_info;
@property(copy, nonatomic) NSString *object_image; // @synthesize object_image=_object_image;
@property(copy, nonatomic) NSString *object_id; // @synthesize object_id=_object_id;
@property(copy, nonatomic) NSString *containerid; // @synthesize containerid=_containerid;
@property(copy, nonatomic) NSString *status_text; // @synthesize status_text=_status_text;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(copy, nonatomic) NSString *user_image; // @synthesize user_image=_user_image;
@property(copy, nonatomic) NSString *user_text; // @synthesize user_text=_user_text;
- (void).cxx_destruct;

@end

