//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSString;

@interface TTPersonalHomeRecommendFollowRequestModel : TTRequestModel
{
    NSString *_to_user_id;
    NSString *_page;
}

@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *to_user_id; // @synthesize to_user_id=_to_user_id;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

