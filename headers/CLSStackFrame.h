//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CLSStackFrame : NSObject
{
    NSString *_symbol;
    NSString *_fileName;
    unsigned int _lineNumber;
    unsigned long long _offset;
    unsigned long long _address;
    unsigned int _importance;
}

+ (id)stackFrame;
+ (id)stackFrameWithAddress:(unsigned int)arg1;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
- (void)dealloc;
- (id)description;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) unsigned int importance; // @synthesize importance=_importance;
- (id)init;
@property(nonatomic) unsigned int lineNumber; // @synthesize lineNumber=_lineNumber;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;

@end

