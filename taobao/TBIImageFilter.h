//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface TBIImageFilter : NSObject
{
    int filterType;
    NSString *filterName;
    UIImage *thumbnail;
}

@property(nonatomic) int filterType; // @synthesize filterType;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail;
@property(retain, nonatomic) NSString *filterName; // @synthesize filterName;
- (void).cxx_destruct;

@end
