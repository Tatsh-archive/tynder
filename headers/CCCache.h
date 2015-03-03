//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CCCache : NSObject
{
    NSMutableDictionary *_cacheList;
}

+ (id)cache;
- (void).cxx_destruct;
- (id)createPublicObjectForSharedData:(id)arg1;
- (id)createSharedDataForKey:(id)arg1;
- (void)disposeOfSharedData:(id)arg1;
- (id)entryForKey:(id)arg1;
- (void)flush;
- (id)init;
- (BOOL)keyExists:(id)arg1;
- (void)makeAlias:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)preload:(id)arg1;
- (id)rawObjectForKey:(id)arg1;

@end
