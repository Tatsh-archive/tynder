//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface MPObjectSerializerConfig : NSObject
{
    NSDictionary *_classes;
    NSDictionary *_enums;
    NSArray *_enumDescriptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *classDescriptions;
- (id)classWithName:(id)arg1;
@property(readonly, nonatomic) NSArray *enumDescriptions; // @synthesize enumDescriptions=_enumDescriptions;
- (id)enumWithName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)typeWithName:(id)arg1;

@end

