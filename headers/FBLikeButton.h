//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImage, UIImageView;

@interface FBLikeButton : UIButton
{
    UIImage *_iconImageNormal;
    UIImage *_iconImageSelected;
    UIImageView *_iconImageView;
}

- (struct UIEdgeInsets)_contentEdgeInsetsForContentHeight:(float)arg1;
- (struct UIEdgeInsets)_contentEdgeInsetsForHeight:(float)arg1;
- (void)_initializeContent;
- (struct CGSize)_sizeWithTitleSize:(struct CGSize)arg1;
- (void)_updateIconForState;
- (void)awakeFromNib;
- (void)dealloc;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

