//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBarrage.h"

@class KSLiveCommentsComboMessage, NSAttributedString, NSString;

@interface KSLiveComboBarrage : KSBarrage
{
    struct CGSize _size;
    NSString *_feedChangedToken;
    NSAttributedString *_comboCount;
    KSLiveCommentsComboMessage *_comboMessage;
}

@property(retain, nonatomic) KSLiveCommentsComboMessage *comboMessage; // @synthesize comboMessage=_comboMessage;
@property(retain, nonatomic) NSAttributedString *comboCount; // @synthesize comboCount=_comboCount;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)size;
- (void)calcSize;
- (void)setContent:(id)arg1;
- (void)dealloc;

@end
