//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCommonButtonModel.h"

@class WBCommonButtonStateResource;

@interface WBTimelineButtonFollowModel : WBCommonButtonModel
{
    WBCommonButtonStateResource *_beforClickRes;
    WBCommonButtonStateResource *_afterClickRes;
}

+ (id)buttonIdWithButtonDict:(id)arg1;
+ (id)modelTypeStrs;
@property(retain, nonatomic) WBCommonButtonStateResource *afterClickRes; // @synthesize afterClickRes=_afterClickRes;
@property(retain, nonatomic) WBCommonButtonStateResource *beforClickRes; // @synthesize beforClickRes=_beforClickRes;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (_Bool)updateWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (void)setValuesFromButtonModel:(id)arg1;

@end

