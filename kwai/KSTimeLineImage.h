//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface KSTimeLineImage : NSObject
{
    UIImage *_image;
    CDStruct_1b6d18a9 _actualTime;
}

@property(nonatomic) CDStruct_1b6d18a9 actualTime; // @synthesize actualTime=_actualTime;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 actualTime:(CDStruct_1b6d18a9)arg2;

@end

