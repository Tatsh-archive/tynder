//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRGamepadButton.h"

@interface TNDRPassportGamepadButton : TNDRGamepadButton
{
    unsigned int _buttonState;
}

@property(nonatomic) unsigned int buttonState; // @synthesize buttonState=_buttonState;
- (id)initWithGamepadWell:(id)arg1 gamepadType:(unsigned int)arg2;
- (void)travelingStateChanged:(id)arg1;
- (void)updateIcon;

@end

