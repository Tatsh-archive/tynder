//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CCProfilingTimer : NSObject
{
    NSString *name;
    struct timeval startTime;
    double averageTime;
    double minTime;
    double maxTime;
    double totalTime;
    unsigned int numberOfCalls;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (void)reset;

@end

