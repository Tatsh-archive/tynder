//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CAShapeLayer, UIColor;

@interface TNDRTitleButton : UIButton
{
    BOOL _shouldRotate;
    float _titleness;
    UIColor *_buttonColor;
    UIColor *_titleColor;
    unsigned int _titleBadgingStyle;
    CAShapeLayer *_titleBadgeLayer;
    id <TNDRTitleButtonDelegate> _delegate;
    struct CGSize _titleBadgeOffset;
}

- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
- (void)buttonDepressed;
- (void)buttonDragged;
- (void)buttonPressed;
- (id)createColorWithFirstColor:(id)arg1 secondColor:(id)arg2 andProportion:(float)arg3;
@property(readonly, nonatomic) UIColor *currentColor;
@property(nonatomic) __weak id <TNDRTitleButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeTitleBadgingStyle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)pulseAnimation;
@property(nonatomic) BOOL shouldRotate; // @synthesize shouldRotate=_shouldRotate;
@property(nonatomic) __weak CAShapeLayer *titleBadgeLayer; // @synthesize titleBadgeLayer=_titleBadgeLayer;
@property(nonatomic) struct CGSize titleBadgeOffset; // @synthesize titleBadgeOffset=_titleBadgeOffset;
@property(nonatomic) unsigned int titleBadgingStyle; // @synthesize titleBadgingStyle=_titleBadgingStyle;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) float titleness; // @synthesize titleness=_titleness;
- (void)setupBadge;
- (void)setupTitleButtonActionsAndNotifications;
- (void)updateBadgePosition;

@end

