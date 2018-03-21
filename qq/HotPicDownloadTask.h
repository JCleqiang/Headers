//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HotPicInfo;

@interface HotPicDownloadTask : NSObject
{
    _Bool _bThumb;
    _Bool _bPredownload;
    HotPicInfo *_picInfo;
    unsigned long long _picTag;
    double _time;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) _Bool bPredownload; // @synthesize bPredownload=_bPredownload;
@property(nonatomic) _Bool bThumb; // @synthesize bThumb=_bThumb;
@property(nonatomic) unsigned long long picTag; // @synthesize picTag=_picTag;
@property(retain, nonatomic) HotPicInfo *picInfo; // @synthesize picInfo=_picInfo;
- (_Bool)isEqualToTask:(id)arg1;
- (_Bool)comparePriority:(id)arg1;
- (void)dealloc;
- (id)initWithPicInfo:(id)arg1 picTag:(unsigned long long)arg2 isThumb:(_Bool)arg3 isPredownload:(_Bool)arg4;

@end
