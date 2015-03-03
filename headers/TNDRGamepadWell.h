//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TNDRGamepadWell : NSObject
{
    float _relativeRadius;
    float _renderedGamepadWidth;
    unsigned int _gamepadType;
    float _optimalButtonRadius;
    struct CGPoint _relativeCenter;
}

@property(nonatomic) unsigned int gamepadType; // @synthesize gamepadType=_gamepadType;
- (id)initWithRelativeCenter:(struct CGPoint)arg1 relativeRadius:(float)arg2 renderedGamepadWidth:(float)arg3;
@property(nonatomic) float optimalButtonRadius; // @synthesize optimalButtonRadius=_optimalButtonRadius;
@property(nonatomic) struct CGPoint relativeCenter; // @synthesize relativeCenter=_relativeCenter;
@property(nonatomic) float relativeRadius; // @synthesize relativeRadius=_relativeRadius;
@property(readonly, nonatomic) struct CGPoint renderedCenter;
@property(nonatomic) float renderedGamepadWidth; // @synthesize renderedGamepadWidth=_renderedGamepadWidth;
@property(readonly, nonatomic) float renderedRadius;

@end

