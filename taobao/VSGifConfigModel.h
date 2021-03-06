//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface VSGifConfigModel : NSObject
{
    NSString *_imagePrefix;
    NSString *_name;
    NSString *_subGifName;
    long long _frameCount;
    long long _refreshStep;
    long long _gifType;
    long long _actionType;
    NSURL *_videoUrl;
    struct CGSize _gifSize;
    struct CGRect _scaledFrame;
}

@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) long long gifType; // @synthesize gifType=_gifType;
@property(nonatomic) long long refreshStep; // @synthesize refreshStep=_refreshStep;
@property(nonatomic) struct CGRect scaledFrame; // @synthesize scaledFrame=_scaledFrame;
@property(nonatomic) struct CGSize gifSize; // @synthesize gifSize=_gifSize;
@property(nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) NSString *subGifName; // @synthesize subGifName=_subGifName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *imagePrefix; // @synthesize imagePrefix=_imagePrefix;
- (void).cxx_destruct;

@end

