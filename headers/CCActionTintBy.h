//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCActionInterval.h"

#import "NSCopying.h"

@interface CCActionTintBy : CCActionInterval <NSCopying>
{
    float _deltaR;
    float _deltaG;
    float _deltaB;
    float _fromR;
    float _fromG;
    float _fromB;
}

+ (id)actionWithDuration:(double)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDuration:(double)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4;
- (id)reverse;
- (void)startWithTarget:(id)arg1;
- (void)update:(double)arg1;

@end
