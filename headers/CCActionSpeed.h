//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCAction.h"

#import "NSCopying.h"

@class CCActionInterval;

@interface CCActionSpeed : CCAction <NSCopying>
{
    CCActionInterval *_innerAction;
    float _speed;
}

+ (id)actionWithAction:(id)arg1 speed:(float)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAction:(id)arg1 speed:(float)arg2;
@property(retain, nonatomic) CCActionInterval *innerAction; // @synthesize innerAction=_innerAction;
- (BOOL)isDone;
- (id)reverse;
@property(nonatomic) float speed; // @synthesize speed=_speed;
- (void)startWithTarget:(id)arg1;
- (void)step:(double)arg1;
- (void)stop;

@end

