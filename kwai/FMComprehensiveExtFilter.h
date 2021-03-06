//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMComprehensiveFilter.h"

@interface FMComprehensiveExtFilter : FMComprehensiveFilter
{
    struct CGETriggerFilterInterface *_triggerFilter;
    float _triggerDs;
    float _triggerMost;
}

+ (id)comprehensiveExtFilterWithConfig:(id)arg1 intensity:(float)arg2 canvasSize:(struct CGSize)arg3 extType:(id)arg4;
- (void)setTriggerArg:(float)arg1:(float)arg2;
- (void)setExtType:(id)arg1;
- (void)processWithPCM16Data:(short *)arg1 bufferLen:(int)arg2;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;

@end

