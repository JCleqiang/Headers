//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JVSLayer-Protocol.h"

@protocol JVSSinkLayer <JVSLayer>
@property(readonly, nonatomic) struct jvsdimension inputs;
@property(readonly, nonatomic) int inputSize;
- (void)consume:(const void *)arg1;
@end

