//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLURLRequest.h"

@class NSString;

@interface WBNLUploadPixelInfoRequest : WBNLURLRequest
{
    NSString *_uid;
    NSString *_object_id;
    NSString *_image;
    NSString *_result;
}

@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *object_id; // @synthesize object_id=_object_id;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)path;
- (id)parseResponseData:(id)arg1;

@end

