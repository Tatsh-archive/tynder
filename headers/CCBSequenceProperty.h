//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CCBSequenceProperty : NSObject
{
    NSString *_name;
    int _type;
    NSMutableArray *_keyframes;
}

+ (id)getPropertyNameFromTypeId:(int)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
@property(readonly, nonatomic) NSMutableArray *keyframes; // @synthesize keyframes=_keyframes;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int type; // @synthesize type=_type;

@end

