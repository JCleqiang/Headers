//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NBSLensUITrackerSegue : NSObject
{
    id _sourceViewController;
    id _destinationViewController;
    NSString *_identifier;
}

+ (void)install;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id destinationViewController; // @synthesize destinationViewController=_destinationViewController;
@property(readonly, nonatomic) id sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (void).cxx_destruct;
- (id)nbs_initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)nbs_perform;

@end
