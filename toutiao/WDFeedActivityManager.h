//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIImage;

@interface WDFeedActivityManager : NSObject
{
    UIImage *_image;
    NSDictionary *_activityData;
}

+ (id)fileDirectry;
+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *activityData; // @synthesize activityData=_activityData;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (double)endTime;
- (double)startTime;
- (id)imageUrl;
@property(readonly, copy, nonatomic) NSString *openURL;
- (long long)currentVersion;
- (_Bool)isDataValid:(id)arg1;
- (void)downloadImageIfNeededWithUrl:(id)arg1;
- (void)replaceActivityDataWithDict:(id)arg1;
- (void)setCurrentVersionHasClosed:(_Bool)arg1;
- (_Bool)isCurrentVersionHasClosed;
- (void)setCurrentVersionHasShown:(_Bool)arg1;
- (_Bool)isCurrentVersionHasShown;
- (_Bool)isValidDate;
- (void)refreshActivityWithDict:(id)arg1;
- (id)init;

@end

