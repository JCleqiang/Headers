//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOTAnimatableLayer.h"

@class LOTLayer, NSArray;

@interface LOTMaskLayer : LOTAnimatableLayer
{
    LOTLayer *_layer;
    NSArray *_maskLayers;
    NSArray *_masks;
}

@property(readonly, nonatomic) NSArray *masks; // @synthesize masks=_masks;
- (void).cxx_destruct;
- (void)_setupViewFromModel;
- (id)initWithMasks:(id)arg1 inLayer:(id)arg2;

@end
