//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSLiveQuizAnchorComponent, KSQuizSheet, NSArray;
@protocol KSLiveQuizAnchorViewModel, KSLiveQuizSelectSheetDataItem;

@interface KSLiveQuizSelectSheetViewModel : NSObject
{
    _Bool _okButtonEnabled;
    KSLiveQuizAnchorComponent *_anchorComponent;
    unsigned long long _selectedIndex;
    KSQuizSheet *_selectedSheet;
    NSArray *_sheets;
}

@property(retain, nonatomic) NSArray *sheets; // @synthesize sheets=_sheets;
@property(retain, nonatomic) KSQuizSheet *selectedSheet; // @synthesize selectedSheet=_selectedSheet;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak KSLiveQuizAnchorComponent *anchorComponent; // @synthesize anchorComponent=_anchorComponent;
@property(nonatomic) _Bool okButtonEnabled; // @synthesize okButtonEnabled=_okButtonEnabled;
- (void).cxx_destruct;
- (void)addConfirmClickLog;
- (_Bool)startQuiz;
- (void)didSelectDataItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) id <KSLiveQuizSelectSheetDataItem> selectedItem;
@property(readonly, nonatomic) NSArray *dataItems;
- (id)prepareDatas;
@property(readonly, nonatomic) NSObject<KSLiveQuizAnchorViewModel> *anchorViewModel;
- (id)initWithLiveQuizAnchorComponent:(id)arg1 sheets:(id)arg2;

@end

