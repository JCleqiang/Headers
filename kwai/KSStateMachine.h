//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSState, NSDictionary, NSSet;
@protocol KSStateMachineDelegate;

@interface KSStateMachine : NSObject
{
    _Bool _isSelfLoopAlwaysAllowed;
    _Bool _shouldFailSilentlyWhenTransitionFailed;
    NSSet *_allStates;
    id <KSStateMachineDelegate> _delegate;
    KSState *_currentState;
    NSDictionary *_validTransitions;
}

@property(copy, nonatomic) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;
@property(retain, nonatomic) KSState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <KSStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldFailSilentlyWhenTransitionFailed; // @synthesize shouldFailSilentlyWhenTransitionFailed=_shouldFailSilentlyWhenTransitionFailed;
@property(nonatomic) _Bool isSelfLoopAlwaysAllowed; // @synthesize isSelfLoopAlwaysAllowed=_isSelfLoopAlwaysAllowed;
@property(copy, nonatomic) NSSet *allStates; // @synthesize allStates=_allStates;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_isTransitionValidFrom:(id)arg1 to:(id)arg2;
- (_Bool)canTransitionIntoState:(id)arg1;
- (id)initWithValidTransitions:(id)arg1 initalState:(id)arg2;

@end

