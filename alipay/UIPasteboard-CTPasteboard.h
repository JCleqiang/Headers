//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPasteboard.h>

@interface UIPasteboard (CTPasteboard)
+ (id)ctPasteboard;
- (id)sysPhoto;
- (id)ctMessageForType:(id)arg1;
- (void)setCTMessage:(id)arg1 forPasteType:(id)arg2;
- (_Bool)copyCTMessage:(id)arg1;
- (_Bool)containsMessageImageTypes:(id)arg1;
- (_Bool)containsSysPhotoTypes:(id)arg1;
- (id)currentCTPasteItem;
- (id)currentCTPasteType;
- (_Bool)canCTPasteFirstItem;
- (id)ctPasteTypes;
@end
