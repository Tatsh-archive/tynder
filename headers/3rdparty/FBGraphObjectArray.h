//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@interface FBGraphObjectArray : NSMutableArray
{
    NSMutableArray *_jsonArray;
}

- (void)addObject:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)graphObjectifyAll;
- (id)graphObjectifyAtIndex:(unsigned int)arg1;
- (id)initWrappingArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectEnumerator;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)reverseObjectEnumerator;

@end

