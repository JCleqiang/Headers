//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSVectorMapResources, GMSVectorMapSharedResources;

@interface GMSGLTileResources : NSObject
{
    GMSVectorMapSharedResources *_sharedResources;
    GMSVectorMapResources *_resources;
}

@property(readonly, nonatomic) GMSVectorMapResources *resources; // @synthesize resources=_resources;
@property(readonly, nonatomic) GMSVectorMapSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
- (void).cxx_destruct;
- (id)initWithSharedResources:(id)arg1 resources:(id)arg2;
- (id)init;

@end
