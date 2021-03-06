//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CCEffectVarying : NSObject
{
    NSString *_name;
    NSString *_type;
    int _count;
}

+ (id)varying:(id)arg1 name:(id)arg2;
+ (id)varying:(id)arg1 name:(id)arg2 count:(int)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) int count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *declaration;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (id)initWithType:(id)arg1 name:(id)arg2 count:(int)arg3;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;

@end

