//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface FBLikeBoxBorderView : UIView
{
    float _borderCornerRadius;
    float _borderWidth;
    unsigned int _caretPosition;
    UIView *_contentView;
    UIColor *_fillColor;
    UIColor *_foregroundColor;
}

- (struct UIEdgeInsets)_borderInsets;
- (void)_initializeContent;
- (void)awakeFromNib;
@property(nonatomic) float borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) unsigned int caretPosition; // @synthesize caretPosition=_caretPosition;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
