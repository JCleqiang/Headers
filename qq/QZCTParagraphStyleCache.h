//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QZCTParagraphStyleCache : NSObject
{
    NSMutableDictionary *_cachedParagraphStyle;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (struct __CTParagraphStyle *)paragraphStyleWithTextAlignment:(unsigned char)arg1 LineBreakMode:(unsigned char)arg2 WritingDirection:(BOOL)arg3;
- (id)init;

@end

