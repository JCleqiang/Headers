//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKPOIAnnotaion.h"

@class MBKMPLPointAnnotationView, NSMutableDictionary;

@interface MBKMPLPointAnnotation : MBKPOIAnnotaion
{
    _Bool _isNearest;
    _Bool _isAutoClicked;
    _Bool _isParkingMode;
    int _distaceToLocation;
    MBKMPLPointAnnotationView *_view;
    NSMutableDictionary *_paramsDictionary;
    unsigned long long _userInOrOut;
}

@property(nonatomic) _Bool isParkingMode; // @synthesize isParkingMode=_isParkingMode;
@property(nonatomic) unsigned long long userInOrOut; // @synthesize userInOrOut=_userInOrOut;
@property(nonatomic) _Bool isAutoClicked; // @synthesize isAutoClicked=_isAutoClicked;
@property(nonatomic) int distaceToLocation; // @synthesize distaceToLocation=_distaceToLocation;
@property(nonatomic) _Bool isNearest; // @synthesize isNearest=_isNearest;
@property(retain, nonatomic) NSMutableDictionary *paramsDictionary; // @synthesize paramsDictionary=_paramsDictionary;
@property(nonatomic) __weak MBKMPLPointAnnotationView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)initWith:(id)arg1;

@end
