//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@protocol UIViewControllerContextTransitioning, WBStoryFullScreenInteractiveControllerDelegate;

@interface WBStoryFullScreenInteractiveController : UIPercentDrivenInteractiveTransition
{
    struct {
        unsigned int transitionFinished:1;
        unsigned int transitionCancelled:1;
        unsigned int transitionCompleted:1;
    } _flags;
    _Bool _finished;
    _Bool _cancelled;
    _Bool _completed;
    _Bool _inTransition;
    id <WBStoryFullScreenInteractiveControllerDelegate> _delegate;
    id <UIViewControllerContextTransitioning> _transitionContext;
}

@property(nonatomic, getter=isInTransition) _Bool inTransition; // @synthesize inTransition=_inTransition;
@property(nonatomic, getter=isFinished) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) __weak id <WBStoryFullScreenInteractiveControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isCompleted;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)dealloc;

@end

