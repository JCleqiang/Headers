//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatMessageBaseView.h"

@class PPChatMessageTitleView, PPChatNewsItem;

@interface PPChatNewsMessageView : PPChatMessageBaseView
{
    PPChatNewsItem *_newsItem;
    PPChatMessageTitleView *_messageTitleView;
}

+ (_Bool)hasTitleView:(id)arg1;
@property(retain, nonatomic) PPChatMessageTitleView *messageTitleView; // @synthesize messageTitleView=_messageTitleView;
@property(retain, nonatomic) PPChatNewsItem *newsItem; // @synthesize newsItem=_newsItem;
- (void).cxx_destruct;

@end

