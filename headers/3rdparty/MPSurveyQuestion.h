//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MPSurveyQuestion : NSObject
{
    unsigned int _ID;
    NSString *_type;
    NSString *_prompt;
}

+ (id)questionWithJSONObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int ID; // @synthesize ID=_ID;
- (id)initWithID:(unsigned int)arg1 type:(id)arg2 andPrompt:(id)arg3;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;

@end

