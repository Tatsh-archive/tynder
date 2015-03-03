//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCControl.h"

@class CCSprite, CCSprite9Slice, NSMutableDictionary;

@interface CCSlider : CCControl
{
    NSMutableDictionary *_backgroundSpriteFrames;
    NSMutableDictionary *_handleSpriteFrames;
    BOOL _draggingHandle;
    struct CGPoint _handleStartPos;
    struct CGPoint _dragStartPos;
    float _dragStartValue;
    CCSprite9Slice *_background;
    CCSprite *_handle;
    float _sliderValue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CCSprite9Slice *background; // @synthesize background=_background;
- (id)backgroundSpriteFrameForState:(unsigned int)arg1;
@property(readonly, nonatomic) CCSprite *handle; // @synthesize handle=_handle;
- (id)handleSpriteFrameForState:(unsigned int)arg1;
- (id)init;
- (id)initWithBackground:(id)arg1 andHandleImage:(id)arg2;
- (void)inputDraggedWithPos:(struct CGPoint)arg1;
- (void)inputEnteredWithWorlPos:(struct CGPoint)arg1;
- (void)inputUpInside;
- (void)inputUpOutside;
- (void)layout;
- (void)setBackgroundSpriteFrame:(id)arg1 forState:(unsigned int)arg2;
- (void)setHandleSpriteFrame:(id)arg1 forState:(unsigned int)arg2;
@property(nonatomic) float sliderValue; // @synthesize sliderValue=_sliderValue;
- (void)setValue:(id)arg1 forKey:(id)arg2 state:(unsigned int)arg3;
- (void)stateChanged;
- (void)touchEntered:(id)arg1 withEvent:(id)arg2;
- (void)touchMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchUpInside:(id)arg1 withEvent:(id)arg2;
- (void)touchUpOutside:(id)arg1 withEvent:(id)arg2;
- (void)updatePropertiesForState:(unsigned int)arg1;
- (void)updateSliderPositionFromValue;
- (id)valueForKey:(id)arg1 state:(unsigned int)arg2;

@end

