//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface ComicSectionPicInfoModel : NSObject
{
    NSString *_picUrl;
    NSString *_picId;
    int _width;
    int _height;
    int _index;
    NSNumber *_isGif;
    NSString *_imagePath;
    NSNumber *_needLoop;
    int _xo;
    NSArray *_storyBoardArray;
}

@property(retain, nonatomic) NSArray *storyBoardArray; // @synthesize storyBoardArray=_storyBoardArray;
@property(retain, nonatomic) NSString *picId; // @synthesize picId=_picId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)getStoryBoardArrayWithData:(id)arg1;

// Remaining properties
@property(nonatomic) int height; // @dynamic height;
@property(retain, nonatomic) NSString *imagePath; // @dynamic imagePath;
@property(nonatomic) int index; // @dynamic index;
@property(retain, nonatomic) NSNumber *isGif; // @dynamic isGif;
@property(retain, nonatomic) NSNumber *needLoop; // @dynamic needLoop;
@property(retain, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(nonatomic) int width; // @dynamic width;

@end
