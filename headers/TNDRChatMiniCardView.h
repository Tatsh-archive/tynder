//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRMiniCardView.h"

@class FBKVOController, UIImageView;

@interface TNDRChatMiniCardView : TNDRMiniCardView
{
    UIImageView *_previewImageView;
    FBKVOController *_KVOController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (void)setupCollapsedRelativeTimeLabel;
- (void)setupImageView;
- (void)setupInfoContainerView;
- (void)setupMomentCountLabel;
- (void)setupPreviewImageView;

@end

