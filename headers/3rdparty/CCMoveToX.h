//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCActionInterval.h"

@interface CCMoveToX : CCActionInterval
{
    float _endPosition;
    float _startPos;
    CDUnknownBlockType block;
}

- (void).cxx_destruct;
- (id)initWithDuration:(double)arg1 positionX:(float)arg2 callback:(CDUnknownBlockType)arg3;
- (void)startWithTarget:(id)arg1;
- (void)update:(double)arg1;

@end

