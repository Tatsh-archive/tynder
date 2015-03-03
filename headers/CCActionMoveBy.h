//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCActionInterval.h"

#import "NSCopying.h"

@interface CCActionMoveBy : CCActionInterval <NSCopying>
{
    struct CGPoint _positionDelta;
    struct CGPoint _startPos;
    struct CGPoint _previousPos;
}

+ (id)actionWithDuration:(double)arg1 position:(struct CGPoint)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDuration:(double)arg1 position:(struct CGPoint)arg2;
- (id)reverse;
- (void)startWithTarget:(id)arg1;
- (void)update:(double)arg1;

@end
