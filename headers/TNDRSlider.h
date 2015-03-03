//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIGestureRecognizerDelegate.h"

@class NSNumber, NSString, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer;

@interface TNDRSlider : UIControl <UIGestureRecognizerDelegate>
{
    UIImageView *_sliderInactive;
    UIImageView *_sliderActive;
    BOOL _isSingleHead;
    UIImageView *_lowHead;
    UIImageView *_hiHead;
    float _lowValue;
    float _hiValue;
    UIPanGestureRecognizer *_lowPanGR;
    UIPanGestureRecognizer *_hiPanGR;
    UILongPressGestureRecognizer *_lowPressGR;
    UILongPressGestureRecognizer *_hiPressGR;
    struct CGPoint _panStartPoint;
    struct CGPoint _panCurPoint;
    BOOL shouldShowTooltip;
    BOOL _maxIsRange;
    NSString *_valueLabel;
    NSNumber *_minimumSpan;
    NSNumber *_startValue;
    NSNumber *_endValue;
    NSNumber *_maximumValue;
    NSNumber *_minimumValue;
    id _delegate;
}

- (void).cxx_destruct;
- (void)alignThumb:(id)arg1 toValue:(int)arg2;
- (void)calculateAllSubFramesAndPositions;
- (float)calculateMinimumSpanPixels;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *endValue; // @synthesize endValue=_endValue;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleHeadPan:(id)arg1;
- (void)handlePressPan:(id)arg1;
- (id)hiValue;
- (id)init;
- (BOOL)isDualHead;
- (id)lowValue;
@property(nonatomic) BOOL maxIsRange; // @synthesize maxIsRange=_maxIsRange;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumSpan; // @synthesize minimumSpan=_minimumSpan;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (void)registerGestureRecognizers;
@property(retain, nonatomic) NSNumber *startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) NSString *valueLabel; // @synthesize valueLabel=_valueLabel;
- (void)setup;
- (id)valueOfPositionFor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

