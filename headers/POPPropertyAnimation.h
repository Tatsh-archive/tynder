//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POPAnimation.h"

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation
{
}

- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
- (void)_initState;
@property(nonatomic) unsigned int clampMode;
- (id)currentValue;
@property(copy, nonatomic) id fromValue;
@property(nonatomic, getter=isAdditive) BOOL additive;
- (id)progressMarkers;
@property(retain, nonatomic) POPAnimatableProperty *property;
@property(nonatomic) float roundingFactor;
- (void)setProgressMarkers:(id)arg1;
@property(copy, nonatomic) id toValue;

@end

