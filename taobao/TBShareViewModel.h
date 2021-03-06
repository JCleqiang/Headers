//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBShareContactViewModel, TBShareModel, TBSharePromotionViewModel;

@interface TBShareViewModel : NSObject
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _shareBlock;
    TBShareModel *_model;
    TBShareContactViewModel *_contactViewModel;
    TBSharePromotionViewModel *_promotionViewModel;
}

@property(retain, nonatomic) TBSharePromotionViewModel *promotionViewModel; // @synthesize promotionViewModel=_promotionViewModel;
@property(retain, nonatomic) TBShareContactViewModel *contactViewModel; // @synthesize contactViewModel=_contactViewModel;
@property(retain, nonatomic) TBShareModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end

