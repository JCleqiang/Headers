//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSMemoryFriendlyMP4Frames : NSObject
{
    NSArray *_videoFrames;
    NSString *_mp4FileName;
}

@property(retain, nonatomic) NSString *mp4FileName; // @synthesize mp4FileName=_mp4FileName;
@property(retain, nonatomic) NSArray *videoFrames; // @synthesize videoFrames=_videoFrames;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)frames;
- (void)dealloc;
- (id)initWithMP4FileName:(id)arg1;

@end

