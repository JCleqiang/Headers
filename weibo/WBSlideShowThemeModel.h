//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WBSlideShowThemeExt;

@interface WBSlideShowThemeModel : NSObject
{
    unsigned long long _themeType;
    NSString *_title;
    NSString *_imageName;
    NSString *_resourceUrl;
    double _downloadProgress;
    unsigned long long _resourceStatus;
    WBSlideShowThemeExt *_ext;
}

@property(retain, nonatomic) WBSlideShowThemeExt *ext; // @synthesize ext=_ext;
@property(nonatomic) unsigned long long resourceStatus; // @synthesize resourceStatus=_resourceStatus;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long themeType; // @synthesize themeType=_themeType;
- (void).cxx_destruct;
- (id)init;

@end

