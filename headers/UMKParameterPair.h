//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UMKParameterPair : NSObject
{
    NSString *_key;
    id _value;
}

- (void).cxx_destruct;
- (id)URLEncodedKeyStringWithEncoding:(unsigned int)arg1;
- (id)URLEncodedStringValueWithEncoding:(unsigned int)arg1;
- (id)URLEncodedValueStringWithEncoding:(unsigned int)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) id value; // @synthesize value=_value;

@end
