//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCNode.h"

@class NSArray, NSMutableArray;

@interface CCParallaxNode : CCNode
{
    NSMutableArray *_parallaxArray;
    struct CGPoint _lastPosition;
}

- (void).cxx_destruct;
- (struct CGPoint)absolutePosition_;
- (void)addChild:(id)arg1 z:(int)arg2 parallaxRatio:(struct CGPoint)arg3 positionOffset:(struct CGPoint)arg4;
- (void)addChild:(id)arg1 z:(int)arg2 tag:(int)arg3;
- (id)init;
@property(readonly, nonatomic) NSArray *parallaxArray; // @synthesize parallaxArray=_parallaxArray;
- (void)removeAllChildrenWithCleanup:(BOOL)arg1;
- (void)removeChild:(id)arg1 cleanup:(BOOL)arg2;
- (void)visit:(id)arg1 parentTransform:(const union _GLKMatrix4 *)arg2;

@end

