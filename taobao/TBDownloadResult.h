//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString, NSURLResponse;

@interface TBDownloadResult : NSObject
{
    NSString *_destination;
    NSError *_error;
    NSURLResponse *_response;
    NSDictionary *_customDict;
}

@property(readonly, nonatomic) NSDictionary *customDict; // @synthesize customDict=_customDict;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (void)setCustomDict:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setError:(id)arg1;

@end
