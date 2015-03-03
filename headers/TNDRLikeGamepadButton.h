//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRGamepadButton.h"

@class CALayer, CAShapeLayer, UIColor;

@interface TNDRLikeGamepadButton : TNDRGamepadButton
{
    UIColor *_enabledColor;
    UIColor *_disabledColor;
    BOOL _dialogHeaderView;
    float _percentFilled;
    CALayer *_grayBackgroundLayer;
    CALayer *_greenFillLayer;
    CALayer *_heartIconLayer;
    CALayer *_foregroundCircleLayer;
    CAShapeLayer *_nonButtonBackgroundLayer;
    float _lastPercentage;
    struct CGSize _heartIconSize;
}

- (void).cxx_destruct;
- (void)adjustGreenFillLayerFrameForAnimation;
- (struct CGPoint)centerPosition;
- (float)computeScaleValueForYFromPercentage:(float)arg1;
- (void)drainToAndHoverAtPercent:(float)arg1;
@property(retain, nonatomic) CALayer *foregroundCircleLayer; // @synthesize foregroundCircleLayer=_foregroundCircleLayer;
@property(retain, nonatomic) CALayer *grayBackgroundLayer; // @synthesize grayBackgroundLayer=_grayBackgroundLayer;
@property(retain, nonatomic) CALayer *greenFillLayer; // @synthesize greenFillLayer=_greenFillLayer;
@property(retain, nonatomic) CALayer *heartIconLayer; // @synthesize heartIconLayer=_heartIconLayer;
@property(nonatomic) struct CGSize heartIconSize; // @synthesize heartIconSize=_heartIconSize;
- (void)hoverFillAtPercent:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithGamepadWell:(id)arg1 gamepadType:(unsigned int)arg2 initialFillPercent:(float)arg3;
- (struct CGRect)insetBounds;
@property(nonatomic, getter=isDialogHeaderView) BOOL dialogHeaderView; // @synthesize dialogHeaderView=_dialogHeaderView;
@property(nonatomic) float lastPercentage; // @synthesize lastPercentage=_lastPercentage;
@property(retain, nonatomic) CAShapeLayer *nonButtonBackgroundLayer; // @synthesize nonButtonBackgroundLayer=_nonButtonBackgroundLayer;
@property(readonly, nonatomic) float percentFilled; // @synthesize percentFilled=_percentFilled;
- (void)setEnabled:(BOOL)arg1;
- (void)setIconLayer:(id)arg1;
- (void)setPercentFilled:(float)arg1;
- (void)setPercentFilled:(float)arg1 animated:(BOOL)arg2;
- (void)setPercentFilled:(float)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPercentFilled:(float)arg1 animated:(BOOL)arg2 slowDrain:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setupBackgroundGrayLayer;
- (void)setupColors;
- (void)setupForegroundCircle;
- (void)setupGreenFillLayer;
- (void)setupHeartIconCutoutLayer;
- (void)setupIndividualLayers;
- (void)setupNonButtonBackgroundLayer;
- (void)showHeartInnerShadow:(BOOL)arg1;

@end

