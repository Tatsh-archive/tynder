//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CCAnimationCache : NSObject
{
    NSMutableDictionary *_animations;
}

+ (id)alloc;
+ (void)purgeSharedAnimationCache;
+ (id)sharedAnimationCache;
- (void).cxx_destruct;
- (void)addAnimation:(id)arg1 name:(id)arg2;
- (void)addAnimationsWithDictionary:(id)arg1;
- (void)addAnimationsWithFile:(id)arg1;
- (id)animationByName:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)parseVersion1:(id)arg1;
- (void)parseVersion2:(id)arg1;
- (void)removeAnimationByName:(id)arg1;

@end
