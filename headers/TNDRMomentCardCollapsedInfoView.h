//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TNDRMomentCardCollapsedInfoView : UIView
{
    BOOL _fromChat;
    UILabel *_momentCountLabel;
    UILabel *_timeLabel;
    UIImageView *_previewImageView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isFromChat) BOOL fromChat; // @synthesize fromChat=_fromChat;
@property(retain, nonatomic) UILabel *momentCountLabel; // @synthesize momentCountLabel=_momentCountLabel;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void)setup;
- (void)setupCollapsedContentLabels;

@end
