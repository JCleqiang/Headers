//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LOTKeyframeGroup, NSArray, NSString;

@interface LOTShapeStroke : NSObject
{
    _Bool _fillEnabled;
    NSString *_keyname;
    LOTKeyframeGroup *_color;
    LOTKeyframeGroup *_opacity;
    LOTKeyframeGroup *_width;
    LOTKeyframeGroup *_dashOffset;
    unsigned long long _capType;
    unsigned long long _joinType;
    NSArray *_lineDashPattern;
}

@property(readonly, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(readonly, nonatomic) unsigned long long joinType; // @synthesize joinType=_joinType;
@property(readonly, nonatomic) unsigned long long capType; // @synthesize capType=_capType;
@property(readonly, nonatomic) LOTKeyframeGroup *dashOffset; // @synthesize dashOffset=_dashOffset;
@property(readonly, nonatomic) LOTKeyframeGroup *width; // @synthesize width=_width;
@property(readonly, nonatomic) LOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTKeyframeGroup *color; // @synthesize color=_color;
@property(readonly, nonatomic) _Bool fillEnabled; // @synthesize fillEnabled=_fillEnabled;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
