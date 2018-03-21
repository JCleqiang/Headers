//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>

@class NSString, QZImageClipperBase, UIImage;

@interface QZCImageView : UIImageView <IQZUrlDownloaderDelegate>
{
    UIImage *_defaultImage;
    NSString *_imageUrl;
    _Bool _cancelWhenRemove;
    QZImageClipperBase *_clipper;
    NSString *_clientKey;
    _Bool _downloadByFIFO;
    int _xo;
    _Bool _stretch;
    CDUnknownBlockType _downloaddFinishBlock;
}

@property(nonatomic) _Bool stretch; // @synthesize stretch=_stretch;
@property(copy, nonatomic) CDUnknownBlockType downloaddFinishBlock; // @synthesize downloaddFinishBlock=_downloaddFinishBlock;
@property(nonatomic) _Bool cancelWhenRemove; // @synthesize cancelWhenRemove=_cancelWhenRemove;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1;
- (void)dealloc;
- (void)requestImageUrl:(id)arg1 defaultImage:(id)arg2;
- (void)setImageUrl:(id)arg1 defaultImage:(id)arg2;
@property(retain, nonatomic) NSString *imageUrl; // @dynamic imageUrl;
@property(retain, nonatomic) NSString *clientKey; // @dynamic clientKey;
- (void)reset;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) QZImageClipperBase *clipper; // @dynamic clipper;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UIImage *defaultImage; // @dynamic defaultImage;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
