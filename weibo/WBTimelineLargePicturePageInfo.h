//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelinePageInfo.h"

@class NSArray, NSString;

@interface WBTimelineLargePicturePageInfo : WBTimelinePageInfo
{
    NSString *_picLeftTitle;
    NSString *_picRightTitle;
    NSArray *_animationPictures;
}

@property(retain, nonatomic) NSArray *animationPictures; // @synthesize animationPictures=_animationPictures;
@property(copy, nonatomic) NSString *picRightTitle; // @synthesize picRightTitle=_picRightTitle;
@property(copy, nonatomic) NSString *picLeftTitle; // @synthesize picLeftTitle=_picLeftTitle;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)dealloc;

@end

