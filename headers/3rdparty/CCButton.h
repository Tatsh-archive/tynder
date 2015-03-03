//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCControl.h"

@class CCLabelTTF, CCSprite9Slice, NSMutableDictionary, NSString;

@interface CCButton : CCControl
{
    NSMutableDictionary *_backgroundSpriteFrames;
    NSMutableDictionary *_backgroundColors;
    NSMutableDictionary *_backgroundOpacities;
    NSMutableDictionary *_labelColors;
    NSMutableDictionary *_labelOpacities;
    float _originalScaleX;
    float _originalScaleY;
    float _originalHitAreaExpansion;
    BOOL _zoomWhenHighlighted;
    BOOL _togglesSelectedState;
    CCSprite9Slice *_background;
    CCLabelTTF *_label;
    float _horizontalPadding;
    float _verticalPadding;
}

+ (id)buttonWithTitle:(id)arg1;
+ (id)buttonWithTitle:(id)arg1 fontName:(id)arg2 fontSize:(float)arg3;
+ (id)buttonWithTitle:(id)arg1 spriteFrame:(id)arg2;
+ (id)buttonWithTitle:(id)arg1 spriteFrame:(id)arg2 highlightedSpriteFrame:(id)arg3 disabledSpriteFrame:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) CCSprite9Slice *background; // @synthesize background=_background;
- (id)backgroundColorForState:(unsigned int)arg1;
- (float)backgroundOpacityForState:(unsigned int)arg1;
- (id)backgroundSpriteFrameForState:(unsigned int)arg1;
- (float)hitAreaExpansion;
@property(nonatomic) float horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 fontName:(id)arg2 fontSize:(float)arg3;
- (id)initWithTitle:(id)arg1 spriteFrame:(id)arg2;
- (id)initWithTitle:(id)arg1 spriteFrame:(id)arg2 highlightedSpriteFrame:(id)arg3 disabledSpriteFrame:(id)arg4;
- (id)keysForwardedToLabel;
@property(readonly, nonatomic) CCLabelTTF *label; // @synthesize label=_label;
- (id)labelColorForState:(unsigned int)arg1;
- (float)labelOpacityForState:(unsigned int)arg1;
- (void)layout;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundOpacity:(float)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundSpriteFrame:(id)arg1 forState:(unsigned int)arg2;
- (void)setColor:(id)arg1;
- (void)setHitAreaExpansion:(float)arg1;
- (void)setLabelColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setLabelOpacity:(float)arg1 forState:(unsigned int)arg2;
@property(retain, nonatomic) NSString *title;
@property(nonatomic) BOOL togglesSelectedState; // @synthesize togglesSelectedState=_togglesSelectedState;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 state:(unsigned int)arg3;
@property(nonatomic) float verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) BOOL zoomWhenHighlighted; // @synthesize zoomWhenHighlighted=_zoomWhenHighlighted;
- (void)stateChanged;
- (void)touchEntered:(id)arg1 withEvent:(id)arg2;
- (void)touchExited:(id)arg1 withEvent:(id)arg2;
- (void)touchUpInside:(id)arg1 withEvent:(id)arg2;
- (void)touchUpOutside:(id)arg1 withEvent:(id)arg2;
- (void)triggerAction;
- (void)updatePropertiesForState:(unsigned int)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 state:(unsigned int)arg2;

@end
