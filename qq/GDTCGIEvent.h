//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface GDTCGIEvent : NSObject
{
    _Bool _is_gdtfeed;
    _Bool _is_supportPreLoadAppStore;
    NSString *_acttype;
    unsigned long long _position;
    NSString *_feeds_attachment;
    NSString *_shareInfo;
    NSDictionary *_recomm_cookie;
    NSString *_dontGoBackWhenClickLeftButton;
    id _feedmodel;
}

@property(copy, nonatomic) id feedmodel; // @synthesize feedmodel=_feedmodel;
@property(nonatomic) _Bool is_supportPreLoadAppStore; // @synthesize is_supportPreLoadAppStore=_is_supportPreLoadAppStore;
@property(nonatomic) _Bool is_gdtfeed; // @synthesize is_gdtfeed=_is_gdtfeed;
@property(copy, nonatomic) NSString *dontGoBackWhenClickLeftButton; // @synthesize dontGoBackWhenClickLeftButton=_dontGoBackWhenClickLeftButton;
@property(retain, nonatomic) NSDictionary *recomm_cookie; // @synthesize recomm_cookie=_recomm_cookie;
@property(copy, nonatomic) NSString *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString *feeds_attachment; // @synthesize feeds_attachment=_feeds_attachment;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) NSString *acttype; // @synthesize acttype=_acttype;
- (void).cxx_destruct;

@end
