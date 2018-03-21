//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface KSCopyOnWriteObject : NSObject <NSCopying>
{
    id _backendObject;
    _Bool _needCopyOnWrite;
}

- (void).cxx_destruct;
- (id)backendObject;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBackendObject:(id)arg1 needCopyOnWrite:(_Bool)arg2;
- (id)initWithBackendObject:(id)arg1;
- (id)initWithBackendClass:(Class)arg1;

@end
