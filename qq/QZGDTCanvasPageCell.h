//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <QQMainProject/QZCanvasVideoViewDelegate-Protocol.h>
#import <QQMainProject/QZPhotoThumbDelegate-Protocol.h>

@class NSMutableArray, NSString, QZGDTCanvasPageInfo, QzoneFeedModel;
@protocol QZGDTCanvasPageCellDelegate;

@interface QZGDTCanvasPageCell : UITableViewCell <QZPhotoThumbDelegate, QZCanvasVideoViewDelegate>
{
    double currentY;
    struct CGRect _firstImgFrame;
    double _moveDistance;
    NSMutableArray *_imgArray;
    double _firstScreenLoadTime;
    _Bool _firstImgLoaded;
    _Bool _firstPageRendered;
    _Bool _firstPageLoadReported;
    double _canvasOpenTime;
    id <QZGDTCanvasPageCellDelegate> _delegate;
    QZGDTCanvasPageInfo *_page;
    QzoneFeedModel *_model;
}

@property(nonatomic) QzoneFeedModel *model; // @synthesize model=_model;
@property(retain, nonatomic) QZGDTCanvasPageInfo *page; // @synthesize page=_page;
@property(nonatomic) __weak id <QZGDTCanvasPageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationWithWiews:(id)arg1;
- (void)setComponentImage:(id)arg1 view:(id)arg2;
- (void)render;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

