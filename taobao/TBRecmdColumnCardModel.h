//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRecmdCardModel.h"

@class TBRecmdPicComponent, TBRecmdRichTextComponent, TBRecmdSkinModel;

@interface TBRecmdColumnCardModel : TBRecmdCardModel
{
    TBRecmdPicComponent *_masterPic;
    TBRecmdSkinModel *_skin;
    TBRecmdRichTextComponent *_title;
    TBRecmdRichTextComponent *_desc;
}

+ (id)factoryKey;
@property(retain, nonatomic) TBRecmdRichTextComponent *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) TBRecmdRichTextComponent *title; // @synthesize title=_title;
@property(retain, nonatomic) TBRecmdSkinModel *skin; // @synthesize skin=_skin;
@property(retain, nonatomic) TBRecmdPicComponent *masterPic; // @synthesize masterPic=_masterPic;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)bgColorStr;
- (id)rightIconImgURL;
- (id)leftIconImgURL;
- (id)bgImgURL;
- (id)subTitleStr;
- (id)titleStr;
- (id)columnImgURL;

@end
