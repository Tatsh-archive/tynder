//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCActionInstant.h"

#import "NSCopying.h"

@interface CCActionCallFunc : CCActionInstant <NSCopying>
{
    id _targetCallback;
    SEL _selector;
}

+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)execute;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
@property(nonatomic) __weak id targetCallback; // @synthesize targetCallback=_targetCallback;
- (void)update:(double)arg1;

@end

