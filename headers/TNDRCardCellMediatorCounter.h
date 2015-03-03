//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TNDRCardCellMediatorCounter : NSObject
{
    NSMutableArray *_keys;
}

- (void).cxx_destruct;
- (void)addKey:(id)arg1;
- (void)addKeysFromArray:(id)arg1;
- (unsigned int)count;
- (unsigned int)countForKey:(id)arg1;
- (id)description;
- (unsigned int)globalIndexForKey:(id)arg1 atLocalizedIndex:(unsigned int)arg2;
- (id)init;
- (void)insertKey:(id)arg1 atGlobalIndex:(unsigned int)arg2;
- (id)keyAtGlobalIndex:(unsigned int)arg1;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
- (unsigned int)localizedIndexOfKeyAtGlobalIndex:(unsigned int)arg1;
- (void)removeAllKeys;
- (void)removeKeyAtGlobalIndex:(unsigned int)arg1;
- (id)synchronizedKeysCopy;

@end
